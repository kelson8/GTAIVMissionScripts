void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U520 = 10.00000000;
    l_U521 = 10.00000000;
    l_U530 = 0;
    l_U531 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 0;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = {967.48310000, -278.59700000, 18.20000000};
    l_U588 = {974.59330000, -265.68100000, 20.66720000};
    l_U591 = {955.02960000, -258.14900000, 17.76870000};
    l_U594 = {974.93770000, -273.00180000, 20.70550000};
    l_U597 = {976.21890000, -277.44600000, 22.70780000};
    l_U600 = {964.93260000, -289.66020000, 33.07120000};
    l_U603 = {950.25500000, -308.46300000, 20.23900000};
    l_U609 = {893.25560000, -608.05510000, 11.99250000};
    l_U612 = {897.10670000, -613.43400000, 15.02200000};
    l_U615 = {957.37000000, -261.48000000, 21.41200000};
    l_U618 = {-90.00000000, 0.00000000, 180.00000000};
    l_U621 = {969.66580000, -286.78720000, 33.07110000};
    l_U624 = {975.16820000, -284.60000000, 30.14350000};
    l_U627 = {892.52150000, -607.00330000, 10.98650000};
    l_U630 = {898.85930000, -615.14150000, 16.02040000};
    l_U633 = {951.82210000, -267.55660000, 17.27460000};
    l_U636 = {951.56620000, -274.64670000, 17.27390000};
    l_U639 = {947.00000000, -261.20000000, 18.50000000};
    l_U705 = 0;
    l_U706 = 0;
    l_U707 = 0;
    l_U708 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_735();
        sub_2845();
    }
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    SETTIMERB( 0 );
    LOAD_ADDITIONAL_TEXT( "FAUST7", 0 );
    LOAD_ADDITIONAL_TEXT( "F6AUD", 6 );
    sub_3175( "F6AUD" );
    sub_3338( 0, sub_3289(), "NIKO", 0 );
    l_U532 = 0;
    ADD_SCENARIO_BLOCKING_AREA( l_U609, l_U612 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    sub_3566( 896.08830000, -599.60100000, 12.94690000, 2.60000000, 889.05320000, -574.09600000, 13.57630000, 275.00000000 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "FAU6_A" );
        FORCE_WEATHER_NOW( 3 );
        ADD_SCENARIO_BLOCKING_AREA( l_U627, l_U630 );
        CLEAR_AREA( 894.40000000, -609.24890000, 12.00000000, 4.00000000, 1 );
        CLEAR_AREA_OF_OBJECTS( 894.40000000, -609.24890000, 10.00000000, 50.00000000 );
        CLEAR_AREA_OF_CHARS( 894.40000000, -609.24890000, 10.00000000, 150.00000000 );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FAU6_A" );
        FLUSH_SCENARIO_BLOCKING_AREAS();
    }
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_AREA( 894.50000000, -609.24890000, 12.99780000, 2.00000000, 1 );
    SET_CHAR_COORDINATES( sub_3289(), 894.50000000, -609.24890000, 12.99780000 );
    SET_CHAR_HEADING( sub_3289(), 90.00000000 );
    sub_4402( 4 );
    REQUEST_MODEL( -2088164056 );
    REQUEST_MODEL( 1976502708 );
    while ((NOT (HAS_MODEL_LOADED( 1976502708 ))) || ((NOT (HAS_MODEL_LOADED( -2088164056 ))) || (NOT (sub_5130( 4 )))))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 890.12270000, -609.19480000, 13.93780000 );
    TASK_SIT_DOWN_INSTANTLY( sub_3289(), 0, 0, 800 );
    WAIT( 500 );
    FORCE_WEATHER( 4 );
    DO_SCREEN_FADE_IN( 500 );
    ADD_BLIP_FOR_COORD( 950.43570000, -308.00850000, 18.88990000, ref l_U644 );
    SET_ROUTE( l_U644, 1 );
    PRINT_NOW( "F7_T01", 7500, 1 );
    SET_PLAYER_CONTROL( sub_2874(), 1 );
    SET_CAM_BEHIND_PED( sub_3289() );
    STOP_PED_SPEAKING( sub_3289(), 0 );
    g_U9210 = 1;
    g_U9346 = 0;
    l_U530 = 0;
    while (true)
    {
        WAIT( 0 );
        sub_5406();
        switch (l_U530)
        {
            case 0:
            sub_5622();
            break;
            case 1:
            sub_11896();
            break;
            case 3:
            sub_17728();
            break;
            case 4:
            sub_23771();
            break;
            case 5:
            sub_28586();
            break;
            case 6:
            sub_31350();
            break;
        }
        if (DOES_CHAR_EXIST( l_U659 ))
        {
            if (IS_CHAR_INJURED( l_U659 ))
            {
                if (NOT l_U584)
                {
                    GET_GAME_TIMER( ref l_U544 );
                    l_U584 = 1;
                }
                GET_GAME_TIMER( ref l_U541 );
                if ((l_U541 - l_U544) > 10000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U659 )))
                    {
                        SET_CHAR_HEALTH( l_U659, 0 );
                    }
                }
                if (IS_CHAR_FATALLY_INJURED( l_U659 ))
                {
                    if (NOT (l_U531 > 5))
                    {
                        sub_20567( ref l_U681, 0 );
                        sub_34901();
                    }
                }
                if (l_U530 > 1)
                {
                    N_1363505769( l_U659, ref l_U547, ref l_U548, ref l_U549 );
                    GET_CHAR_COORDINATES( sub_3289(), ref l_U550, ref l_U551, ref l_U552 );
                    GET_DISTANCE_BETWEEN_COORDS_2D( l_U547, l_U548, l_U550, l_U551, ref l_U553 );
                    if (l_U553 >= 100.00000000)
                    {
                        DELETE_CHAR( ref l_U659 );
                        sub_24247();
                    }
                }
            }
            else if (l_U530 > 3)
            {
                GET_GAME_TIMER( ref l_U540 );
                if ((l_U540 - l_U543) > 60000)
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U659 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 15.00000000, 40.00000000, 25.00000000, 0 )))
                        {
                            DELETE_CHAR( ref l_U659 );
                            sub_24247();
                        }
                    }
                }
            }
            if (l_U530 > 1)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3289(), l_U659, 100.00000000, 100.00000000, 0 )))
                {
                    SET_CREATE_RANDOM_COPS( 1 );
                    DELETE_CHAR( ref l_U659 );
                    sub_24247();
                }
            }
        }
    }
    return;
}

void sub_735()
{
    sub_744();
    return;
}

void sub_744()
{
    int iVar2;

    iVar2 = 4;
    sub_758( iVar2 );
    sub_1934( iVar2 );
    return;
}

void sub_758(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_802();
        sub_963();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1071();
            sub_1110();
        }
    }
    sub_1186();
    sub_1287();
    uVar5 = sub_1400( uParam0 );
    sub_1841( uVar5, 0 );
    return;
}

void sub_802()
{
    sub_816( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_916();
    }
    return;
}

void sub_816(int iParam0)
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

void sub_916()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_963()
{
    sub_972();
    return;
}

void sub_972()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1071()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1110()
{
    sub_1119();
    return;
}

void sub_1119()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1186()
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

void sub_1287()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1309();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1309()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1400(unknown uParam0)
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
    sub_1799( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1799(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1841(int iParam0, boolean bParam1)
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

void sub_1934(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1943();
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
        sub_2718();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1943()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1981( 5, g_U569[I] )) == 1))
        {
            if ((sub_1981( 1, g_U569[I] )) != 0)
            {
                sub_2267( I );
            }
        }
    }
    if (NOT sub_2433())
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

int sub_1981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2267(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2352( g_U569 - 1 );
    return;
}

void sub_2352(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2433()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1981( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2718()
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

void sub_2845()
{
    ENABLE_SCENE_STREAMING( 1 );
    g_U9211 = 0;
    g_U9346 = 1;
    SET_EVERYONE_IGNORE_PLAYER( sub_2874(), 0 );
    REMOVE_CAR_RECORDING( 520 );
    SET_CREATE_RANDOM_COPS( 1 );
    sub_2932( 1 );
    SET_ALL_CARS_CAN_BE_DAMAGED( 1 );
    DESTROY_ALL_CAMS();
    ALLOW_EMERGENCY_SERVICES( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2874()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2932(unknown uParam0)
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

void sub_3175(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3194();
    return;
}

void sub_3194()
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

void sub_3289()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3422( "\n PED NUMBER ", uParam0 );
    sub_3462( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3422(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3462(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3566(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3289(), uVar10 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar10 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar10 );
                    bVar11 = true;
                }
            }
            else
            {
                uVar10 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (LOCATE_CAR_3D( uVar10, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar10, uParam7 );
                SET_CAR_COORDINATES( uVar10, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
                sub_3828( uVar10 );
                sub_3906( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_4041( uVar10 );
        }
    }
    return;
}

void sub_3828(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        if ((IS_THIS_MODEL_A_HELI( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
        {
            CLOSE_ALL_CAR_DOORS( uParam0 );
        }
    }
    return;
}

int sub_3906(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_BIKE( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
            {
                if (SET_CAR_ON_GROUND_PROPERLY( uParam0 ))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_4041(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_4402(unknown uParam0)
{
    REQUEST_MODEL( sub_4413( uParam0 ) );
    return;
}

int sub_4413(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
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
    sub_1799( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5130(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4413( uParam0 ) );
}

void sub_5406()
{
    if (l_U530 > 1)
    {
        for ( l_U533 = 0; l_U533 < 4; l_U533++ )
        {
            if (DOES_CHAR_EXIST( l_U660[l_U533] ))
            {
                if (IS_CHAR_INJURED( l_U660[l_U533] ))
                {
                    if (l_U554[l_U533] == 0)
                    {
                        l_U534++;
                        l_U554[l_U533] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_5622()
{
    if ((l_U532 < 99) AND (l_U532 > 2))
    {
        if (sub_5653())
        {
            l_U532 = 99;
            SETTIMERA( 2500 );
            l_U562 = 1;
        }
    }
    switch (l_U532)
    {
        case 0:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_2874(), 0 )))
        {
            if ((sub_5917( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), l_U603._fU0, l_U603._fU4, l_U603._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
            {
                SETTIMERA( 0 );
                l_U532++;
            }
            if (l_U580)
            {
                PRINT_NOW( "F7_T01", 7500, 1 );
                ADD_BLIP_FOR_COORD( 950.43570000, -308.00850000, 18.88990000, ref l_U644 );
                SET_ROUTE( l_U644, 1 );
                l_U580 = 0;
            }
        }
        else if (NOT l_U580)
        {
            PRINT_NOW( "WANTEDLEV", 7500, 1 );
            REMOVE_BLIP( l_U644 );
            l_U580 = 1;
        }
        break;
        case 1:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), l_U603._fU0, l_U603._fU4, l_U603._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_5917( 1, 1 ))
            {
                sub_6432();
                SET_PLAYER_CONTROL( sub_2874(), 0 );
                REMOVE_BLIP( l_U644 );
                SET_WIDESCREEN_BORDERS( 1 );
                SET_ALL_CARS_CAN_BE_DAMAGED( 0 );
                CLEAR_PRINTS();
                BEGIN_CAM_COMMANDS( ref l_U538 );
                CREATE_CAM( 14, ref l_U650 );
                SET_CAM_POS( l_U650, 962.28650000, -322.79700000, 24.03453000 );
                SET_CAM_ROT( l_U650, -0.33972700, -0.00000000, 9.80877500 );
                SET_CAM_FOV( l_U650, 35.00000000 );
                SET_CAM_ACTIVE( l_U650, 1 );
                SET_CAM_PROPAGATE( l_U650, 1 );
                CREATE_CAM( 14, ref l_U651 );
                SET_CAM_POS( l_U651, 960.99520000, -315.32770000, 23.98958000 );
                SET_CAM_ROT( l_U651, -0.33972700, -0.00000000, 9.80877500 );
                SET_CAM_FOV( l_U651, 35.00000000 );
                SET_CAM_ACTIVE( l_U651, 1 );
                SET_CAM_PROPAGATE( l_U651, 0 );
                CREATE_CAM( 3, ref l_U652 );
                SET_CAM_ACTIVE( l_U652, 1 );
                SET_CAM_PROPAGATE( l_U652, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U652, l_U650, l_U651, 20000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U562 = 0;
                GET_WEAPONTYPE_MODEL( 7, ref l_U693[0] );
                GET_WEAPONTYPE_MODEL( 12, ref l_U693[1] );
                CLEAR_AREA( 990.00000000, -300.20000000, 19.00000000, 5.50000000, 1 );
                CLEAR_AREA( 980.00000000, -300.20000000, 19.00000000, 5.50000000, 1 );
                CLEAR_AREA( 970.00000000, -300.20000000, 19.00000000, 5.50000000, 1 );
                CLEAR_AREA( 960.00000000, -300.20000000, 19.00000000, 5.50000000, 1 );
                CLEAR_AREA( 956.80000000, -298.50000000, 18.40000000, 5.00000000, 1 );
                SWITCH_ROADS_OFF( 930.97600000, -307.38420000, 15.11990000, 957.37840000, -300.52210000, 25.56260000 );
                REQUEST_CAR_RECORDING( 520 );
                REQUEST_MODEL( l_U693[0] );
                REQUEST_MODEL( l_U693[1] );
                REQUEST_MODEL( -322343873 );
                REQUEST_MODEL( 617421203 );
                REQUEST_MODEL( -202313765 );
                while ((NOT (HAS_MODEL_LOADED( -202313765 ))) || ((NOT (HAS_MODEL_LOADED( 617421203 ))) || ((NOT (HAS_MODEL_LOADED( -322343873 ))) || ((NOT (HAS_MODEL_LOADED( l_U693[1] ))) || ((NOT (HAS_MODEL_LOADED( l_U693[0] ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 520 ))))))))
                {
                    WAIT( 0 );
                }
                CREATE_OBJECT_NO_OFFSET( -202313765, 961.08290000, -273.34190000, 17.12400000, ref l_U655[0], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U655[0], "Caberet_room" );
                SET_OBJECT_HEADING( l_U655[0], 280.00000000 );
                FREEZE_OBJECT_POSITION( l_U655[0], 1 );
                CREATE_OBJECT_NO_OFFSET( -202313765, 953.71940000, -266.32220000, 17.12400000, ref l_U655[1], 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U655[1], "Caberet_room" );
                SET_OBJECT_HEADING( l_U655[1], 95.00000000 );
                FREEZE_OBJECT_POSITION( l_U655[1], 1 );
                # -sub_C1FFC0-0xc214c8( 2, ref l_U645 );
                # -sub_C1FFC0-0xc214c8( 3, ref l_U646 );
                LOAD_COMBAT_DECISION_MAKER( 2, ref l_U648 );
                LOAD_COMBAT_DECISION_MAKER( 8, ref l_U649 );
                LOAD_COMBAT_DECISION_MAKER( 3, ref l_U647 );
                CREATE_CAR( -322343873, 914.45490000, -266.44080000, 18.57250000, ref l_U672, 1 );
                CHANGE_CAR_COLOUR( l_U672, 0, 1 );
                SET_EXTRA_CAR_COLOURS( l_U672, 5, 6 );
                CLEAR_AREA( 914.45490000, -266.44080000, 18.57250000, 5.50000000, 1 );
                SET_CAR_HEADING( l_U672, 180.00000000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -322343873 );
                SET_CAR_ENGINE_ON( l_U672, 1, 1 );
                EXTINGUISH_FIRE_AT_POINT( 957.24020000, -295.25880000, 18.55930000, 15.00000000 );
                sub_7705( 4, ref l_U659, l_U672, 2 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U659, 0 );
                SET_CHAR_ACCURACY( l_U659, 5 );
                ALLOW_TARGET_WHEN_INJURED( l_U659, 1 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U659, 0 );
                STOP_PED_SPEAKING( l_U659, 1 );
                l_U532++;
            }
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( l_U672 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U659 )))
            {
                SET_CHAR_DECISION_MAKER( l_U659, l_U645 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U659, 1 );
                SET_CHAR_NEVER_TARGETTED( l_U659, 0 );
                CREATE_CHAR_INSIDE_CAR( l_U672, 26, -2088164056, ref l_U660[0] );
                SET_CHAR_DEFAULT_COMPONENT_VARIATION( l_U660[0] );
                SET_CHAR_DECISION_MAKER( l_U660[0], l_U645 );
                SET_COMBAT_DECISION_MAKER( l_U660[0], l_U647 );
                SET_CHAR_ACCURACY( l_U660[0], 15 );
                CREATE_CHAR_AS_PASSENGER( l_U672, 26, 1976502708, 1, ref l_U660[1] );
                SET_CHAR_DEFAULT_COMPONENT_VARIATION( l_U660[1] );
                SET_CHAR_DECISION_MAKER( l_U660[1], l_U645 );
                SET_COMBAT_DECISION_MAKER( l_U660[1], l_U647 );
                SET_CHAR_ACCURACY( l_U660[1], 15 );
                if (NOT (IS_CAR_DEAD( l_U672 )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U672, 520 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U672, 4000.00000000 );
                }
                if (IS_CHAR_ON_FOOT( sub_3289() ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 958.24050000, -298.06140000, 18.45770000, 6.00000000, 6.00000000, 4.00000000, 0 ))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3289() );
                        OPEN_SEQUENCE_TASK( ref l_U677 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 946.78720000, -295.69750000, 17.80110000, 2, -1, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U659 );
                        CLOSE_SEQUENCE_TASK( l_U677 );
                        TASK_PERFORM_SEQUENCE( sub_3289(), l_U677 );
                        CLEAR_SEQUENCE_TASK( l_U677 );
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 977.02260000, -299.77470000, 20.64880000, 13.00000000, 6.00000000, 4.00000000, 0 ))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3289() );
                        OPEN_SEQUENCE_TASK( ref l_U677 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 970.66270000, -293.29900000, 19.35450000, 2, -1, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U659 );
                        CLOSE_SEQUENCE_TASK( l_U677 );
                        TASK_PERFORM_SEQUENCE( sub_3289(), l_U677 );
                        CLEAR_SEQUENCE_TASK( l_U677 );
                    }
                }
                SETTIMERA( 0 );
                l_U532++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U672 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U672 )))
            {
                TASK_EVERYONE_LEAVE_CAR( l_U672 );
                WAIT( 500 );
                if (NOT (IS_CHAR_INJURED( l_U660[0] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U675 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 954.31660000, -296.59270000, 19.53870000, 2, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U675 );
                    TASK_PERFORM_SEQUENCE( l_U660[0], l_U675 );
                    CLEAR_SEQUENCE_TASK( l_U675 );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U675 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 958.90800000, -293.38100000, 19.80610000, 2, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U675 );
                    TASK_PERFORM_SEQUENCE( l_U660[1], l_U675 );
                    CLEAR_SEQUENCE_TASK( l_U675 );
                }
                l_U532++;
            }
        }
        break;
        case 4:
        SET_CAM_ACTIVE( l_U652, 0 );
        SET_CAM_PROPAGATE( l_U652, 0 );
        SET_CAM_ACTIVE( l_U651, 0 );
        SET_CAM_PROPAGATE( l_U651, 0 );
        SET_CAM_POS( l_U650, 953.73560000, -298.34930000, 18.91497000 );
        SET_CAM_ROT( l_U650, 8.94000100, -0.00000000, -75.57772000 );
        SET_CAM_FOV( l_U650, 45.00000000 );
        if (NOT (IS_CHAR_INJURED( l_U659 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U675 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 957.80730000, -290.17110000, 19.79770000, 2, -1, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U675 );
            TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
            CLEAR_SEQUENCE_TASK( l_U675 );
        }
        SETTIMERA( 0 );
        l_U532++;
        break;
        case 5:
        if (TIMERA() > 3000)
        {
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
                SET_CHAR_HEADING( l_U659, 356.10440000 );
                TASK_GO_STRAIGHT_TO_COORD( l_U659, 957.79130000, -290.10700000, 18.80330000, 2, 999999 );
            }
            if (IS_CHAR_ON_FOOT( sub_3289() ))
            {
                SET_CHAR_HEADING( sub_3289(), 351 );
            }
            SET_CAM_POS( l_U650, 959.36520000, -291.53860000, 20.89245000 );
            SET_CAM_ROT( l_U650, -11.48058000, -0.00000000, 159.07950000 );
            CLEAR_AREA( 957.40890000, -293.86670000, 19.59890000, 8.00000000, 1 );
            SETTIMERA( 0 );
            l_U532 = 99;
        }
        break;
        case 99:
        if (TIMERA() > 2500)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SWITCH_ROADS_ON( 930.97600000, -307.38420000, 15.11990000, 957.37840000, -300.52210000, 25.56260000 );
            SET_ALL_CARS_CAN_BE_DAMAGED( 1 );
            if (NOT (IS_CAR_DEAD( l_U672 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U672 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U672 );
                }
                SET_CAR_HEADING( l_U672, 90.00000000 );
                SET_CAR_COORDINATES( l_U672, 959.45590000, -298.36110000, 18.61000000 );
                SET_CAR_ENGINE_ON( l_U672, 0, 1 );
                LOCK_CAR_DOORS( l_U672, 7 );
                if (IS_CHAR_ON_FOOT( sub_3289() ))
                {
                    SET_CHAR_HEADING( sub_3289(), 351 );
                }
            }
            if (NOT l_U562)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            SET_CAM_ACTIVE( l_U652, 0 );
            SET_CAM_PROPAGATE( l_U652, 0 );
            SET_CAM_ACTIVE( l_U650, 0 );
            SET_CAM_PROPAGATE( l_U650, 0 );
            SET_CAM_ACTIVE( l_U651, 0 );
            SET_CAM_PROPAGATE( l_U651, 0 );
            TASK_CLEAR_LOOK_AT( sub_3289() );
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3289() )))
            {
                SET_CHAR_HEADING( sub_3289(), 350 );
            }
            else
            {
                GET_CAR_CHAR_IS_USING( sub_3289(), ref l_U671 );
                SET_CAR_AS_MISSION_CAR( l_U671 );
            }
            if (DOES_CAM_EXIST( l_U650 ))
            {
                DESTROY_CAM( l_U650 );
            }
            if (DOES_CAM_EXIST( l_U651 ))
            {
                DESTROY_CAM( l_U651 );
            }
            if (DOES_CAM_EXIST( l_U652 ))
            {
                DESTROY_CAM( l_U652 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_3289() );
            SET_WIDESCREEN_BORDERS( 0 );
            CLEAR_CHAR_TASKS( sub_3289() );
            SET_PLAYER_CONTROL( sub_2874(), 1 );
            END_CAM_COMMANDS( ref l_U538 );
            sub_11465();
            sub_11514( 25, 4, 16383, 16383, ref l_U696 );
            DO_SCREEN_FADE_IN( 500 );
            l_U532 = 0;
            l_U530 = 1;
        }
        break;
    }
    return;
}

int sub_5653()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_5917(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3289() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3289(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3289() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3289(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3289()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3289() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3289() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2874() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2874() )))
    {
        return 0;
    }
    return 1;
}

void sub_6432()
{
    return sub_6443( 1, 1 );
}

int sub_6443(boolean bParam0, unknown uParam1)
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

void sub_7705(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CREATE_CHAR_AS_PASSENGER( uParam2, 25, sub_4413( uParam0 ), uParam3, uParam1 );
    sub_7740( uParam0, (uParam1^) );
    return;
}

void sub_7740(unknown uParam0, unknown uParam1)
{
    sub_7752( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7752(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7846( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_8390( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7846(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_8390(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7846( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7846( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7846( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7846( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7846( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7846( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7846( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7846( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11465()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_11514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_11536( uParam0, 0, iParam4 + 0 );
    sub_11536( uParam1, 1, iParam4 + 0 );
    sub_11536( uParam2, 2, iParam4 + 0 );
    sub_11536( uParam3, 3, iParam4 + 0 );
    sub_11536( 0, 4, iParam4 + 0 );
    sub_11536( 1, 5, iParam4 + 0 );
    sub_11536( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_11536(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_11896()
{
    switch (l_U532)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U672 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U659, l_U672 )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U659, 1 );
                    SET_CHAR_COORDINATES( l_U659, l_U585._fU0, l_U585._fU4, l_U585._fU8 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
                }
                else
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U659, 1 );
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U659, l_U585._fU0, l_U585._fU4, l_U585._fU8 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
                }
                SET_CHAR_DECISION_MAKER( l_U659, l_U645 );
                SET_COMBAT_DECISION_MAKER( l_U659, l_U649 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U659, 23 );
                SET_CHAR_RELATIONSHIP( l_U659, 0, 8 );
                SET_CHAR_RELATIONSHIP( l_U659, 0, 9 );
                SET_CHAR_RELATIONSHIP( l_U659, 0, 10 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U659, "Caberet_room" );
                TASK_SIT_DOWN_ON_SEAT( l_U659, 0, 0, l_U585, 71, -2 );
                SET_CHAR_NEVER_TARGETTED( l_U659, 0 );
                sub_3338( 1, l_U659, "FAUSTIN", 0 );
                PRINT_NOW( "F7_01", 7500, 1 );
                ADD_BLIP_FOR_CHAR( l_U659, ref l_U643 );
                SET_ROUTE( l_U644, 0 );
                SET_ROUTE( l_U643, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U660[0] )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U660[0], l_U672 )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[0], 1 );
                    SET_CHAR_COORDINATES( l_U660[0], 966.02220000, -276.33820000, 17.27350000 );
                    SET_CHAR_HEALTH( l_U660[0], 150 );
                    SET_CHAR_MAX_HEALTH( l_U660[0], 150 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[0] );
                }
                else
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[0], 1 );
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U660[0], 966.02220000, -276.33820000, 17.27350000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[0] );
                }
                SET_CHAR_HEALTH( l_U660[0], 150 );
                SET_CHAR_MAX_HEALTH( l_U660[0], 150 );
                SET_CHAR_HEADING( l_U660[0], 286.00000000 );
                SET_CHAR_DECISION_MAKER( l_U660[0], l_U645 );
                TASK_SWAP_WEAPON( l_U660[0], 0 );
                SET_CHAR_MONEY( l_U660[0], 100 );
                FREEZE_CHAR_POSITION( l_U660[0], 1 );
                SET_CHAR_PROOFS( l_U660[0], 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U660[1] )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U660[1], l_U672 )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[1], 1 );
                    SET_CHAR_COORDINATES( l_U660[1], 965.25630000, -277.14690000, 17.27420000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[1] );
                }
                else
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[1], 1 );
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U660[1], 965.25630000, -277.14690000, 17.27420000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[1] );
                }
                SET_CHAR_HEALTH( l_U660[1], 150 );
                SET_CHAR_MAX_HEALTH( l_U660[1], 150 );
                SET_CHAR_HEADING( l_U660[1], 198.00000000 );
                SET_CHAR_DECISION_MAKER( l_U660[1], l_U645 );
                SET_COMBAT_DECISION_MAKER( l_U660[1], l_U647 );
                TASK_SWAP_WEAPON( l_U660[1], 0 );
                SET_CHAR_MONEY( l_U660[1], 100 );
                TASK_CHAT_WITH_CHAR( l_U660[0], l_U660[1], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U660[1], l_U660[0], 0, 1 );
                FREEZE_CHAR_POSITION( l_U660[1], 1 );
                SET_CHAR_PROOFS( l_U660[1], 1, 1, 1, 1, 1 );
            }
        }
        CREATE_CHAR( 26, -2088164056, 950.01870000, -269.80900000, 17.12360000, ref l_U660[2], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[2] );
        SET_CHAR_HEADING( l_U660[2], 261.00000000 );
        SET_CHAR_DECISION_MAKER( l_U660[2], l_U645 );
        SET_COMBAT_DECISION_MAKER( l_U660[2], l_U649 );
        GIVE_WEAPON_TO_CHAR( l_U660[2], 7, 30000, 0 );
        TASK_SWAP_WEAPON( l_U660[2], 0 );
        SET_CHAR_MONEY( l_U660[2], 100 );
        SET_CHAR_ACCURACY( l_U660[2], 20 );
        FREEZE_CHAR_POSITION( l_U660[2], 1 );
        CREATE_CHAR( 26, 1976502708, 949.92360000, -271.38970000, 17.12360000, ref l_U660[3], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[3] );
        SET_CHAR_HEADING( l_U660[3], 334.00000000 );
        SET_CHAR_DECISION_MAKER( l_U660[3], l_U645 );
        SET_COMBAT_DECISION_MAKER( l_U660[3], l_U647 );
        GIVE_WEAPON_TO_CHAR( l_U660[3], 7, 30000, 0 );
        TASK_SWAP_WEAPON( l_U660[3], 0 );
        SET_CHAR_MONEY( l_U660[3], 100 );
        TASK_CHAT_WITH_CHAR( l_U660[2], l_U660[1], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U660[3], l_U660[0], 0, 1 );
        SET_CHAR_ACCURACY( l_U660[3], 5 );
        FREEZE_CHAR_POSITION( l_U660[3], 1 );
        for ( l_U533 = 0; l_U533 < 4; l_U533++ )
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U660[l_U533], 23 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U660[l_U533], "Caberet_room" );
            SET_CHAR_RELATIONSHIP( l_U660[l_U533], 0, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[l_U533], 0, 8 );
            SET_CHAR_RELATIONSHIP( l_U660[l_U533], 0, 9 );
            SET_CHAR_RELATIONSHIP( l_U660[l_U533], 0, 10 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[l_U533], 1 );
        }
        if (DOES_PICKUP_EXIST( l_U674 ))
        {
            REMOVE_PICKUP( l_U674 );
        }
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 988.55570000, -287.08130000, 20.45000000, 269.86000000, 0, 25.72000000, ref l_U674 );
        SETTIMERB( 0 );
        l_U532++;
        break;
        case 1:
        GET_CHAR_ARMOUR( sub_3289(), ref l_U545 );
        if (l_U545 < 100)
        {
            if (TIMERB() > 2000)
            {
                if (NOT l_U577)
                {
                    sub_13910( ref l_U696 );
                    l_U577 = 1;
                }
                if ((sub_14692( ref l_U696 )) == 3)
                {
                    if (NOT l_U575)
                    {
                        if (DOES_PICKUP_EXIST( l_U674 ))
                        {
                            REMOVE_BLIP( l_U643 );
                            ADD_BLIP_FOR_PICKUP( l_U674, ref l_U643 );
                            SET_ROUTE( l_U643, 1 );
                        }
                        l_U575 = 1;
                    }
                }
            }
        }
        if (l_U575 == 1)
        {
            if (NOT l_U576)
            {
                if (HAS_PICKUP_BEEN_COLLECTED( l_U674 ))
                {
                    PRINT_HELP( "BODYARMOUR" );
                    if (NOT (IS_CHAR_INJURED( l_U659 )))
                    {
                        PRINT_NOW( "F7_01", 7500, 1 );
                        REMOVE_BLIP( l_U643 );
                        ADD_BLIP_FOR_CHAR( l_U659, ref l_U643 );
                        SET_ROUTE( l_U643, 1 );
                    }
                    l_U576 = 1;
                }
            }
        }
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 961.60900000, -259.02330000, 18.77400000, 2.00000000, 3.00000000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 957.35900000, -284.16780000, 19.88210000, 4.50000000, 2.50000000, 2.00000000, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                SET_CHAR_HEALTH( l_U659, 320 );
                SET_CHAR_MAX_HEALTH( l_U659, 320 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                LOAD_ADDITIONAL_TEXT( "F6AUD", 6 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_WANTED_LEVEL( sub_2874() );
                CLEAR_AREA_OF_CARS( 957.28420000, -271.44910000, 18.12380000, 15.00000000 );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3289() )))
                {
                    SET_CHAR_COORDINATES( sub_3289(), 963.11650000, -275.83590000, 17.27440000 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3289(), 963.11650000, -275.83590000, 17.27440000 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( -86307047 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3289() );
                ENABLE_SCENE_STREAMING( 0 );
                START_CUTSCENE_NOW( "IMFAU6" );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U633, 12, 5 );
                FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U636, 12, 5 );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                ENABLE_SCENE_STREAMING( 1 );
                CLEAR_NAMED_CUTSCENE( "IMFAU6" );
                g_U9211 = 1;
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( 0, 0, 0, 9999 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                REQUEST_ANIMS( "missfaustin6" );
                while (NOT (HAVE_ANIMS_LOADED( "missfaustin6" )))
                {
                    WAIT( 0 );
                }
                if (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U615._fU0, l_U615._fU4, l_U615._fU8, 5.00000000, 617421203 )))
                {
                    CREATE_OBJECT( 617421203, l_U615._fU0, l_U615._fU4, l_U615._fU8, ref l_U654, 1 );
                    SET_OBJECT_ROTATION( l_U654, l_U618._fU0, l_U618._fU4, l_U618._fU8 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U654, "Caberet_room" );
                }
                CREATE_PICKUP_WITH_AMMO( -2001451511, 22, 6, 951.45570000, -245.21820000, 15.90000000, ref l_U673 );
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U673, "GtaMloRoom05" );
                DONT_DISPATCH_COPS_FOR_PLAYER( sub_2874(), 1 );
                SET_EVERYONE_IGNORE_PLAYER( sub_2874(), 1 );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                CLEAR_AREA( 965.81040000, -275.43200000, 17.27290000, 2.00000000, 1 );
                SET_CHAR_HEADING( sub_3289(), 250.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( sub_3289(), "Caberet_room" );
                l_U536 = GET_HASH_KEY( "Caberet_room" );
                GET_INTERIOR_AT_COORDS( 958.93950000, -271.93790000, 18.12380000, ref l_U678 );
                LOAD_SCENE_FOR_ROOM_BY_KEY( l_U678, l_U536 );
                if (NOT (IS_CHAR_INJURED( l_U659 )))
                {
                    REMOVE_BLIP( l_U643 );
                    ADD_BLIP_FOR_CHAR( l_U659, ref l_U643 );
                    SET_CHAR_COORDINATES( l_U659, 947.27430000, -266.95860000, 17.27000000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
                    CLEAR_AREA( 947.27430000, -266.95860000, 17.27000000, 2.00000000, 1 );
                    SET_CHAR_HEADING( l_U659, 269 );
                    SET_CHAR_RELATIONSHIP( l_U659, 5, 0 );
                    TASK_LOOK_AT_CHAR( l_U659, sub_3289(), -2, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U659, l_U647 );
                    SET_CHAR_ALLOWED_TO_DUCK( l_U659, 1 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U659, 0 );
                    SET_PED_DONT_DO_EVASIVE_DIVES( l_U659, 1 );
                    UNLOCK_RAGDOLL( l_U659, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U659, 12, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U659, 12, 0 );
                    SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS( l_U659, 1 );
                    SET_CHAR_PROOFS( l_U659, 0, 1, 1, 0, 0 );
                    SET_CHAR_ACCURACY( l_U659, 5 );
                    SET_PED_IS_BLIND_RAGING( sub_3289(), 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[0] )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[0], 0 );
                    SET_CHAR_COORDINATES( l_U660[0], 964.32610000, -277.15380000, 17.27410000 );
                    SET_CHAR_HEADING( l_U660[0], 80.00000000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[0] );
                    TASK_LOOK_AT_CHAR( l_U660[0], sub_3289(), 2000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U660[0], sub_3289() );
                    TASK_LOOK_AT_CHAR( sub_3289(), l_U660[0], 2000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_3289(), l_U660[0] );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[1] )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[1], 0 );
                    SET_CHAR_COORDINATES( l_U660[1], 965.10110000, -276.80420000, 17.27410000 );
                    SET_CHAR_HEADING( l_U660[1], 80.00000000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[1] );
                    TASK_LOOK_AT_CHAR( l_U660[1], sub_3289(), 2000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U660[1], sub_3289() );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[2] )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[2], 0 );
                    SET_CHAR_COORDINATES( l_U660[2], 947.74030000, -270.73930000, 17.27460000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[2] );
                    TASK_LOOK_AT_CHAR( l_U660[2], sub_3289(), 2000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U660[2], sub_3289() );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[3] )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660[3], 0 );
                    SET_CHAR_COORDINATES( l_U660[3], 951.42320000, -265.58010000, 17.27010000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660[3] );
                    TASK_LOOK_AT_CHAR( l_U660[3], sub_3289(), 2000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U660[3], sub_3289() );
                }
                if (DOES_OBJECT_EXIST( l_U655[0] ))
                {
                    FREEZE_OBJECT_POSITION( l_U655[0], 0 );
                }
                if (DOES_OBJECT_EXIST( l_U655[1] ))
                {
                    FREEZE_OBJECT_POSITION( l_U655[1], 0 );
                }
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                DO_SCREEN_FADE_IN_UNHACKED( 100 );
                SET_CAM_BEHIND_PED( sub_3289() );
                SET_ALL_RANDOM_PEDS_FLEE( sub_2874(), 1 );
                SET_PLAYER_CONTROL( sub_2874(), 1 );
                SETTIMERA( 0 );
                l_U532++;
            }
        }
        break;
        case 2:
        SETTIMERA( 0 );
        if (DOES_VEHICLE_EXIST( l_U672 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U672 );
        }
        if (NOT (IS_CHAR_INJURED( l_U660[2] )))
        {
            FREEZE_CHAR_POSITION( l_U660[2], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U660[3] )))
        {
            FREEZE_CHAR_POSITION( l_U660[3], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U660[0] )))
        {
            SET_CHAR_PROOFS( l_U660[0], 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U660[1] )))
        {
            SET_CHAR_PROOFS( l_U660[1], 0, 0, 0, 0, 0 );
        }
        if (NOT sub_17296())
        {
            sub_17384();
        }
        l_U532++;
        l_U530 = 3;
        break;
    }
    return;
}

int sub_13910(int iParam0)
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
        if (NOT sub_13980())
        {
            sub_2267( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_14107( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2267( iVar9 );
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
                ConcatString(ref cVar5, sub_1981( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1981( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_13980()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1981( 1, g_U569[I] )) != 0))
        {
            sub_2267( I );
            return 1;
        }
    }
    return 0;
}

int sub_14107(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_14172( uParam0, g_U569[Result] ))
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

int sub_14172(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1981( 0, uParam0 );
        if (iVar14 == (sub_1981( 0, uParam6 )))
        {
            iVar15 = sub_1981( 3, uParam0 );
            if (iVar15 == (sub_1981( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_14692(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_14172( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_1981( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

int sub_17296()
{
    GET_CURRENT_CHAR_WEAPON( sub_3289(), ref l_U642 );
    if ((l_U642 == 1) || ((l_U642 == 3) || ((l_U642 == 0) || (l_U642 == 56))))
    {
        return 0;
        break;
    }
    return 1;
}

void sub_17384()
{
    if (HAS_CHAR_GOT_WEAPON( sub_3289(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 15, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 14, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 13, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 12, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 10, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 11, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 9, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3289(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3289(), 7, 0 );
    };;;;;;;;
    return;
}

void sub_17728()
{
    if (NOT (IS_CHAR_INJURED( l_U659 )))
    {
        GET_CHAR_HEALTH( l_U659, ref l_U542 );
        switch (l_U537)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U660[0] )))
            {
                FREEZE_CHAR_POSITION( l_U660[0], 1 );
                SET_CHAR_RELATIONSHIP( l_U660[0], 5, 0 );
                TASK_COMBAT( l_U660[0], sub_3289() );
                SET_CHAR_KEEP_TASK( l_U660[0], 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U660[1] )))
            {
                FREEZE_CHAR_POSITION( l_U660[1], 1 );
                SET_CHAR_RELATIONSHIP( l_U660[1], 5, 0 );
                TASK_COMBAT( l_U660[1], sub_3289() );
                SET_CHAR_KEEP_TASK( l_U660[1], 1 );
            }
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U537++;
            break;
            case 1:
            if (TIMERA() > 800)
            {
                if (NOT (IS_CHAR_INJURED( l_U660[0] )))
                {
                    FREEZE_CHAR_POSITION( l_U660[0], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[1] )))
                {
                    FREEZE_CHAR_POSITION( l_U660[1], 0 );
                }
                sub_18127( "F6_FIGHT", ref l_U681, 6, 1 );
                SETTIMERA( 0 );
                l_U537++;
            }
            break;
            case 2:
            if (NOT l_U560)
            {
                if (TIMERA() > 8000)
                {
                    sub_19146();
                    l_U537++;
                }
            }
            break;
        }
        if (l_U537 > 1)
        {
            if (NOT l_U582)
            {
                if (NOT (sub_19389( l_U681 )))
                {
                    sub_18127( "F6_SHOUTY", ref l_U687, 7, 1 );
                    l_U582 = 1;
                }
            }
        }
        GENERATE_RANDOM_INT_IN_RANGE( 2000, 3300, ref l_U546 );
        if (NOT (sub_19389( l_U681 )))
        {
            if (TIMERB() > 3500)
            {
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U659, sub_3289(), 0 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2874(), l_U659 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2874(), l_U659 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U675 );
                    TASK_DUCK( 0, l_U546 );
                    TASK_SHOOT_AT_CHAR( 0, sub_3289(), 5000, 3 );
                    CLOSE_SEQUENCE_TASK( l_U675 );
                    TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
                    CLEAR_SEQUENCE_TASK( l_U675 );
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U675 );
                    TASK_SHOOT_AT_CHAR( 0, sub_3289(), 5000, 3 );
                    CLOSE_SEQUENCE_TASK( l_U675 );
                    TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
                    CLEAR_SEQUENCE_TASK( l_U675 );
                }
                SETTIMERB( 0 );
            }
        }
        else if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U659, sub_3289(), 0 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2874(), l_U659 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2874(), l_U659 ))))
        {
            OPEN_SEQUENCE_TASK( ref l_U675 );
            TASK_DUCK( 0, l_U546 );
            CLOSE_SEQUENCE_TASK( l_U675 );
            TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
            CLEAR_SEQUENCE_TASK( l_U675 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
        }
        if (TIMERB() > 1500)
        {
            if (l_U537 > 0)
            {
                if (NOT l_U560)
                {
                    if (sub_17296())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U660[0] )))
                        {
                            GIVE_WEAPON_TO_CHAR( l_U660[0], 7, 30000, 0 );
                            TASK_SWAP_WEAPON( l_U660[0], 1 );
                        }
                        l_U560 = 1;
                    }
                }
                if (TIMERB() > 2500)
                {
                    if (NOT l_U572)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U660[1] )))
                        {
                            GIVE_WEAPON_TO_CHAR( l_U660[1], 7, 30000, 0 );
                            TASK_SWAP_WEAPON( l_U660[1], 1 );
                        }
                        sub_19146();
                        l_U572 = 1;
                    }
                }
            }
        }
        if ((IS_EXPLOSION_IN_AREA( -1, 945.78000000, -272.17000000, 23.63000000, 951.29000000, -261.37000000, 16.27000000 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 961.60900000, -259.02330000, 18.77400000, 2.00000000, 1.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 957.35900000, -284.16780000, 19.88210000, 2.00000000, 1.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U659, sub_3289(), 6.00000000, 6.00000000, 3.00000000, 0 )) || ((NOT (IS_CHAR_HEALTH_GREATER( l_U659, 250 ))) || (l_U534 > 3))))))
        {
            if (IS_EXPLOSION_IN_AREA( -1, 945.78000000, -272.17000000, 23.63000000, 951.29000000, -261.37000000, 16.27000000 ))
            {
                SET_CHAR_HEALTH( l_U659, 250 );
            }
            SET_CHAR_PROOFS( l_U659, 1, 1, 1, 1, 1 );
            SET_CHAR_ALLOWED_TO_DUCK( l_U659, 0 );
            SET_PLAYER_CONTROL( sub_2874(), 0 );
            REMOVE_CHAR_DEFENSIVE_AREA( l_U659 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
            SET_CHAR_NEVER_TARGETTED( l_U659, 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            sub_20567( ref l_U681, 0 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U659, 0 );
            STOP_PED_SPEAKING( l_U659, 1 );
            BEGIN_CAM_COMMANDS( ref l_U538 );
            CREATE_CAM( 14, ref l_U650 );
            GET_GAME_VIEWPORT_ID( ref l_U653 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U653, "Caberet_room" );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3289() );
            CREATE_CAM( 14, ref l_U650 );
            SET_CAM_POS( l_U650, 948.14410000, -266.86540000, 18.70562000 );
            SET_CAM_ROT( l_U650, 2.37523900, -0.00000000, 33.65788000 );
            SET_CAM_FOV( l_U650, 54.59997000 );
            SET_CAM_ACTIVE( l_U650, 1 );
            SET_CAM_PROPAGATE( l_U650, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                CLEAR_AREA( 947.28810000, -265.91780000, 17.26790000, 1.00000000, 0 );
                CLEAR_AREA( 948.26500000, -259.10180000, 17.26480000, 3.50000000, 1 );
                CLEAR_AREA( 965.28060000, -258.77820000, 20.00820000, 3.00000000, 1 );
                CLEAR_AREA( 958.70070000, -258.75580000, 17.76850000, 2.00000000, 1 );
                CLEAR_AREA( 977.03740000, -284.62810000, 31.13480000, 4.00000000, 1 );
                CLEAR_AREA( 972.56720000, -258.40630000, 21.57180000, 4.00000000, 1 );
                CLEAR_AREA( 972.89140000, -269.26120000, 21.56740000, 4.00000000, 1 );
                CLEAR_AREA( 972.56720000, -258.40630000, 21.57180000, 4.00000000, 1 );
                SET_CHAR_COORDINATES( l_U659, 947.28810000, -265.91780000, 17.26790000 );
                SET_CHAR_HEADING( l_U659, 250 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
                if (IS_CHAR_ON_FIRE( l_U659 ))
                {
                    EXTINGUISH_CHAR_FIRE( l_U659 );
                }
                OPEN_SEQUENCE_TASK( ref l_U675 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 948.26500000, -259.10180000, 17.26480000, 3, 20000, 1.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 971.67150000, -258.58370000, 20.56700000, 3, 15000, 1.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 975.49470000, -282.41460000, 20.64790000, 3, 15000, 1.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 977.00590000, -283.06210000, 25.72870000, 3, 15000, 1.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 978.43270000, -284.70180000, 30.12800000, 3, 15000, 1.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U624._fU0, l_U624._fU4, l_U624._fU8, 3, 15000, 0.80000000 );
                CLOSE_SEQUENCE_TASK( l_U675 );
            }
            sub_18127( "F6_GUARDS", ref l_U681, 7, 1 );
            SETTIMERA( 0 );
            while (NOT l_U567)
            {
                WAIT( 0 );
                if (TIMERA() > 1400)
                {
                    if ((TIMERA() > 4000) || (sub_19389( l_U681 )))
                    {
                        l_U567 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                CLEAR_CHAR_TASKS( l_U659 );
                TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
                CLEAR_SEQUENCE_TASK( l_U675 );
            }
            WAIT( 1500 );
            SET_CAM_ACTIVE( l_U650, 0 );
            SET_CAM_PROPAGATE( l_U650, 0 );
            if (DOES_CAM_EXIST( l_U650 ))
            {
                DESTROY_CAM( l_U650 );
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U639._fU0, l_U639._fU4, l_U639._fU8, 1.50000000, -323723323 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -323723323, l_U639, 1, 1.00000000 );
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U639._fU0, l_U639._fU4, l_U639._fU8, 1.50000000, -323723323 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -323723323, l_U639, 0, 0.00000000 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_PLAYER_CONTROL( sub_2874(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_CAM_BEHIND_PED( sub_3289() );
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                SET_CHAR_COORDINATES( l_U659, 948.26500000, -259.10180000, 17.26480000 );
                SET_CHAR_HEADING( l_U659, 250 );
                STOP_PED_SPEAKING( l_U659, 0 );
            }
            END_CAM_COMMANDS( ref l_U538 );
            if (l_U560 == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U660[0] )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U660[0], 7, 30000, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U660[1] )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U660[1], 7, 30000, 0 );
                }
                sub_19146();
            }
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                SET_CHAR_PROOFS( l_U659, 0, 0, 0, 0, 0 );
            }
            CREATE_CHAR( 26, -2088164056, l_U591._fU0, l_U591._fU4, l_U591._fU8, ref l_U660[4], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[4] );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U660[4], "Caberet_room" );
            SET_CHAR_HEADING( l_U660[4], 112.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[4], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[4], l_U647 );
            GIVE_WEAPON_TO_CHAR( l_U660[4], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[4], 2, 0 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U660[4], l_U591, 99999 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U660[4], l_U591, 10.00000000 );
            SET_CHAR_MONEY( l_U660[4], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[4], 1 );
            SET_CHAR_ACCURACY( l_U660[4], 15 );
            FREEZE_CHAR_POSITION( l_U660[4], 1 );
            CREATE_CHAR( 26, 1976502708, l_U594._fU0, l_U594._fU4, l_U594._fU8, ref l_U660[5], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[5] );
            SET_CHAR_HEADING( l_U660[5], 0.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[5], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[5], l_U647 );
            GIVE_WEAPON_TO_CHAR( l_U660[5], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[5], 2, 0 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U660[5], l_U594, 99999 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U660[5], l_U594, 10.00000000 );
            SET_CHAR_MONEY( l_U660[5], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[5], 1 );
            SET_CHAR_ACCURACY( l_U660[5], 20 );
            FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[5], 1 );
            CREATE_CHAR( 26, -2088164056, l_U588._fU0, l_U588._fU4, l_U588._fU8, ref l_U660[6], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[6] );
            SET_CHAR_HEADING( l_U660[6], 0.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[6], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[6], l_U648 );
            GIVE_WEAPON_TO_CHAR( l_U660[6], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[6], 2, 0 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U660[6], l_U588, 99999 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U660[6], l_U588, 10.00000000 );
            SET_CHAR_MONEY( l_U660[6], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[6], 1 );
            SET_CHAR_ACCURACY( l_U660[6], 20 );
            FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[6], 1 );
            CREATE_CHAR( 26, 1976502708, l_U597._fU0, l_U597._fU4, l_U597._fU8, ref l_U660[7], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[7] );
            SET_CHAR_HEADING( l_U660[7], 0.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[7], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[7], l_U647 );
            GIVE_WEAPON_TO_CHAR( l_U660[7], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[7], 2, 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U660[7], l_U597, 3.00000000 );
            SET_CHAR_MONEY( l_U660[7], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[7], 1 );
            SET_CHAR_ACCURACY( l_U660[7], 20 );
            FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[7], 1 );
            CREATE_CHAR( 26, -2088164056, 947.33620000, -259.15330000, 17.26510000, ref l_U660[8], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[8] );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U660[8], "gtamloroom05" );
            SET_CHAR_HEADING( l_U660[8], 180.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[8], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[8], l_U648 );
            GIVE_WEAPON_TO_CHAR( l_U660[8], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[8], 2, 0 );
            SET_CHAR_MONEY( l_U660[8], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[8], 1 );
            SET_CHAR_ACCURACY( l_U660[8], 15 );
            FREEZE_CHAR_POSITION( l_U660[8], 1 );
            CREATE_CHAR( 26, 1976502708, 949.22300000, -258.34030000, 17.26510000, ref l_U660[9], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U660[9] );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U660[9], "gtamloroom05" );
            SET_CHAR_HEADING( l_U660[9], 180.00000000 );
            SET_CHAR_DECISION_MAKER( l_U660[9], l_U645 );
            SET_COMBAT_DECISION_MAKER( l_U660[9], l_U648 );
            GIVE_WEAPON_TO_CHAR( l_U660[9], 7, 30000, 0 );
            SET_CHAR_RELATIONSHIP( l_U660[9], 2, 0 );
            SET_CHAR_MONEY( l_U660[9], 100 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U660[9], 1 );
            GET_GAME_TIMER( ref l_U543 );
            SET_CHAR_ACCURACY( l_U660[9], 15 );
            FREEZE_CHAR_POSITION( l_U660[9], 1 );
            ADD_COVER_POINT( 979.01670000, -285.06740000, 30.12680000, 2, 0, 0, 0, ref l_U680 );
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            FORCE_WEATHER_NOW( 7 );
            l_U582 = 0;
            l_U530 = 4;
        }
    }
    return;
}

void sub_18127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18150( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_18150(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_18204( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_18204(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_18226( iParam1 )))
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
    sub_18918( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_18226(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18303( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_18303( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_18303( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_18303(unknown uParam0)
{
    return;
}

void sub_18918(int iParam0, int iParam1)
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

void sub_19146()
{
    if (NOT (IS_CHAR_INJURED( l_U660[2] )))
    {
        SET_CHAR_RELATIONSHIP( l_U660[2], 5, 0 );
        TASK_COMBAT( l_U660[2], sub_3289() );
        TASK_SWAP_WEAPON( l_U660[2], 1 );
        SET_CHAR_KEEP_TASK( l_U660[2], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[3] )))
    {
        SET_CHAR_RELATIONSHIP( l_U660[3], 5, 0 );
        TASK_COMBAT( l_U660[3], sub_3289() );
        TASK_SWAP_WEAPON( l_U660[3], 1 );
        SET_CHAR_KEEP_TASK( l_U660[3], 1 );
    }
    return;
}

int sub_19389(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_18303( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18303( "\n speech is not playing" );
    }
    return 0;
}

void sub_20567(int iParam0, unknown uParam1)
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

void sub_23771()
{
    if (NOT l_U559)
    {
        if (NOT l_U582)
        {
            if (NOT (sub_19389( l_U681 )))
            {
                sub_18127( "F6_SHOUTY", ref l_U687, 7, 1 );
                l_U582 = 1;
            }
        }
        else if (NOT l_U583)
        {
            if (NOT (sub_19389( l_U687 )))
            {
                PRINT_NOW( "F7_05", 7500, 1 );
                l_U583 = 1;
            }
        }
        if (NOT l_U568)
        {
            if ((NOT (IS_CHAR_INJURED( l_U660[9] ))) AND (NOT (IS_CHAR_INJURED( l_U660[8] ))))
            {
                if ((TIMERA() > 7000) || ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U660[9], 8.00000000, 12.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U660[8], 8.00000000, 12.00000000, 3.00000000, 0 ))))
                {
                    FREEZE_CHAR_POSITION( l_U660[8], 0 );
                    SET_CHAR_RELATIONSHIP( l_U660[8], 5, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U660[8], 949.47290000, -264.83270000, 17.26750000, 3, 5000, 1.50000000 );
                    FREEZE_CHAR_POSITION( l_U660[9], 0 );
                    SET_CHAR_RELATIONSHIP( l_U660[9], 5, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U660[9], 949.47290000, -264.83270000, 17.26750000, 3, 5000, 1.50000000 );
                    l_U568 = 1;
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 979.51010000, -241.44030000, 21.68450000, 5.00000000, 6.00000000, 10.00000000, 0 ))
        {
            sub_24247();
        }
        if (NOT l_U578)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 971.06760000, -248.93080000, 20.75400000, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                sub_25285();
                l_U578 = 1;
            }
        }
        if (NOT l_U569)
        {
            if (NOT (IS_CHAR_INJURED( l_U660[4] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U660[4], 8.00000000, 3.80000000, 3.00000000, 0 ))
                {
                    FREEZE_CHAR_POSITION( l_U660[4], 0 );
                    SET_CHAR_RELATIONSHIP( l_U660[4], 5, 0 );
                    l_U569 = 1;
                }
            }
        }
        sub_25780();
        if (NOT (IS_CHAR_INJURED( l_U659 )))
        {
            if (l_U561 == 0)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U624._fU0, l_U624._fU4, l_U624._fU8, 1.20000000, 1.20000000, 3.00000000, 0 ))
                {
                    TASK_TURN_CHAR_TO_FACE_COORD( l_U659, 972.20350000, -271.63300000, 20.56710000 );
                    SETTIMERA( 4000 );
                    l_U561 = 1;
                }
            }
            else if (TIMERA() > 3500)
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2874(), l_U659 )) || ((IS_PLAYER_TARGETTING_CHAR( sub_2874(), l_U659 )) || (TIMERA() > 6000)))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 1800, 3300, ref l_U546 );
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U624._fU0, l_U624._fU4, l_U624._fU8, 0.80000000, 0.80000000, 3.00000000, 0 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U675 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U624._fU0, l_U624._fU4, l_U624._fU8, 3, 5000, 0.80000000 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, 972.20350000, -271.63300000, 20.56710000 );
                        CLOSE_SEQUENCE_TASK( l_U675 );
                        TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
                        CLEAR_SEQUENCE_TASK( l_U675 );
                    }
                    else if (HAS_CHAR_SPOTTED_CHAR( l_U659, sub_3289() ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U675 );
                        TASK_DUCK( 0, l_U546 );
                        TASK_SHOOT_AT_CHAR( 0, sub_3289(), 5000, 3 );
                        CLOSE_SEQUENCE_TASK( l_U675 );
                        TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
                        CLEAR_SEQUENCE_TASK( l_U675 );
                    }
                    SETTIMERA( 0 );
                }
            }
            if (NOT l_U573)
            {
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (IS_CHAR_IN_AREA_3D( sub_3289(), 969.22620000, -269.17780000, 19.74050000, 979.36030000, -290.19450000, 40.10190000, 0 )))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U659, 0, 0, 3000 );
                    sub_20567( ref l_U681, 0 );
                    sub_18127( "F6_YELLS", ref l_U681, 6, 1 );
                    l_U573 = 1;
                }
            }
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 7.00000000, 7.00000000, 4.50000000, 0 )) || (NOT (IS_CHAR_HEALTH_GREATER( l_U659, 200 ))))
            {
                ADD_COVER_POINT( l_U621._fU0, l_U621._fU4, l_U621._fU8, 1, 280, 0, 0, ref l_U679 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                SETTIMERB( 0 );
                sub_27220();
                l_U559 = 1;
            }
            if (IS_CHAR_IN_AREA_3D( sub_3289(), 968.66620000, -260.59000000, 31.50000000, 944.40570000, -253.73860000, 25.00000000, 0 ))
            {
                sub_27220();
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                sub_25285();
                l_U579 = 1;
                SETTIMERB( 0 );
                l_U559 = 1;
            }
        }
    }
    else if (NOT (IS_CHAR_INJURED( l_U659 )))
    {
        if (NOT l_U574)
        {
            if ((NOT (IS_CHAR_HEALTH_GREATER( l_U659, 140 ))) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 5.50000000, 5.50000000, 3.00000000, 0 )))
            {
                sub_27615();
                l_U574 = 1;
                SETTIMERB( 0 );
            }
            if (NOT l_U581)
            {
                if ((TIMERB() > 3000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U621._fU0, l_U621._fU4, l_U621._fU8, 1.50000000, 1.50000000, 2.00000000, 0 )))
                {
                    SET_CHAR_PROOFS( l_U659, 0, 0, 0, 0, 0 );
                    l_U581 = 1;
                }
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U600._fU0, l_U600._fU4, l_U600._fU8, 1.00000000, 1.00000000, 3.00000000, 0 )))
        {
            if (TIMERB() > 5000)
            {
                if (NOT (sub_19389( l_U681 )))
                {
                    sub_25285();
                    sub_27615();
                    SETTIMERB( 0 );
                }
            }
        }
        if (NOT l_U565)
        {
            if ((l_U579 == 1) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U621._fU0, l_U621._fU4, l_U621._fU8, 2.00000000, 2.00000000, 3.00000000, 0 )))
            {
                SET_CHAR_PROOFS( l_U659, 0, 0, 0, 0, 0 );
                TASK_COMBAT( l_U659, sub_3289() );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                SETTIMERB( 0 );
                l_U565 = 1;
            }
        }
    }
    sub_25780();
    if (NOT (IS_CHAR_INJURED( l_U659 )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 6.50000000, 6.50000000, 3.50000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U600._fU0, l_U600._fU4, l_U600._fU8, 1.20000000, 1.20000000, 3.00000000, 0 )))
        {
            SET_CHAR_IS_TARGET_PRIORITY( l_U659, 1 );
            UNLOCK_RAGDOLL( l_U659, 1 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
            CLEAR_CHAR_TASKS( l_U659 );
            GET_CHAR_HEALTH( l_U659, ref l_U539 );
            if (l_U539 >= 250)
            {
                l_U539 -= 100;
                SET_CHAR_HEALTH( l_U659, l_U539 );
                SET_CHAR_MAX_HEALTH( l_U659, 200 );
            }
            SETTIMERA( 0 );
            l_U565 = 0;
            l_U530 = 5;
        }
    }
    return;
}

void sub_24247()
{
    SET_CREATE_RANDOM_COPS( 1 );
    g_U9210 = 1;
    sub_24270();
    PRINT_NOW( "F7_03", 7000, 1 );
    sub_24423( 25, "F6_FAWAY", "F6AUD", 0 );
    sub_25009();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2874(), 150 );
        SAY_AMBIENT_SPEECH( sub_3289(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_2845();
    return;
}

void sub_24270()
{
    sub_24279();
    return;
}

void sub_24279()
{
    int iVar2;

    iVar2 = 4;
    sub_24293( iVar2 );
    sub_1934( iVar2 );
    return;
}

void sub_24293(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2874(), 150 );
    CLEAR_HELP();
    sub_758( uParam0 );
    return;
}

void sub_24423(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_24467( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_24467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_25009()
{
    for ( l_U533 = 0; l_U533 < 10; l_U533++ )
    {
        if (DOES_CHAR_EXIST( l_U660[l_U533] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U660[l_U533] )))
            {
                SET_CHAR_KEEP_TASK( l_U660[l_U533], 1 );
                FREEZE_CHAR_POSITION( l_U660[l_U533], 0 );
            }
        }
    }
    return;
}

void sub_25285()
{
    if (NOT (IS_CHAR_INJURED( l_U660[0] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[0] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[1] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[1] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[2] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[2] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[3] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[3] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[4] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[4] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[5] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[5] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[6] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[6] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[7] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[7] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[8] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[8] );
    }
    if (NOT (IS_CHAR_INJURED( l_U660[9] )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( l_U660[9] );
    }
    return;
}

void sub_25780()
{
    if (NOT l_U570)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 957.35900000, -284.16780000, 19.88210000, 3.00000000, 3.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 967.32330000, -258.66200000, 20.30140000, 3.00000000, 3.00000000, 2.00000000, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U660[5] )))
            {
                FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[5], 0 );
                SET_CHAR_RELATIONSHIP( l_U660[5], 5, 0 );
                if (l_U534 < 2)
                {
                    SET_CHAR_ACCURACY( l_U660[5], 25 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U660[6] )))
            {
                FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[6], 0 );
                SET_CHAR_RELATIONSHIP( l_U660[6], 5, 0 );
                if (l_U534 < 2)
                {
                    SET_CHAR_ACCURACY( l_U660[6], 25 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U660[7] )))
            {
                FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U660[7], 0 );
                SET_CHAR_RELATIONSHIP( l_U660[7], 5, 0 );
                if (l_U534 < 2)
                {
                    SET_CHAR_ACCURACY( l_U660[7], 25 );
                }
            }
            SET_CREATE_RANDOM_COPS( 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
            l_U570 = 1;
        }
    }
    else if (NOT l_U571)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3289(), 972.49430000, -273.45690000, 20.56710000, 5.00000000, 5.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U660[7] )))
            {
                REMOVE_CHAR_DEFENSIVE_AREA( l_U660[7] );
                SET_CHAR_RELATIONSHIP( l_U660[7], 5, 0 );
                OPEN_SEQUENCE_TASK( ref l_U676 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 976.33710000, -282.73450000, 20.67710000, 3, -2, 1.00000000 );
                TASK_COMBAT( 0, sub_3289() );
                CLOSE_SEQUENCE_TASK( l_U676 );
                TASK_PERFORM_SEQUENCE( l_U660[7], l_U676 );
                CLEAR_SEQUENCE_TASK( l_U676 );
                SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                l_U571 = 1;
            }
        }
    }
    return;
}

void sub_27220()
{
    if (NOT (IS_CHAR_INJURED( l_U659 )))
    {
        CLEAR_CHAR_TASKS( l_U659 );
        SET_CHAR_PROOFS( l_U659, 1, 0, 0, 0, 0 );
        OPEN_SEQUENCE_TASK( ref l_U675 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U621._fU0, l_U621._fU4, l_U621._fU8, 3, 1.00000000, 1.00000000, sub_3289(), 1 );
        TASK_SEEK_COVER_TO_COORDS( 0, l_U621._fU0, l_U621._fU4, l_U621._fU8, 977.99280000, -285.04310000, 30.12790000, 0 );
        CLOSE_SEQUENCE_TASK( l_U675 );
        TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
        CLEAR_SEQUENCE_TASK( l_U675 );
    }
    return;
}

void sub_27615()
{
    if (NOT (IS_CHAR_INJURED( l_U659 )))
    {
        CLEAR_CHAR_TASKS( l_U659 );
        SET_CHAR_PROOFS( l_U659, 0, 0, 0, 0, 0 );
        SET_CHAR_RELATIONSHIP( l_U659, 2, 0 );
        if (HAS_CHAR_GOT_WEAPON( l_U659, 12 ))
        {
            SET_CHAR_ACCURACY( l_U659, 1 );
            SET_CHAR_AMMO( l_U659, 12, 3 );
            OPEN_SEQUENCE_TASK( ref l_U675 );
            TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U600._fU0, l_U600._fU4, l_U600._fU8, 3, 1.00000000, 1.00000000, sub_3289(), 0, 0, 0, 1 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3289() );
            CLOSE_SEQUENCE_TASK( l_U675 );
        }
        else
        {
            OPEN_SEQUENCE_TASK( ref l_U675 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U600._fU0, l_U600._fU4, l_U600._fU8, 3, 15000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3289() );
            CLOSE_SEQUENCE_TASK( l_U675 );
        }
        TASK_PERFORM_SEQUENCE( l_U659, l_U675 );
        CLEAR_SEQUENCE_TASK( l_U675 );
        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
    }
    return;
}

void sub_28586()
{
    switch (l_U535)
    {
        case 0:
        if (TIMERA() > 500)
        {
            if (NOT (IS_CHAR_INJURED( l_U659 )))
            {
                CLEAR_CHAR_TASKS( l_U659 );
                sub_20567( ref l_U681, 1 );
                sub_18127( "F6_CORNERS", ref l_U681, 6, 1 );
                UNLOCK_RAGDOLL( l_U659, 1 );
                SET_CHAR_READY_TO_BE_EXECUTED( l_U659, 1 );
                SET_CHAR_ALLOWED_TO_DUCK( l_U659, 0 );
                if (HAS_CHAR_GOT_WEAPON( l_U659, 12 ))
                {
                    FORCE_CHAR_TO_DROP_WEAPON( l_U659 );
                }
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                SET_CHAR_RELATIONSHIP( l_U659, 2, 0 );
                SET_CHAR_PROOFS( l_U659, 0, 0, 0, 0, 0 );
                SETTIMERB( 0 );
                l_U535++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U659 )))
        {
            if (TIMERB() > 3000)
            {
                if (NOT l_U565)
                {
                    if (NOT l_U566)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( l_U659, l_U600._fU0, l_U600._fU4, l_U600._fU8, 1.50000000, 1.50000000, 3.00000000, 0 ))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U659, sub_3289(), 0 ))
                            {
                                CLEAR_CHAR_TASKS( l_U659 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U659, 0 );
                                SET_CHAR_READY_TO_BE_EXECUTED( l_U659, 0 );
                                GIVE_WEAPON_TO_CHAR( l_U659, 7, 30000, 0 );
                                SET_CURRENT_CHAR_WEAPON( l_U659, 7, 0 );
                                SET_CHAR_RELATIONSHIP( l_U659, 5, 0 );
                                TASK_COMBAT( l_U659, sub_3289() );
                                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
                                l_U565 = 1;
                            }
                        }
                    }
                }
            }
            else
            {
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U659 );
            }
            if (NOT l_U566)
            {
                if (NOT (IS_CHAR_INJURED( l_U659 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3289(), l_U659, 10.00000000, 10.00000000, 3.50000000, 0 )))
                    {
                        sub_20567( ref l_U681, 0 );
                        CLEAR_CHAR_TASKS( l_U659 );
                        SET_CHAR_READY_TO_BE_EXECUTED( l_U659, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U659, 0 );
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U659 );
                        TASK_SMART_FLEE_CHAR( l_U659, sub_3289(), 120, -1 );
                        l_U566 = 1;
                    }
                }
            }
            if (NOT l_U566)
            {
                if (NOT l_U565)
                {
                    sub_29337( ref l_U659, "cocky_plead", "missfaustin6", ref l_U681, "F6_CORNERS" );
                }
            }
            if (NOT (sub_19389( l_U681 )))
            {
                if (NOT l_U564)
                {
                    sub_18127( "F6_KILL", ref l_U681, 6, 1 );
                    l_U564 = 1;
                }
            }
            if (sub_31094( l_U659 ))
            {
                sub_20567( ref l_U681, 0 );
                l_U535++;
                l_U530 = 6;
            }
        }
        break;
    }
    return;
}

int sub_29337(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    vector vVar17;
    float fVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    float fVar24;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_3289() )))
                {
                    GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar9 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 )))
                    {
                        if (NOT (iVar9 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_3289(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3289() );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( (uParam0^), uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) ))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) )))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 1 );
                        }
                    }
                    if (sub_19389( (uParam3^) ))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            GET_CHAR_HEALTH( (uParam0^), ref iVar8 );
                            if (iVar8 < l_U483)
                            {
                                sub_29711( uParam3 );
                                GET_GAME_TIMER( ref l_U481 );
                                l_U481 += 3000;
                            }
                            l_U483 = iVar8;
                        }
                    }
                    GET_GAME_TIMER( ref iVar7 );
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                        {
                            if ((iVar7 > l_U481) AND (sub_30221( (uParam3^) )))
                            {
                                sub_30262( uParam4, uParam3, 8, 1 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_FACING_CHAR( (uParam0^), sub_3289(), 70.00000000 )))
                    {
                        if ((l_U485) AND (iVar7 > l_U482))
                        {
                            l_U485 = 0;
                        }
                    }
                    if (NOT l_U485)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                            {
                                switch (l_U495)
                                {
                                    case 0:
                                    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_3289() ))))
                                    {
                                        GET_CHAR_COORDINATES( sub_3289(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                                        GET_CHAR_COORDINATES( (uParam0^), ref vVar14.x, ref vVar14.y, ref vVar14.z );
                                        uVar11 = {vVar14 - vVar17};
                                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref l_U487 );
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        iVar21 = FLOOR( l_U487 );
                                        iVar23 = FLOOR( fVar20 );
                                        iVar22 = iVar23 + 180;
                                        if (iVar22 > 360)
                                        {
                                            if ((iVar21 >= iVar23) || (iVar21 < (iVar22 - 360)))
                                            {
                                                l_U486 = 1;
                                            }
                                            else
                                            {
                                                l_U486 = 0;
                                            }
                                        }
                                        else if ((iVar21 > iVar23) AND (iVar21 <= iVar22))
                                        {
                                            l_U486 = 1;
                                        }
                                        else
                                        {
                                            l_U486 = 0;
                                        }
                                        l_U495 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                                    {
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3289(), 30.00000000 ))
                                        {
                                            if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3289(), 20.00000000 ))
                                            {
                                                fVar24 = 2;
                                            }
                                            else
                                            {
                                                fVar24 = 3;
                                            }
                                        }
                                        else
                                        {
                                            fVar24 = 4;
                                        }
                                        if (l_U486)
                                        {
                                            fVar20 -= fVar24;
                                        }
                                        else
                                        {
                                            fVar20 += fVar24;
                                        }
                                        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                                        {
                                            SET_CHAR_HEADING( (uParam0^), fVar20 );
                                        }
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3289(), 10.00000000 ))
                                        {
                                            l_U495 = 2;
                                        }
                                    }
                                    break;
                                    case 2:
                                    l_U485 = 1;
                                    l_U482 = iVar7 + 2500;
                                    l_U495 = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
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

int sub_29711(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_18303( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_18303( "\n CONVERSATION PAUSED AT LINE " );
            sub_29867( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_18303( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_18303( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_18303( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_29867(unknown uParam0)
{
    return;
}

void sub_30221(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_30262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_30285( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_30285(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_18204( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_31094(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_3289(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3289() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2874(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_3289() ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_31350()
{
    if (sub_31359())
    {
        sub_34901();
    }
    return;
}

int sub_31359()
{
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    fVar6 = 0.00000000;
    fVar7 = 0.20000000;
    fVar8 = 0.40000000;
    switch (l_U531)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U538 );
        SET_PLAYER_CONTROL( sub_2874(), 0 );
        l_U562 = 0;
        DISPLAY_RADAR( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3289() );
        SET_CHAR_COORDINATES( sub_3289(), 966.75210000, -288.00000000, -100.00000000 );
        SET_CHAR_HEADING( sub_3289(), 185.38960000 );
        CLEAR_AREA( 966.65190000, -290.20000000, 33.07120000, 20.00000000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U659 );
            SET_CHAR_COORDINATES( l_U659, 966.65190000, -289.95000000, -100.00000000 );
            SET_CHAR_HEADING( l_U659, 5.38960000 );
            SET_CHAR_PROOFS( l_U659, 1, 1, 1, 1, 1 );
            UNLOCK_RAGDOLL( l_U659, 0 );
            REMOVE_BLIP( l_U643 );
        }
        TASK_PLAY_ANIM( sub_3289(), "player_execute", "missfaustin6", 30.00000000, 0, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U659, "victim", "missfaustin6", 30.00000000, 0, 1, 1, 0, 0 );
        }
        WAIT( 0 );
        WAIT( 0 );
        CREATE_CAM( 14, ref l_U650 );
        SET_CAM_NAME( l_U650, "main_cam_f6" );
        SET_CAM_POS( l_U650, 964.65030000, -285.33410000, 33.96619000 );
        SET_CAM_ROT( l_U650, 3.89213200, -0.00000000, -152.89710000 );
        SET_CAM_FOV( l_U650, 27.70000000 );
        SET_CAM_ACTIVE( l_U650, 1 );
        SET_CAM_PROPAGATE( l_U650, 1 );
        CREATE_CAM( 14, ref l_U651 );
        SET_CAM_NAME( l_U651, "second_cam_f6" );
        SET_CAM_POS( l_U651, 963.39000000, -292.22150000, 33.93649000 );
        SET_CAM_ROT( l_U651, 2.17325500, 0.00000000, -45.34230000 );
        SET_CAM_FOV( l_U651, 27.70000000 );
        SET_CAM_ACTIVE( l_U651, 0 );
        SET_CAM_PROPAGATE( l_U651, 0 );
        CREATE_CAM( 3, ref l_U652 );
        SET_CAM_NAME( l_U652, "interp_cam_f6" );
        SET_CAM_ACTIVE( l_U652, 0 );
        SET_CAM_PROPAGATE( l_U652, 0 );
        GET_GAME_TIMER( ref l_U703 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U531 = 1;
        break;
        case 1:
        l_U531 = 2;
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3289(), "missfaustin6", "player_execute" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3289(), "missfaustin6", "player_execute", ref fVar2 );
                if (fVar2 > 0.50000000)
                {
                    SET_CAM_ACTIVE( l_U650, 0 );
                    SET_CAM_PROPAGATE( l_U650, 0 );
                    SET_CAM_ACTIVE( l_U651, 1 );
                    SET_CAM_PROPAGATE( l_U651, 1 );
                    l_U531 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U659, "missfaustin6", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U659, "missfaustin6", "victim", ref fVar5 );
                if (fVar2 >= fVar6)
                {
                    if (fVar5 < fVar7)
                    {
                        fVar4 = (fVar5 - fVar6) / (fVar7 - fVar6);
                        fVar3 = 1.00000000 - (fVar4 * fVar8);
                        SET_TIME_SCALE( fVar3 );
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U703 );
                        l_U531 = 4;
                    }
                }
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U659, "missfaustin6", "victim" ))
            {
                GET_GAME_TIMER( ref l_U704 );
                GET_CHAR_ANIM_CURRENT_TIME( l_U659, "missfaustin6", "victim", ref fVar5 );
                if (fVar5 >= 0.95000000)
                {
                    SET_CAM_POS( l_U651, 966.88920000, -290.96780000, 40.98032000 );
                    SET_CAM_ROT( l_U651, -79.89084000, -0.00000000, 167.67840000 );
                    l_U531 = 5;
                }
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U659, "missfaustin6", "victim" ))
            {
                GET_GAME_TIMER( ref l_U704 );
                GET_CHAR_ANIM_CURRENT_TIME( l_U659, "missfaustin6", "victim", ref fVar5 );
                if (fVar5 >= 0.95000000)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( l_U659, "PANIC", "PAIN_VOICE", 1, 1, 0 );
                    SET_CHAR_HEALTH( l_U659, 100 );
                    UNLOCK_RAGDOLL( l_U659, 1 );
                    SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U659, 5000, 8000, 1, 0.00000000, -1.20000000, 0.00000000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U659 )))
                    {
                        SET_CHAR_COORDINATES( l_U659, 966.52000000, -290.70000000, 65436 );
                    }
                    SETTIMERA( 0 );
                    l_U531 = 6;
                }
            }
        }
        break;
        case 6:
        if (TIMERA() > 3000)
        {
            SET_TIME_SCALE( 1.00000000 );
            SET_CAM_POS( l_U650, 957.40680000, -303.16840000, 23.61271000 );
            SET_CAM_ROT( l_U650, -9.45920800, 0.00000000, -24.98846000 );
            SET_CAM_FOV( l_U650, 45.00000000 );
            SET_CAM_ACTIVE( l_U650, 1 );
            SET_CAM_PROPAGATE( l_U650, 1 );
            SET_CAM_POS( l_U651, 953.28850000, -312.06090000, 24.55925000 );
            SET_CAM_ROT( l_U651, 1.61338700, 0.00000000, -28.67432000 );
            SET_CAM_FOV( l_U651, 45.00000000 );
            SET_CAM_PROPAGATE( l_U651, 0 );
            SET_CAM_ACTIVE( l_U652, 1 );
            SET_CAM_PROPAGATE( l_U652, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U652, l_U650, l_U651, 14000, 0 );
            SETTIMERA( 0 );
            l_U531 = 7;
        }
        break;
        case 7:
        if (TIMERA() > 2000)
        {
            if (NOT (IS_CHAR_DEAD( l_U659 )))
            {
                SET_CHAR_HEALTH( l_U659, 0 );
                l_U531 = 8;
            }
        }
        break;
        case 8:
        if (TIMERA() > 6500)
        {
            SET_CAM_ACTIVE( l_U650, 0 );
            SET_CAM_PROPAGATE( l_U650, 0 );
            SET_CAM_ACTIVE( l_U651, 0 );
            SET_CAM_PROPAGATE( l_U651, 0 );
            SET_CAM_ACTIVE( l_U652, 0 );
            SET_CAM_PROPAGATE( l_U652, 0 );
            if (DOES_CAM_EXIST( l_U650 ))
            {
                DESTROY_CAM( l_U650 );
            }
            if (DOES_CAM_EXIST( l_U651 ))
            {
                DESTROY_CAM( l_U651 );
            }
            if (DOES_CAM_EXIST( l_U652 ))
            {
                DESTROY_CAM( l_U652 );
            }
            if (NOT l_U562)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            WAIT( 0 );
            SET_PLAYER_CONTROL( sub_2874(), 1 );
            SET_CAM_BEHIND_PED( sub_3289() );
            DISPLAY_RADAR( 1 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SETTIMERB( 0 );
            END_CAM_COMMANDS( ref l_U538 );
            l_U531 = 9;
        }
        break;
        case 9:
        return 1;
        break;
    }
    if (NOT l_U705)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_3289(), "missfaustin6", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3289(), "missfaustin6", "player_execute", ref fVar2 );
            if (fVar2 >= 0.11100000)
            {
                if (NOT (IS_CHAR_DEAD( l_U659 )))
                {
                    GET_PED_BONE_POSITION( sub_3289(), 1232, 0.20000000, 0.00000000, 0.00000000, ref l_U606 );
                    GET_PED_BONE_POSITION( l_U659, 419, 0.00000000, 0.00000000, 0.00000000, ref uVar9 );
                    FIRE_SINGLE_BULLET( l_U606._fU0, l_U606._fU4, l_U606._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, 0 );
                    FIRE_PED_WEAPON( sub_3289(), uVar9 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3289(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U705 = 1;
                }
            }
        }
    }
    if (NOT l_U706)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_3289(), "missfaustin6", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3289(), "missfaustin6", "player_execute", ref fVar2 );
            if (fVar2 >= 0.59600000)
            {
                if (NOT (IS_CHAR_DEAD( l_U659 )))
                {
                    GET_PED_BONE_POSITION( sub_3289(), 1232, 0.20000000, 0.00000000, 0.00000000, ref l_U606 );
                    GET_PED_BONE_POSITION( l_U659, 1203, 0.00000000, 0.00000000, 0.00000000, ref uVar9 );
                    FIRE_SINGLE_BULLET( l_U606._fU0, l_U606._fU4, l_U606._fU8, uVar9._fU0, uVar9._fU4, uVar9._fU8, 0 );
                    FIRE_PED_WEAPON( sub_3289(), uVar9 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3289(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U706 = 1;
                }
            }
        }
    }
    if (NOT l_U707)
    {
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U659, "missfaustin6", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U659, "missfaustin6", "victim", ref fVar2 );
                if (fVar2 > 0.11200000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U659 )))
                    {
                        if (NOT (# -NULL-0xc27bca()))
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "CS_EXECUTION_FAUSTIN", l_U659, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 419, 1 );
                        }
                        l_U707 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U708)
    {
        if (NOT (IS_CHAR_DEAD( l_U659 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U659, "missfaustin6", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U659, "missfaustin6", "victim", ref fVar2 );
                if (fVar2 > 0.59700000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U659 )))
                    {
                        if (NOT (# -NULL-0xc27bca()))
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "CS_EXECUTION_FAUSTIN", l_U659, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1203, 1 );
                        }
                        l_U708 = 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_34901()
{
    g_U9210 = 0;
    sub_34916();
    SAY_AMBIENT_SPEECH( sub_3289(), "KILLED_ALL", 1, 1, 0 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    UNLOCK_MISSION_NEWS_STORY( 12 );
    sub_46551( 12 );
    CLEAR_WANTED_LEVEL( sub_2874() );
    sub_24423( 25, "F6_FDEAD", "F6AUD", 0 );
    sub_25009();
    sub_49788( 1013, 3 );
    sub_49872( "PD_FAUSTIN", "PD_MIKHAEL" );
    sub_2845();
    return;
}

void sub_34916()
{
    sub_34925();
    return;
}

void sub_34925()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_34943();
    sub_35002( iVar2, iVar3, iVar4 );
    return;
}

void sub_34943()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_35002(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_35034( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_35034(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_35130( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_35130( ref cVar9 );
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
            sub_35130( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_35130( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_35130( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_35130( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_35707( iParam0, iVar7 );;;
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
                sub_36104( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_36104( 0, 4 );
            }
        }
    }
    if (NOT (sub_36193( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2874(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2874() );
    }
    sub_1943();
    bVar27 = true;
    uVar28 = sub_35707( iParam0, iVar7 );
    uVar29 = sub_1400( iParam0 );
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
                sub_45569( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_45999();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_46084( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_46141( iParam0 );
                sub_46180( 0 );
                sub_1841( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_46288();
        }
    }
    if (bParam2)
    {
        sub_45999();
        sub_46376();
        sub_46180( 0 );
    }
    if (bParam3)
    {
        sub_45999();
        sub_46416();
        sub_46180( 0 );
        sub_1841( uVar29, 0 );
    }
    sub_1287();
    return;
}

void sub_35130(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_35707(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1799( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_36104(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_36193(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_36401( uParam1 );
        break;
        case 1:
        bVar8 = sub_38479( uParam1 );
        break;
        case 2:
        bVar8 = sub_38705( uParam1 );
        break;
        case 3:
        bVar8 = sub_38855( uParam1 );
        break;
        case 4:
        bVar8 = sub_39133( uParam1 );
        break;
        case 5:
        bVar8 = sub_39436( uParam1 );
        break;
        case 6:
        bVar8 = sub_39635( uParam1 );
        break;
        case 7:
        bVar8 = sub_39861( uParam1 );
        break;
        case 8:
        bVar8 = sub_40096( uParam1 );
        break;
        case 9:
        bVar8 = sub_40471( uParam1 );
        break;
        case 10:
        bVar8 = sub_40718( uParam1 );
        break;
        case 11:
        bVar8 = sub_40857( uParam1 );
        break;
        case 12:
        bVar8 = sub_41156( uParam1 );
        break;
        case 13:
        bVar8 = sub_41384( uParam1 );
        break;
        case 14:
        bVar8 = sub_41671( uParam1 );
        break;
        case 15:
        bVar8 = sub_41953( uParam1 );
        break;
        case 16:
        bVar8 = sub_42235( uParam1 );
        break;
        case 17:
        bVar8 = sub_42436( uParam1 );
        break;
        case 18:
        bVar8 = sub_42509( uParam1 );
        break;
        case 19:
        bVar8 = sub_42723( uParam1 );
        break;
        case 20:
        bVar8 = sub_42976( uParam1 );
        break;
        case 21:
        bVar8 = sub_43223( uParam1 );
        break;
        case 22:
        bVar8 = sub_43424( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_38084( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_35707( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_43747( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_36401(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_36680( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_36680( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_36680( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_36680( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_36680( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_36680( iVar3, 0, 3, 1, 0, 0 );
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
        sub_36680( iVar3, 0, sub_37962(), sub_38228(), 0, 0 );
        break;
        default:
        sub_38387( "Friend 1", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Friend 1", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_36680(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_36691( uParam1 );
    sub_36865( uParam0, 0, uParam2 );
    sub_36865( uParam0, 1, uParam3 );
    sub_36865( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_34943();
    return;
}

void sub_36691(unknown uParam0)
{
    ADD_SCORE( sub_2874(), uParam0 );
    sub_36716( uParam0 );
    return;
}

void sub_36716(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1799( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_36865(unknown uParam0, int iParam1, int iParam2)
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
        sub_37022( uParam0 );
    }
    return;
}

void sub_37022(unknown uParam0)
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

int sub_37962()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_38084( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_38084(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_38228()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_38084( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_38387(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_38479(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 2", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 2", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38705(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_38387( "Girl 3", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Girl 3", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38855(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_36680( iVar3, 0, sub_37962(), sub_38228(), 0, 0 );
        break;
        default:
        sub_38387( "Friend 4", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Friend 4", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39133(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 5", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 5", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39436(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 7", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 7", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39635(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 7b", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 7b", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39861(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_36680( iVar3, 0, sub_37962(), sub_38228(), 0, 0 );
        break;
        default:
        sub_38387( "Friend 8", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Friend 8", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40096(unknown uParam0)
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
        sub_36680( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_36680( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_36680( iVar3, 0, sub_37962(), sub_38228(), 0, 0 );
        break;
        default:
        sub_38387( "Friend 9", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Friend 9", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40471(unknown uParam0)
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
        sub_36680( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_36680( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_36680( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_38387( "Contact 10", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_38387( "Contact 10", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40718(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_38387( "Girl 11", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Girl 11", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40857(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_38387( "Contact 12", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 12", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41156(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 13", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 13", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41384(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_36680( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_36680( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_36680( iVar3, 0, sub_37962(), sub_38228(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_38387( "Friend 15", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Friend 15", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41671(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 16", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 16", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41953(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36680( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_38387( "Contact 18", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 18", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42235(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 19", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 19", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42436(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_38387( "Girl 20", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42509(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_38387( "Contact 21", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 21", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42723(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36680( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_38387( "Contact 22", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 22", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_36680( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36680( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36680( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_38387( "Contact 24", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 24", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43223(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36680( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36680( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36680( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_38387( "Contact 25", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_38387( "Contact 25", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43424(unknown uParam0)
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
        sub_36680( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_38387( "Girl 26", 1 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_38387( "Girl 26", 0 );
        sub_36680( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_43747(int iParam0, int iParam1)
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
    if (sub_43795( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_44526( iParam1 );
    }
    return;
}

int sub_43795(int iParam0, int iParam1)
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
            sub_43935( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_43935(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_44117( 0 );
    return;
}

void sub_44117(boolean bParam0)
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
        sub_44372();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_44372()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_44526(int iParam0)
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
        sub_44859( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_44859( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_44859( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_44859( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_44859( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_44859( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_44859( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_44859( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_44859( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_44859( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_44859( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_44859( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_44859( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_44859( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_44859( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_44859( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_44859( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_44859( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_44859( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_44859(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_45569(unknown uParam0, unknown uParam1)
{
    sub_45588( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_45588(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_45999()
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

int sub_46084(int iParam0, int iParam1)
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

void sub_46141(unknown uParam0)
{
    sub_1186();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_46180(unknown uParam0)
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

void sub_46288()
{
    sub_46297();
    return;
}

void sub_46297()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_46376()
{
    sub_46297();
    return;
}

void sub_46416()
{
    sub_46297();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_46551(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_46638( iParam0 ))
    {
        sub_47688( iParam0 );
    }
    return;
}

int sub_46638(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_46695( ref uVar3, 1, 0, 0 );
    sub_47307( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_18303( "\n ----------------------------------------------------------------" );
    sub_3422( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_18303( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_46695(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_46748( iParam0, uParam1, uParam2 );
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
        sub_46880( iParam0 + 0 );
    }
    return;
}

void sub_46748(int iParam0, int iParam1, int iParam2)
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
        sub_46880( iParam0 + 0 );
    }
    return;
}

void sub_46880(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_46911( iParam0->_fU4 )))
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

int sub_46911(unknown uParam0)
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

void sub_47307(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_47688(unknown uParam0)
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
        sub_47899( 20, 6, 16383, 16383, ref uVar4 );
        sub_48575( ref uVar4, 7 );
        sub_48606( ref uVar4, 0 );
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
        sub_47899( 20, 7, 9, 16383, ref uVar4 );
        sub_48575( ref uVar4, 7 );
        sub_48606( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_47899(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_47923( uParam0, 0, iParam4 + 0 );
    sub_47923( uParam1, 1, iParam4 + 0 );
    sub_47923( uParam2, 2, iParam4 + 0 );
    sub_47923( uParam3, 3, iParam4 + 0 );
    sub_47923( 0, 4, iParam4 + 0 );
    sub_47923( 1, 5, iParam4 + 0 );
    sub_47923( 65535, 6, iParam4 + 0 );
    sub_47923( 0, 12, iParam4 + 0 );
    sub_47923( 0, 11, iParam4 + 0 );
    sub_47923( 0, 14, iParam4 + 0 );
    sub_47923( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_47923( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_47923( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_47923(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_48575(int iParam0, unknown uParam1)
{
    sub_47923( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_48606(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_48646())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_49333( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_49132( iVar5 );
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

int sub_48646()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_48680( 5, g_U968[I] )) == 7)
        {
            sub_49132( I );
            return 1;
        }
    }
    return 0;
}

int sub_48680(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_49132(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_49205( 39 );
    return;
}

void sub_49205(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_49333(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_49394( uParam0, g_U968[Result] ))
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

int sub_49394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_49788(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_49872(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_49885( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_49885(unknown uParam0, unknown uParam1)
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

