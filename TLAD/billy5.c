void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U360 = 0;
    l_U361 = 0;
    l_U362 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U378 = 10.00000000;
    l_U379 = 10.00000000;
    l_U393 = 0;
    l_U394 = 0;
    l_U560 = 0;
    l_U604 = {1366.00000000, 206.35000000, 35.64830000};
    l_U607 = {1367.15300000, 184.05450000, 27.52270000};
    l_U610 = {1379.25300000, 211.90100000, 34.68360000};
    l_U613 = {1194.00000000, 447.26000000, 24.98000000};
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_471();
        sub_2645();
    }
    WAIT( 0 );
    g_U10460 = 0;
    sub_3536();
    while (true)
    {
        WAIT( 0 );
        sub_8656();
        sub_8800();
        sub_8847();
        switch (l_U392)
        {
            case 0:
            sub_10372();
            break;
            case 1:
            sub_12284();
            break;
            case 2:
            sub_27340();
            break;
            case 3:
            sub_27384();
            break;
        }
    }
    return;
}

void sub_471()
{
    sub_480();
    return;
}

void sub_480()
{
    int iVar2;

    iVar2 = 0;
    sub_494( iVar2 );
    sub_1635( iVar2 );
    return;
}

void sub_494(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_538();
        sub_746();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_871();
            sub_923();
            g_U11095 = 1;
        }
    }
    sub_1016();
    sub_1155();
    uVar5 = sub_1268( uParam0 );
    sub_1544( uVar5, 0 );
    return;
}

void sub_538()
{
    if (g_U10993)
    {
        return;
    }
    sub_565( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_686();
    }
    return;
}

void sub_565(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_686()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_746()
{
    sub_755();
    return;
}

void sub_755()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_871()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_923()
{
    sub_932();
    return;
}

void sub_932()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1016()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1155()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1177();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1177()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1268(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1499( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1499(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1544(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_1635(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1644();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2404())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2470();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1644()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1682( 5, g_U572[I] )) == 1))
        {
            if ((sub_1682( 1, g_U572[I] )) != 0)
            {
                sub_1968( I );
            }
        }
    }
    if (NOT sub_2134())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_1682(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1968(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2053( g_U572 - 1 );
    return;
}

void sub_2053(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2134()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1682( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2404()
{
    if ((g_U10959._fU8 == 1) AND (g_U10959._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_2470()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_2645()
{
    SET_FAKE_WANTED_LEVEL( 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( 6 );
    SET_CREATE_RANDOM_COPS( 1 );
    g_U11004 = 1;
    sub_2701( ref l_U543, 0 );
    if (NOT l_U590)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U599 )))
        {
            STOP_SOUND( l_U599 );
            RELEASE_SOUND_ID( l_U599 );
        }
        if (NOT (HAS_SOUND_FINISHED( l_U600 )))
        {
            STOP_SOUND( l_U600 );
            RELEASE_SOUND_ID( l_U600 );
        }
    }
    CLEAR_HELP();
    FLUSH_COVER_BLOCKING_AREAS();
    CANCEL_OVERRIDE_RESTART();
    SWITCH_RANDOM_BOATS( 1 );
    SWITCH_PED_PATHS_ON( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    SWITCH_PED_PATHS_ON( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1353.69000000, 174.06080000, 0.00000000, 1419.25300000, 187.10470000, 100.00000000 );
    sub_3061( 13 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (DOES_OBJECT_EXIST( l_U518 ))
    {
        DELETE_OBJECT( ref l_U518 );
    }
    SET_PED_IS_BLIND_RAGING( sub_3452(), 0 );
    g_U10460 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2701(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_3061(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3084( uParam0 ) );
    return;
}

int sub_3084(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1499( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3452()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3536()
{
    int iVar2;
    int iVar3;
    int iVar4;

    l_U599 = GET_SOUND_ID();
    l_U600 = GET_SOUND_ID();
    LOAD_ADDITIONAL_TEXT( "BILLY5", 0 );
    LOAD_ADDITIONAL_TEXT( "E1B5AUD", 6 );
    sub_3614( "E1B5AUD" );
    sub_3743( 0, sub_3452(), "JOHNNY", 0 );
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 1 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 1, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 2 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 2, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 5 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 5, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 4 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 4, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 3 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 3, 0, 0 );
    }
    iVar2 = -1;
    GET_CHAR_PROP_INDEX( sub_3452(), 0, ref iVar2 );
    if (NOT (iVar2 == -1))
    {
        CLEAR_CHAR_PROP( sub_3452(), 0 );
    }
    iVar3 = -1;
    GET_CHAR_PROP_INDEX( sub_3452(), 0, ref iVar3 );
    if (NOT (iVar3 == -1))
    {
        CLEAR_CHAR_PROP( sub_3452(), 1 );
    }
    iVar4 = -1;
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_3452(), 0 )) == iVar4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_3452(), 0 )) == iVar4)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3452(), 0, iVar4, 0 );
    }
    sub_4336( 361.55060000, 1504.78400000, 15.96450000, 5.00000000, 372.90190000, 1514.87900000, 16.67920000, 335.00000000 );
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        GET_CURRENT_WEATHER( ref l_U619 );
        FORCE_WEATHER_NOW( 0 );
        LOAD_ADDITIONAL_TEXT( "E1B5AUD", 6 );
        START_CUTSCENE_NOW( "BG05_AA" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
            if (sub_4965())
            {
                if (NOT l_U591)
                {
                    l_U591 = 1;
                }
            }
        }
        CLEAR_NAMED_CUTSCENE( "BG05_AA" );
        if (NOT l_U591)
        {
            START_CUTSCENE_NOW( "BG05_AB" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "BG05_AB" );
        }
        FORCE_WEATHER_NOW( l_U619 );
        RELEASE_WEATHER();
        g_U39149[3] = 0;
        LOAD_ADDITIONAL_TEXT( "E1B5AUD", 6 );
    }
    REQUEST_MODEL( 807349477 );
    REQUEST_MODEL( sub_3084( 13 ) );
    REQUEST_MODEL( -1745203402 );
    REQUEST_MODEL( 1613899343 );
    REQUEST_MODEL( 1794146792 );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAS_MODEL_LOADED( -1745203402 ))) || ((NOT (HAS_MODEL_LOADED( 1794146792 ))) || ((NOT (HAS_MODEL_LOADED( 1613899343 ))) || ((NOT (HAS_MODEL_LOADED( sub_3084( 13 ) ))) || (NOT (HAS_MODEL_LOADED( 807349477 )))))))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 807349477, 1365.67200000, 202.67660000, 47.09000000, ref l_U518, 1 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U529 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U530 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U531 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U532 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U533 );
    SET_RELATIONSHIP( 5, 23, 0 );
    CLEAR_AREA( 363.64320000, 1506.17500000, 15.96790000, 2.00000000, 1 );
    sub_5537();
    while (NOT (sub_5678( ref l_U510, 363.64320000, 1506.17500000, 15.96790000, 259 )))
    {
        WAIT( 0 );
    }
    CLEAR_AREA_OF_COPS( 363.64320000, 1506.17500000, 15.96790000, 1000 );
    sub_7274( 0 );
    if (g_U39149[3] == 0)
    {
        CLEAR_AREA( 361.55060000, 1504.78400000, 15.96450000, 2.00000000, 1 );
        SET_CHAR_COORDINATES( sub_3452(), 361.55060000, 1504.78400000, 15.96450000 );
        SET_CHAR_HEADING( sub_3452(), 270.00000000 );
        LOAD_SCENE( 362.82160000, 1504.80200000, 15.97050000 );
        if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
        {
            if (NOT (IS_CAR_DEAD( l_U510 )))
            {
                WARP_CHAR_INTO_CAR( sub_3452(), l_U510 );
                SET_CAR_ON_GROUND_PROPERLY( l_U510 );
            }
        }
    }
    else if (g_U39149[3] == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U510 )))
        {
            WARP_CHAR_INTO_CAR( sub_3452(), l_U510 );
            SET_CAR_ON_GROUND_PROPERLY( l_U510 );
        }
        SET_CHAR_COORDINATES( sub_3452(), 1213.46200000, 448.20100000, 23.96920000 );
        LOAD_SCENE( 1213.46200000, 448.20100000, 23.96920000 );
    }
    else if (g_U39149[3] == 2)
    {
        l_U392 = 2;
        if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3452(), l_U604._fU0, l_U604._fU4, l_U604._fU8 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3452(), l_U604._fU0, l_U604._fU4, l_U604._fU8 );
        }
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3452(), "Drugden_Floor03" );
    };;;
    CREATE_CAR( -1745203402, l_U613._fU0, l_U613._fU4, l_U613._fU8, ref l_U516, 1 );
    SET_CAR_HEADING( l_U516, 90 );
    SET_CAR_ON_GROUND_PROPERLY( l_U516 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U516, 1 );
    SET_CAR_IN_CUTSCENE( l_U516, 1 );
    CHANGE_CAR_COLOUR( l_U516, 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U516, 0, 0 );
    LOCK_CAR_DOORS( l_U516, 2 );
    CREATE_CHAR( 26, sub_3084( 13 ), 1201.21000000, 448.87000000, 24.98000000, ref l_U495, 1 );
    SET_CHAR_HEADING( l_U495, 270.00000000 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U495, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U495, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U495, 1 );
    SET_CHAR_PROP_INDEX( l_U495, 1, 0 );
    if (NOT (IS_CHAR_DEAD( sub_3452() )))
    {
        TASK_LOOK_AT_CHAR( l_U495, sub_3452(), -2, 0 );
    }
    SWITCH_PED_PATHS_OFF( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    if (NOT (IS_CHAR_INJURED( l_U495 )))
    {
        ADD_BLIP_FOR_CHAR( l_U495, ref l_U521 );
        SET_BLIP_AS_FRIENDLY( l_U521, 1 );
        SET_ROUTE( l_U521, 1 );
    }
    CREATE_PICKUP_ROTATE( sub_8313( 11 ), 22, 16, 1367.66000000, 207.27500000, 26.98500000, -118.80000000, 298.80000000, 77.76000000, ref l_U526 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U526, "drugden_floor1" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1373.03800000, 217.35310000, 34.78360000, 90.00000000, 0.00000000, 0.00000000, ref l_U528 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U528, "Drugden_Floor3a" );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (g_U39149[3] == 0)
    {
        WAIT( 1000 );
        PRINT_NOW( "B5_02", 7500, 1 );
        if (NOT (IS_CHAR_DEAD( sub_3452() )))
        {
            SET_PLAYER_CONTROL( sub_8571(), 1 );
        }
        SETTIMERA( 0 );
        DO_SCREEN_FADE_IN( 500 );
        l_U392 = 0;
    }
    return;
}

void sub_3614(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_3633();
    return;
}

void sub_3633()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_3743(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3827( "\n PED NUMBER ", uParam0 );
    sub_3867( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3827(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3867(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4336(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3452(), uVar10 )))
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
                sub_4598( uVar10 );
                sub_4676( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_4811( uVar10 );
        }
    }
    return;
}

void sub_4598(unknown uParam0)
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

int sub_4676(unknown uParam0)
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

void sub_4811(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_4965()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_5537()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_3452() )))
    {
        GET_CHAR_COORDINATES( sub_3452(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_5593(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_5593()
{
    return 301427732;
}

int sub_5678(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_5593();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_5818( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_5818(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_7274(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_7298( 0, 0 );
    }
    else
    {
        sub_7298( 1, 1 );
    }
    return;
}

void sub_7298(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11093) AND (NOT g_U11094))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_8313(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_8571()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8656()
{
    if (NOT (IS_CHAR_INJURED( sub_3452() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( sub_3452(), 1366, 203, 200.00000000, 200.00000000, 0 ))
        {
            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1366, 203, 48, ref l_U587, ref l_U602 );
            if (NOT l_U587)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1366, 203, 48, 1, 0.00000000 );
            }
        }
    }
    return;
}

void sub_8800()
{
    if (l_U392 <= 2)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U510 )))
        {
            ;
        }
    }
    return;
}

void sub_8847()
{
    if (l_U392 <= 2)
    {
        if (IS_CHAR_INJURED( l_U495 ))
        {
            l_U393 = 3;
            sub_8891();
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U516 )))
        {
            l_U393 = 7;
            sub_8891();
        }
    }
    return;
}

void sub_8891()
{
    sub_8900();
    sub_2701( ref l_U543, 1 );
    sub_9014();
    switch (l_U393)
    {
        case 2:
        PRINT_NOW( "B5_BDEST", 7000, 1 );
        sub_9322( 0, "E1B5_SCREW", "E1B5AUD", 0 );
        break;
        case 3:
        PRINT_NOW( "B5_BRIANDEAD", 7000, 1 );
        sub_9322( 0, "E1B5_BDEAD", "E1B5AUD", 0 );
        break;
        case 6:
        PRINT_NOW( "B5_ATTACKED", 7000, 1 );
        sub_9322( 0, "E1B5_SCREW", "E1B5AUD", 0 );
        break;
        case 7:
        PRINT_NOW( "B5_VANDEAD", 7000, 1 );
        sub_9322( 0, "E1B5_SCREW", "E1B5AUD", 0 );
        break;
    }
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_8571(), 150 );
        SAY_AMBIENT_SPEECH( sub_3452(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    WAIT( 7000 );
    sub_10165();
    sub_2645();
    return;
}

void sub_8900()
{
    if (DOES_BLIP_EXIST( l_U521 ))
    {
        REMOVE_BLIP( l_U521 );
    }
    if (DOES_BLIP_EXIST( l_U523 ))
    {
        REMOVE_BLIP( l_U523 );
    }
    if (DOES_BLIP_EXIST( l_U524 ))
    {
        REMOVE_BLIP( l_U524 );
    }
    return;
}

void sub_9014()
{
    boolean bVar2;

    for ( l_U598 = 0; l_U598 < (l_U397 - 3); l_U598++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U397[l_U598]._fU0 )))
        {
            SET_CHAR_RELATIONSHIP( l_U397[l_U598]._fU0, 5, 0 );
            SET_COMBAT_DECISION_MAKER( l_U397[l_U598]._fU0, l_U531 );
            SET_CHAR_KEEP_TASK( l_U397[l_U598]._fU0, 1 );
            TASK_COMBAT( l_U397[l_U598]._fU0, sub_3452() );
            bVar2 = true;
        }
    }
    if (bVar2)
    {
        ALTER_WANTED_LEVEL( sub_8571(), 3 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8571() );
    }
    return;
}

void sub_9322(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_9366( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_9366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
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
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_10165()
{
    sub_10174();
    return;
}

void sub_10174()
{
    int iVar2;

    iVar2 = 0;
    sub_10188( iVar2 );
    sub_1635( iVar2 );
    return;
}

void sub_10188(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_8571(), 150 );
    CLEAR_HELP();
    sub_494( uParam0 );
    return;
}

void sub_10372()
{
    sub_10381();
    if ((sub_10942( 1, 1 )) AND (NOT l_U584))
    {
        if ((NOT (IS_CHAR_IN_ANY_HELI( sub_3452() ))) AND (IS_CHAR_IN_AREA_3D( sub_3452(), 1186.76700000, 441.96010000, 23.00000000, 1214.04300000, 455.00350000, 27.35000000, 0 )))
        {
            REMOVE_BLIP( l_U521 );
            if (NOT (IS_CHAR_DEAD( l_U495 )))
            {
                SET_CHAR_PROOFS( l_U495, 1, 1, 1, 1, 1 );
            }
            sub_11484();
        }
    }
    return;
}

void sub_10381()
{
    if (NOT l_U584)
    {
        if (IS_WANTED_LEVEL_GREATER( sub_8571(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U521 ))
            {
                SET_ROUTE( l_U521, 0 );
                REMOVE_BLIP( l_U521 );
            }
            if (DOES_BLIP_EXIST( l_U522 ))
            {
                REMOVE_BLIP( l_U522 );
            }
            PRINT_NOW( "B5_05", 7500, 0 );
            l_U584 = 1;
        }
    }
    else if (NOT (IS_WANTED_LEVEL_GREATER( sub_8571(), 0 )))
    {
        switch (l_U392)
        {
            case 0:
            if (NOT l_U562[0])
            {
                l_U562[0] = 1;
            }
            if (NOT (DOES_BLIP_EXIST( l_U521 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U495 )))
                {
                    SET_ROUTE( l_U521, 0 );
                    ADD_BLIP_FOR_CHAR( l_U495, ref l_U521 );
                    SET_BLIP_AS_FRIENDLY( l_U521, 1 );
                    SET_ROUTE( l_U521, 1 );
                }
            }
            break;
            case 1:
            if (NOT l_U562[1])
            {
                l_U562[1] = 1;
            }
            if (NOT (DOES_BLIP_EXIST( l_U521 )))
            {
                SET_ROUTE( l_U521, 0 );
                ADD_BLIP_FOR_COORD( l_U607._fU0, l_U607._fU4, l_U607._fU8, ref l_U521 );
                SET_ROUTE( l_U521, 1 );
            }
            break;
            case 2:
            if (NOT l_U562[2])
            {
                PRINT_NOW( "B5_03", 7500, 1 );
                REMOVE_BLIP( l_U521 );
                l_U562[2] = 1;
            }
            if (NOT (DOES_BLIP_EXIST( l_U521 )))
            {
                SET_ROUTE( l_U521, 0 );
                ADD_BLIP_FOR_COORD( l_U604._fU0, l_U604._fU4, l_U604._fU8, ref l_U521 );
            }
            break;
        }
        l_U584 = 0;
    }
    return;
}

int sub_10942(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3452(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_11066( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_11066(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3452(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3452(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3452()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3452() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_8571() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8571() )))
    {
        return 0;
    }
    return 1;
}

void sub_11484()
{
    SET_PLAYER_CONTROL( sub_8571(), 0 );
    CLEAR_AREA( 1198.40000000, 448.26000000, 24.98000000, 5.00000000, 1 );
    if (g_U39149[3] == 0)
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    else
    {
        CLEAR_AREA( 1216.01000000, 448.08000000, 23.90000000, 50.00000000, 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U516 ))
    {
        SET_CAR_COORDINATES( l_U516, l_U613._fU0, l_U613._fU4, l_U613._fU8 );
        SET_CAR_HEADING( l_U516, 90 );
        SET_CAR_ON_GROUND_PROPERLY( l_U516 );
    }
    GET_CURRENT_WEATHER( ref l_U595 );
    if ((l_U595 == 7) || (l_U595 == 4))
    {
        FORCE_WEATHER_NOW( 5 );
    }
    LOAD_ADDITIONAL_TEXT( "E1B5AUD", 6 );
    START_CUTSCENE_NOW( "BG05_CA" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "BG05_CA" );
    SET_PLAYER_CONTROL( sub_8571(), 1 );
    SET_CHAR_COORDINATES( sub_3452(), 1216.01000000, 448.08000000, 23.90000000 );
    SET_CHAR_HEADING( sub_3452(), 267 );
    if (IS_CHAR_IN_ANY_CAR( sub_3452() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3452(), ref l_U515 );
        SET_CAR_ON_GROUND_PROPERLY( l_U515 );
        SET_CAR_HEADING( l_U515, 267 );
    }
    SET_CAM_BEHIND_PED( sub_3452() );
    if (NOT (IS_CHAR_DEAD( l_U495 )))
    {
        SET_CHAR_PROOFS( l_U495, 0, 0, 0, 0, 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U516 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U495 )))
        {
            SET_CAR_COORDINATES( l_U516, 1156.52200000, 448.15390000, 28.87840000 );
            SET_CAR_HEADING( l_U516, 84 );
            WARP_CHAR_INTO_CAR( l_U495, l_U516 );
            TASK_CAR_DRIVE_WANDER( l_U495, l_U516, 20, 6 );
        }
    }
    PRINT_NOW( "B5_06", 7500, 1 );
    if (NOT (DOES_BLIP_EXIST( l_U521 )))
    {
        SET_ROUTE( l_U521, 0 );
        REMOVE_BLIP( l_U521 );
        ADD_BLIP_FOR_COORD( l_U607._fU0, l_U607._fU4, l_U607._fU8, ref l_U521 );
        SET_ROUTE( l_U521, 1 );
    }
    l_U392 = 1;
    g_U39149[3] = 1;
    RELEASE_WEATHER();
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_12284()
{
    sub_10381();
    sub_12298();
    if (NOT l_U584)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), l_U607._fU0, l_U607._fU4, l_U607._fU8, 2.00000000, 2.00000000, 2.00000000, 1 )) || ((IS_CHAR_IN_AREA_3D( sub_3452(), 1383.23000000, 256.97000000, 26, 1360.56000000, 243.12000000, 36, 0 )) || (IS_CHAR_IN_AREA_2D( sub_3452(), 1353, 170, 1394, 192, 0 ))))
        {
            PRINT_NOW( "B5_03", 7500, 0 );
            if (IS_CHAR_ON_ANY_BIKE( sub_3452() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3452(), ref l_U514 );
            }
            REMOVE_BLIP( l_U521 );
            SET_ROUTE( l_U521, 0 );
            ADD_BLIP_FOR_COORD( l_U604._fU0, l_U604._fU4, l_U604._fU8, ref l_U521 );
            l_U392 = 2;
        }
    }
    return;
}

void sub_12298()
{
    if (l_U394 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), l_U604._fU0, l_U604._fU4, l_U604._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            if (NOT l_U584)
            {
                sub_12385( 0 );
                l_U394 = 1;
                if (DOES_BLIP_EXIST( l_U521 ))
                {
                    REMOVE_BLIP( l_U521 );
                }
                SETTIMERA( 0 );
                PRINT_NOW( "B5_07", 7500, 1 );
                if (NOT (IS_CHAR_INJURED( l_U488 )))
                {
                    PLAY_AUDIO_EVENT_FROM_PED( "BG5_DRUG_SALE_BUST_DOOR_OPEN", l_U488 );
                }
            }
            if (IS_CHAR_ON_ANY_BIKE( sub_3452() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3452(), ref l_U514 );
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_8571(), 0 )))
        {
            LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), l_U604._fU0, l_U604._fU4, l_U604._fU8, 1.60000000, 1.60000000, 1.60000000, 1 );
        }
    }
    else if (NOT l_U570)
    {
        GET_INTERIOR_FROM_CHAR( sub_3452(), ref l_U542 );
        if (l_U542 == nil)
        {
            sub_2701( ref l_U543, 1 );
            SETTIMERA( 27000 );
            l_U570 = 1;
        }
    }
    if (NOT l_U569)
    {
        if ((NOT (IS_CHAR_INJURED( l_U491 ))) AND (NOT (IS_CHAR_INJURED( l_U488 ))))
        {
            if ((NOT l_U560) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3452(), l_U491, 10.30000000, 10.30000000, 2.70000000, 0 )))
            {
                if (sub_15614())
                {
                    sub_2701( ref l_U543, 1 );
                }
                sub_15670( "BG05_HIA", ref l_U543, 7, 1 );
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U491, 0, 0, 3000 );
                SETTIMERB( 0 );
                l_U569 = 1;
            }
        }
    }
    if (IS_CHAR_INJURED( l_U488 ))
    {
        l_U560 = 1;
    }
    else if ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U488, 28 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U488, 21 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U488, 4 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U488, 51 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U488, sub_3452(), 0 ))))))
    {
        l_U560 = 1;
    }
    if (IS_CHAR_INJURED( l_U491 ))
    {
        l_U560 = 1;
    }
    else if ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U491, 28 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U491, 21 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U491, 4 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U491, 51 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U491, sub_3452(), 0 ))))))
    {
        l_U560 = 1;
    }
    if (l_U560)
    {
        if (NOT (IS_CHAR_INJURED( l_U488 )))
        {
            SET_CHAR_NEVER_TARGETTED( l_U488, 0 );
            SET_CHAR_RELATIONSHIP( l_U488, 5, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U488, 0 );
            TASK_COMBAT( l_U488, sub_3452() );
            SET_CHAR_KEEP_TASK( l_U488, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U491 )))
        {
            SET_CHAR_NEVER_TARGETTED( l_U491, 0 );
            SET_CHAR_RELATIONSHIP( l_U491, 5, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U491, 0 );
            TASK_COMBAT( l_U491, sub_3452() );
            SET_CHAR_KEEP_TASK( l_U491, 1 );
        }
        if (DOES_BLIP_EXIST( l_U523 ))
        {
            REMOVE_BLIP( l_U523 );
        }
        if (DOES_BLIP_EXIST( l_U524 ))
        {
            REMOVE_BLIP( l_U524 );
        }
        sub_2701( ref l_U543, 0 );
        l_U393 = 6;
        sub_8891();
    }
    sub_17181();
    if (NOT l_U589)
    {
        if ((sub_11066( 1, 1 )) AND (TIMERA() > 30000))
        {
            l_U589 = 1;
            sub_19243();
            sub_15670( "BG05_ROOF", ref l_U543, 7, 1 );
            l_U584 = 0;
            l_U561 = 0;
            l_U392 = 3;
        }
    }
    if (NOT l_U589)
    {
        if ((sub_11066( 1, 1 )) AND ((IS_SCREEN_FADED_OUT()) AND ((l_U394 == 1) AND (g_U39149[3] == 2))))
        {
            STOP_PED_SPEAKING( sub_3452(), 1 );
            if (NOT (IS_CHAR_DEAD( l_U488 )))
            {
                STOP_PED_SPEAKING( l_U488, 1 );
                SET_CHAR_COORDINATES( l_U488, 1367.57000000, 204.79970000, 34.68390000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U491 )))
            {
                STOP_PED_SPEAKING( l_U491, 1 );
                SET_CHAR_COORDINATES( l_U491, 1367.01400000, 203.78520000, 34.68470000 );
            }
            l_U589 = 1;
            sub_19243();
            STOP_PED_SPEAKING( sub_3452(), 0 );
            sub_15670( "BG05_ROOF", ref l_U543, 7, 1 );
            l_U584 = 0;
            l_U561 = 0;
            l_U392 = 3;
        }
    }
    if (NOT l_U589)
    {
        if ((TIMERB() > 1000) AND ((NOT l_U560) AND ((sub_11066( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3452(), l_U488, 6.00000000, 6.00000000, 2.00000000, 0 )))))
        {
            l_U589 = 1;
            sub_19243();
            sub_15670( "BG05_ROOF", ref l_U543, 7, 1 );
            l_U584 = 0;
            l_U561 = 0;
            l_U392 = 3;
        }
    }
    return;
}

void sub_12385(int iParam0)
{
    switch (iParam0)
    {
        case 0:
        CREATE_CHAR( 26, 1613899343, 1365.71000000, 194.43000000, 27.65000000, ref l_U488, 1 );
        sub_12468();
        CREATE_CHAR( 26, 1794146792, 1365.58000000, 196.83000000, 27.65000000, ref l_U491, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U488, "Drugden_Floor1" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U491, "Drugden_Floor1" );
        SET_CHAR_HEADING( l_U488, 0.00000000 );
        SET_CHAR_HEADING( l_U491, 0.00000000 );
        if (DOES_BLIP_EXIST( l_U521 ))
        {
            REMOVE_BLIP( l_U521 );
        }
        REMOVE_BLIP( l_U521 );
        ADD_BLIP_FOR_CHAR( l_U488, ref l_U523 );
        CHANGE_BLIP_DISPLAY( l_U523, 2 );
        ADD_BLIP_FOR_CHAR( l_U491, ref l_U524 );
        CHANGE_BLIP_DISPLAY( l_U524, 2 );
        SET_BLIP_AS_FRIENDLY( l_U523, 1 );
        SET_BLIP_AS_FRIENDLY( l_U524, 1 );
        break;
        case 1:
        CREATE_CHAR( 26, 1613899343, 1365.34000000, 198.29000000, 36.19000000, ref l_U488, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U488, 1 );
        sub_12468();
        CREATE_CHAR( 26, 1794146792, 1365.40000000, 199.42000000, 37.19000000, ref l_U491, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U491, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U488, "Drugden_Floor03" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U491, "Drugden_Floor03" );
        SET_CHAR_HEADING( l_U488, 0.00000000 );
        SET_CHAR_HEADING( l_U491, 0.00000000 );
        SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U488, 1.30000000 );
        SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U491, 1.30000000 );
        PLAY_SOUND_FROM_POSITION( l_U599, "BG5_DRUG_SALE_BUST_GUNFIRE_BURST", 1366.50000000, 203.82000000, 47.85000000 );
        PLAY_SOUND_FROM_POSITION( l_U600, "BG5_DRUG_SALE_BUST_GUNFIRE_BURST", 1366.50000000, 203.82000000, 47.85000000 );
        if (NOT (IS_CHAR_INJURED( l_U397[6]._fU0 )))
        {
            SAY_AMBIENT_SPEECH( l_U397[6]._fU0, "TARGET", 1, 1, 2 );
        }
        break;
        case 2:
        CREATE_CHAR( 26, 1613899343, 1367.96000000, 196.72000000, 35.69000000, ref l_U488, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U488, 1 );
        sub_12468();
        CREATE_CHAR( 26, 1794146792, 1370.65000000, 196.32000000, 35.69000000, ref l_U491, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U491, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U488, "Drugden_Floor03" );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U491, "Drugden_Floor3b" );
        SET_CHAR_HEADING( l_U488, 90.00000000 );
        SET_CHAR_HEADING( l_U491, 90.00000000 );
        SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U488, 1.15000000 );
        SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U491, 1.15000000 );
        PLAY_SOUND_FROM_POSITION( l_U599, "BG5_DRUG_SALE_BUST_GUNFIRE_BURST", 1366.50000000, 203.82000000, 47.85000000 );
        PLAY_SOUND_FROM_POSITION( l_U600, "BG5_DRUG_SALE_BUST_GUNFIRE_BURST", 1366.50000000, 203.82000000, 47.85000000 );
        if (NOT (IS_CHAR_INJURED( l_U397[6]._fU0 )))
        {
            SAY_AMBIENT_SPEECH( l_U397[6]._fU0, "TARGET", 1, 1, 2 );
        }
        break;
        case 3:
        CREATE_CHAR( 26, 1613899343, 1377.22000000, 220.24000000, 48.56000000, ref l_U488, 1 );
        sub_12468();
        CREATE_CHAR( 26, 1794146792, 1379.01000000, 217.76000000, 48.46000000, ref l_U491, 1 );
        SET_CHAR_HEADING( l_U488, 0.00000000 );
        SET_CHAR_HEADING( l_U491, 0.00000000 );
        CREATE_CHAR( 26, -1004762946, 1376.33000000, 240.95000000, 46.41000000, ref l_U502, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U502, 1 );
        SET_CHAR_PROOFS( l_U502, 1, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
        SET_CHAR_VISIBLE( l_U502, 0 );
        UNLOCK_RAGDOLL( l_U502, 0 );
        break;
    }
    if (NOT (iParam0 == 0))
    {
        UNLOCK_RAGDOLL( l_U488, 0 );
        SET_CHAR_PROOFS( l_U488, 1, 1, 1, 1, 1 );
        UNLOCK_RAGDOLL( l_U491, 0 );
        SET_CHAR_PROOFS( l_U491, 1, 1, 1, 1, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U488 )))
    {
        GIVE_WEAPON_TO_CHAR( l_U488, 14, 30000, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U488, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U488, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U488, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U488, 1 );
        SET_COMBAT_DECISION_MAKER( l_U488, l_U533 );
        SET_CHAR_DECISION_MAKER( l_U488, l_U529 );
        STOP_PED_SPEAKING( l_U488, 1 );
        sub_3743( 3, l_U488, "NIKO", 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U491 )))
    {
        GIVE_WEAPON_TO_CHAR( l_U491, 12, 30000, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U491, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U491, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U491, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U491, 1 );
        SET_COMBAT_DECISION_MAKER( l_U491, l_U533 );
        SET_CHAR_DECISION_MAKER( l_U491, l_U529 );
        STOP_PED_SPEAKING( l_U491, 1 );
        sub_3743( 4, l_U491, "PLAYBOY", 0 );
    }
    switch (iParam0)
    {
        case 0:
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 1365.84000000, 203.88000000, 31.62000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 203.61000000, 31.62000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 196.77000000, 31.62000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 196.77000000, 31.62000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 204.97000000, 35.68000000 );
        TASK_EXTEND_ROUTE( 1367.37000000, 204.79000000, 35.68000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U488, 2, 0 );
        TASK_EXTEND_ROUTE( 1368.10000000, 206.90000000, 35.68000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U491, 2, 0 );
        TASK_LOOK_AT_CHAR( l_U488, sub_3452(), -2, 0 );
        TASK_LOOK_AT_CHAR( l_U491, sub_3452(), -2, 0 );
        break;
        case 1:
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 1365.59000000, 203.61000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 203.61000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 196.77000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 196.77000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 204.97000000, 43.68000000 );
        TASK_EXTEND_ROUTE( 1367.53000000, 204.97000000, 43.68000000 );
        TASK_EXTEND_ROUTE( 1367.53000000, 196.97000000, 43.68000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U488, 3, 0 );
        TASK_FOLLOW_POINT_ROUTE( l_U491, 3, 0 );
        break;
        case 2:
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 1365.59000000, 196.93000000, 35.69000000 );
        TASK_EXTEND_ROUTE( 1365.59000000, 203.61000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 203.61000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1367.38000000, 196.77000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 196.77000000, 39.69000000 );
        TASK_EXTEND_ROUTE( 1365.63000000, 204.97000000, 43.68000000 );
        TASK_EXTEND_ROUTE( 1367.53000000, 204.97000000, 43.68000000 );
        TASK_EXTEND_ROUTE( 1367.53000000, 196.97000000, 43.68000000 );
        TASK_FOLLOW_POINT_ROUTE( l_U488, 3, 0 );
        TASK_FOLLOW_POINT_ROUTE( l_U491, 3, 0 );
        break;
    }
    return;
}

void sub_12468()
{
    int iVar2;
    int iVar3;
    int iVar4;

    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 1 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 1, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 2 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 2, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 5 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 5, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 4 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 4, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 3 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 3, 0, 0 );
    }
    iVar2 = -1;
    GET_CHAR_PROP_INDEX( l_U488, 0, ref iVar2 );
    if (NOT (iVar2 == -1))
    {
        CLEAR_CHAR_PROP( l_U488, 0 );
    }
    iVar3 = -1;
    GET_CHAR_PROP_INDEX( l_U488, 0, ref iVar3 );
    if (NOT (iVar3 == -1))
    {
        CLEAR_CHAR_PROP( l_U488, 1 );
    }
    iVar4 = -1;
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( l_U488, 0 )) == iVar4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( l_U488, 0 )) == iVar4)))
    {
        SET_CHAR_COMPONENT_VARIATION( l_U488, 0, iVar4, 0 );
    }
    return;
}

void sub_15614()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_15670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_15693( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_15693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_15747( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15747(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15769( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_16461( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_15769(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_15846( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_15846( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_15846( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_15846(unknown uParam0)
{
    return;
}

void sub_16461(int iParam0, int iParam1)
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

void sub_17181()
{
    switch (l_U394)
    {
        case 0:
        if (l_U392 == 3)
        {
            if (IS_CHAR_IN_AREA_2D( sub_3452(), 1368.80000000, 195.77000000, 1376.30000000, 199.65000000, 0 ))
            {
                sub_12385( 1 );
                l_U394 = 2;
            }
            else if (IS_CHAR_IN_AREA_2D( sub_3452(), 1368.98000000, 205.40000000, 1373.47000000, 211.56000000, 0 ))
            {
                sub_12385( 2 );
                l_U394 = 2;
            }
            else if (TIMERA() > 10000)
            {
                sub_12385( 2 );
                l_U394 = 2;
            };;;
        }
        break;
        case 2:
        if ((NOT (IS_CHAR_INJURED( l_U491 ))) AND (NOT (IS_CHAR_INJURED( l_U488 ))))
        {
            if (NOT l_U579)
            {
                if ((NOT (sub_17468( l_U543 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (IS_CHAR_INJURED( l_U491 )))))
                {
                    if ((TIMERA() > 10000) || ((IS_CHAR_IN_AREA_2D( sub_3452(), 1368.98000000, 205.40000000, 1373.47000000, 211.56000000, 0 )) || (IS_CHAR_IN_AREA_2D( sub_3452(), 1368.80000000, 195.77000000, 1376.30000000, 199.65000000, 0 ))))
                    {
                        sub_15670( "E1B5_GOINGUP", ref l_U543, 7, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U397[0]._fU0 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U397[0]._fU0, "WALKIE_TALKIE", 1, 0, 2 );
                        }
                    }
                    l_U579 = 1;
                }
            }
            if (NOT l_U592[0])
            {
                if ((l_U579 == 1) AND ((NOT sub_15614()) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U488, 1365.70500000, 202.77100000, 39.68100000, 1.50000000, 1.50000000, 2.00000000, 0 ))))
                {
                    sub_15670( "E1B5_RAGE", ref l_U549, 7, 1 );
                    l_U592[0] = 1;
                }
            }
            if (NOT l_U592[1])
            {
                if ((l_U579 == 1) AND ((NOT sub_15614()) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U488, 1365.62200000, 196.90760000, 39.68530000, 1.50000000, 1.50000000, 2.00000000, 0 ))))
                {
                    sub_15670( "E1B5_RAGE", ref l_U549, 7, 1 );
                    l_U592[1] = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U488, 1365.63000000, 204.97000000, 43.68000000, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                if (sub_15614())
                {
                    sub_2701( ref l_U549, 0 );
                }
                if (DOES_CHAR_EXIST( l_U488 ))
                {
                    DELETE_CHAR( ref l_U488 );
                }
                if (DOES_CHAR_EXIST( l_U491 ))
                {
                    DELETE_CHAR( ref l_U491 );
                }
                if (DOES_OBJECT_EXIST( l_U518 ))
                {
                    PLAY_AUDIO_EVENT_FROM_OBJECT( "BG5_DRUG_SALE_BUST_ROOF_EXIT", l_U518 );
                }
                l_U394 = 3;
            }
        }
        break;
        case 3:
        if (IS_CHAR_IN_AREA_2D( sub_3452(), 1363.47000000, 220.13000000, 1375.30000000, 228.27000000, 0 ))
        {
            if (IS_CHAR_INJURED( l_U488 ))
            {
                sub_12385( 3 );
                l_U394 = 4;
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), 1366.70000000, 192.29000000, 27.68000000, 1.20000000, 1.20000000, 1.20000000, 0 ))
        {
            if (DOES_CHAR_EXIST( l_U501 ))
            {
                DELETE_CHAR( ref l_U501 );
            }
            l_U394 = 6;
        }
        break;
        case 4:
        if (NOT l_U582)
        {
            if (IS_CHAR_IN_AREA_2D( sub_3452(), 1363.47000000, 220.13000000, 1375.30000000, 228.27000000, 0 ))
            {
                if ((NOT (IS_CHAR_INJURED( l_U491 ))) AND (NOT (sub_17468( l_U543 ))))
                {
                    sub_15670( "E1B5_FIBSHIT", ref l_U543, 7, 1 );
                    l_U582 = 1;
                }
            }
        }
        GET_GAME_VIEWPORT_ID( ref l_U520 );
        if ((LOCATE_CHAR_ANY_MEANS_2D( sub_3452(), 1367.43000000, 198.77000000, 2.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3452(), 1373.74000000, 239.01000000, 3.00000000, 3.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3452(), 1395.96000000, 213.71000000, 5.00000000, 5.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3452(), 1384.23000000, 210.50000000, 5.00000000, 5.00000000, 0 )) || ((CAM_IS_SPHERE_VISIBLE( l_U520, 1376.70000000, 224.75000000, 46.48000000, 8.00000000 )) AND (IS_CHAR_IN_AREA_2D( sub_3452(), 1363.39000000, 208.28000000, 1396.76000000, 242.25000000, 0 )))))))
        {
            if (NOT (IS_CHAR_INJURED( l_U502 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U488 )))
                {
                    TASK_GO_TO_COORD_WHILE_SHOOTING( l_U488, 1377.56000000, 233.04000000, 47.03000000, 2, 2.00000000, 3.00000000, l_U502, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U491 )))
                {
                    TASK_GO_TO_COORD_WHILE_SHOOTING( l_U491, 1379.47000000, 232.00000000, 46.50000000, 3, 2.00000000, 3.00000000, l_U502, 0 );
                }
            }
            l_U394 = 5;
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( l_U488 )))
        {
            if ((NOT (sub_17468( l_U543 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U488, 1377.56000000, 233.04000000, 47.03000000, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                if (DOES_CHAR_EXIST( l_U488 ))
                {
                    DELETE_CHAR( ref l_U488 );
                }
                if (DOES_CHAR_EXIST( l_U491 ))
                {
                    DELETE_CHAR( ref l_U491 );
                }
                if (DOES_CHAR_EXIST( l_U502 ))
                {
                    DELETE_CHAR( ref l_U502 );
                }
                l_U394 = 6;
            }
        }
        break;
    }
    if (NOT l_U589)
    {
        sub_19056();
    }
    return;
}

int sub_17468(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_15846( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_15846( "\n speech is not playing" );
    }
    return 0;
}

void sub_19056()
{
    switch (l_U394)
    {
        case 1:
        if ((NOT l_U578) AND ((NOT (sub_17468( l_U543 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
        {
            if ((NOT (IS_CHAR_INJURED( l_U491 ))) AND (NOT (IS_CHAR_INJURED( l_U488 ))))
            {
                sub_15670( "E1B5_STAIR", ref l_U543, 6, 1 );
            }
            l_U578 = 1;
        }
        break;
        default:
    }
    return;
}

void sub_19243()
{
    int iVar2;
    int iVar3;

    CLEAR_PRINTS();
    if (NOT (g_U39149[3] == 2))
    {
        DO_SCREEN_FADE_OUT_UNHACKED( 1000 );
        SET_PLAYER_CONTROL( sub_8571(), 0 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    else
    {
        WAIT( 100 );
    }
    REQUEST_MODEL( 448056022 );
    while (NOT (HAS_MODEL_LOADED( 448056022 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT_NO_OFFSET( 448056022, 1380.11900000, 201.19870000, 35.50570000, ref l_U519, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U519, "Drugden_Floor3b" );
    SET_OBJECT_HEADING( l_U519, 170.00000000 );
    SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U519, 1 );
    if (sub_15614())
    {
        sub_2701( ref l_U543, 0 );
    }
    if (DOES_CHAR_EXIST( l_U488 ))
    {
        DELETE_CHAR( ref l_U488 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1613899343 );
    }
    if (DOES_CHAR_EXIST( l_U491 ))
    {
        DELETE_CHAR( ref l_U491 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1794146792 );
    }
    l_U394 = 0;
    if (DOES_CHAR_EXIST( l_U495 ))
    {
        DELETE_CHAR( ref l_U495 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3084( 13 ) );
    }
    if (DOES_VEHICLE_EXIST( l_U516 ))
    {
        DELETE_CAR( ref l_U516 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1745203402 );
    }
    MAKE_PLAYER_SAFE_FOR_CUTSCENE( sub_8571() );
    LOAD_ADDITIONAL_TEXT( "E2AUD", 6 );
    START_CUTSCENE_NOW( "BG05_AC" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "BG05_AC" );
    LOAD_ADDITIONAL_TEXT( "E1B5AUD", 6 );
    CLEAR_AREA( 1373, 201, 35.50000000, 10, 1 );
    EXTINGUISH_FIRE_AT_POINT( 1373, 201, 35.50000000, 10 );
    SWITCH_ROADS_OFF( 1356, 171, 0, 1385, 187, 100 );
    GET_CURRENT_COP_MODEL( ref l_U395 );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U396 );
    CREATE_PICKUP_ROTATE( sub_8313( 26 ), 22, 60, 1377.97700000, 211.72000000, 34.74400000, -91.44000000, 277.92000000, -109.44000000, ref l_U525 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U525, "bkn_bshRoom04" );
    REQUEST_MODEL( -1004762946 );
    REQUEST_MODEL( 1911513875 );
    REQUEST_MODEL( -825837129 );
    REQUEST_MODEL( -114291515 );
    REQUEST_MODEL( 1613899343 );
    REQUEST_MODEL( 1794146792 );
    REQUEST_MODEL( -1328445565 );
    REQUEST_MODEL( -1084007777 );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAS_MODEL_LOADED( -1084007777 ))) || ((NOT (HAS_MODEL_LOADED( -1328445565 ))) || ((NOT (HAS_MODEL_LOADED( -825837129 ))) || ((NOT (HAS_MODEL_LOADED( l_U396 ))) || ((NOT (HAS_MODEL_LOADED( l_U395 ))) || ((NOT (HAS_MODEL_LOADED( 1794146792 ))) || ((NOT (HAS_MODEL_LOADED( 1613899343 ))) || ((NOT (HAS_MODEL_LOADED( -114291515 ))) || ((NOT (HAS_MODEL_LOADED( 1911513875 ))) || (NOT (HAS_MODEL_LOADED( -1004762946 ))))))))))))
    {
        WAIT( 0 );
        GET_CURRENT_COP_MODEL( ref l_U395 );
        GET_CURRENT_POLICE_CAR_MODEL( ref l_U396 );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3452() );
    WAIT( 0 );
    SET_CHAR_COORDINATES( sub_3452(), 1378.22700000, 213.05230000, 34.68360000 );
    SET_CHAR_HEADING( sub_3452(), 180.45480000 );
    FREEZE_CHAR_POSITION( sub_3452(), 1 );
    while (IS_CHAR_WAITING_FOR_WORLD_COLLISION( sub_3452() ))
    {
        WAIT( 0 );
    }
    FREEZE_CHAR_POSITION( sub_3452(), 0 );
    SET_ROOM_FOR_CHAR_BY_NAME( sub_3452(), "Drugden_Floor3a" );
    sub_20410( sub_3452(), 0 );
    if (HAS_CHAR_GOT_WEAPON( sub_3452(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3452(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3452(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3452(), 14, 1 );
    }
    CLEAR_AREA( 1378.22700000, 213.05230000, 34.68360000, 60.00000000, 1 );
    if (IS_VEH_DRIVEABLE( l_U510 ))
    {
        if (LOCATE_CAR_3D( l_U510, 1378.22700000, 213.05230000, 34.68360000, 7.00000000, 7.00000000, 2.50000000, 0 ))
        {
            SET_CAR_COORDINATES( l_U510, 1376.04900000, 205.99020000, 34.68360000 );
            SET_CAR_HEADING( l_U510, 84 );
        }
    }
    SWITCH_RANDOM_BOATS( 0 );
    CREATE_CHAR( 6, -1328445565, 1377.08500000, 202.69720000, 34.64830000, ref l_U489, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U489, "Drugden_Floor3b" );
    SET_CHAR_HEADING( l_U489, 297 );
    SET_CHAR_DECISION_MAKER( l_U489, l_U529 );
    SET_COMBAT_DECISION_MAKER( l_U489, l_U531 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U489, 23 );
    GIVE_WEAPON_TO_CHAR( l_U489, 7, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U489, 7, 0 );
    SET_CHAR_ACCURACY( l_U489, 10 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U489, 1 );
    SET_CHAR_RELATIONSHIP( l_U489, 5, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1328445565 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U489, 1 );
    SET_CHAR_HEALTH( l_U489, 0 );
    CREATE_CHAR( 6, -1084007777, 1376.86300000, 204.49590000, 34.64830000, ref l_U490, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U490, "Drugden_Floor3b" );
    SET_CHAR_HEADING( l_U490, 339 );
    SET_CHAR_DECISION_MAKER( l_U490, l_U529 );
    SET_COMBAT_DECISION_MAKER( l_U490, l_U531 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U490, 23 );
    GIVE_WEAPON_TO_CHAR( l_U490, 14, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U490, 14, 0 );
    SET_CHAR_ACCURACY( l_U490, 10 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U490, 1 );
    SET_CHAR_RELATIONSHIP( l_U490, 5, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1084007777 );
    SET_CHAR_COMPONENT_VARIATION( l_U490, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U490, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U490, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U490, 4, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U490, 0, 2, 2 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U490, 1 );
    SET_CHAR_HEALTH( l_U490, 0 );
    CREATE_CHAR( 6, -1004762946, 1377.08500000, 202.69720000, 34.64830000, ref l_U496[2], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U496[2] );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U496[2], "Drugden_Floor3b" );
    SET_CHAR_HEADING( l_U496[2], 297 );
    SET_CHAR_DECISION_MAKER( l_U496[2], l_U529 );
    SET_COMBAT_DECISION_MAKER( l_U496[2], l_U531 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U496[2], 23 );
    SET_CHAR_ACCURACY( l_U496[2], 5 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U496[2], 1 );
    SET_CHAR_RELATIONSHIP( l_U496[2], 5, 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U597 );
    SET_CHAR_PROP_INDEX( l_U496[2], 0, l_U597 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U496[2], 23 );
    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U496[2], 0 );
    REMOVE_ALL_CHAR_WEAPONS( l_U496[2] );
    GIVE_WEAPON_TO_CHAR( l_U496[2], 7, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U496[2], 7, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496[2], 1380.87000000, 204.51010000, 35.70640000, 10.00000000 );
    OPEN_SEQUENCE_TASK( ref l_U558 );
    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1380.87000000, 204.51010000, 35.70640000, 3, 1.00000000, -1, sub_3452(), 0 );
    TASK_SEEK_COVER_TO_COORDS( 0, 1380.87000000, 204.51010000, 35.70640000, 1377.27900000, 212.16750000, 35.68860000, 4000 );
    TASK_COMBAT( 0, sub_3452() );
    CLOSE_SEQUENCE_TASK( l_U558 );
    TASK_PERFORM_SEQUENCE( l_U496[2], l_U558 );
    CLEAR_SEQUENCE_TASK( l_U558 );
    CREATE_CHAR( 6, -1004762946, 1376.86300000, 204.49590000, 34.64830000, ref l_U496[3], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U496[3] );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U496[3], "Drugden_Floor3b" );
    SET_CHAR_HEADING( l_U496[3], 339 );
    SET_CHAR_DECISION_MAKER( l_U496[3], l_U529 );
    SET_COMBAT_DECISION_MAKER( l_U496[3], l_U531 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U496[3], 23 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U496[3], 1 );
    SET_CHAR_RELATIONSHIP( l_U496[3], 5, 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U597 );
    SET_CHAR_PROP_INDEX( l_U496[3], 0, l_U597 );
    SET_CHAR_ACCURACY( l_U496[3], 5 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U496[3], 23 );
    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U496[3], 0 );
    REMOVE_ALL_CHAR_WEAPONS( l_U496[3] );
    GIVE_WEAPON_TO_CHAR( l_U496[3], 7, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U496[3], 7, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496[3], 1377.31200000, 204.85960000, 35.68860000, 10.00000000 );
    OPEN_SEQUENCE_TASK( ref l_U557 );
    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1377.31200000, 204.85960000, 35.68860000, 3, 1.00000000, -1, sub_3452(), 0 );
    TASK_SEEK_COVER_TO_COORDS( 0, 1377.31200000, 204.85960000, 35.68860000, 1378.74500000, 212.30440000, 35.68870000, 4000 );
    TASK_COMBAT( 0, sub_3452() );
    CLOSE_SEQUENCE_TASK( l_U557 );
    TASK_PERFORM_SEQUENCE( l_U496[3], l_U557 );
    CLEAR_SEQUENCE_TASK( l_U557 );
    iVar2 = -1;
    GET_CHAR_PROP_INDEX( l_U490, 0, ref iVar2 );
    if (NOT (iVar2 == -1))
    {
        CLEAR_CHAR_PROP( l_U490, 0 );
    }
    iVar3 = -1;
    GET_CHAR_PROP_INDEX( l_U490, 0, ref iVar3 );
    if (NOT (iVar3 == -1))
    {
        CLEAR_CHAR_PROP( l_U490, 1 );
    }
    CREATE_CAR( -825837129, 1367.09200000, 249.33490000, 29.77000000, ref l_U511[1], 1 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U511[1], 1 );
    SET_CAR_HEADING( l_U511[1], 85 );
    SET_CAR_ON_GROUND_PROPERLY( l_U511[1] );
    SET_CAR_ENGINE_ON( l_U511[1], 1, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -825837129 );
    CREATE_CAR( 1911513875, 1368.93000000, 173.05430000, 25.95660000, ref l_U503[0], 1 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U503[0], 1 );
    SET_CAR_HEADING( l_U503[0], 234 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[0] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1911513875 );
    CREATE_CAR( 1911513875, 1369.48700000, 261.18160000, 29.18820000, ref l_U503[1], 1 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U503[1], 1 );
    SET_CAR_HEADING( l_U503[1], 64 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[1] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1911513875 );
    CREATE_CAR( l_U396, 1363.46200000, 182.34420000, 26.20730000, ref l_U506[0], 1 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U506[0], 1 );
    SET_CAR_HEADING( l_U506[0], 60 );
    SET_CAR_ON_GROUND_PROPERLY( l_U506[0] );
    CREATE_CAR( l_U396, 1374.29000000, 182.70190000, 26.05820000, ref l_U506[1], 1 );
    TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET( l_U506[1], 1 );
    SET_CAR_HEADING( l_U506[1], 302 );
    SET_CAR_ON_GROUND_PROPERLY( l_U506[1] );
    CLEAR_AREA( 1382.36600000, 250.16360000, 27.41980000, 3.00000000, 1 );
    CREATE_CAR( -114291515, 1388.14000000, 251.22620000, 27.81150000, ref l_U509, 1 );
    SET_CAR_HEADING( l_U509, 272.94620000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U509 );
    SET_CAR_ENGINE_ON( l_U509, 1, 1 );
    if (g_U39149[3] == 2)
    {
        if (IS_VEH_DRIVEABLE( l_U510 ))
        {
            SET_CAR_COORDINATES( l_U510, 1369.56400000, 187.52260000, 26.11620000 );
            SET_CAR_HEADING( l_U510, 97 );
            SET_CAR_ON_GROUND_PROPERLY( l_U510 );
            SET_CAR_ENGINE_ON( l_U510, 1, 1 );
        }
    }
    sub_23438();
    g_U11004 = 0;
    SET_MAX_WANTED_LEVEL( 0 );
    sub_23612();
    l_U397[0]._fU4 = {1372.92300000, 241.67200000, 29.63290000};
    l_U397[1]._fU4 = {1384.48200000, 198.80340000, 27.29140000};
    l_U397[2]._fU4 = {1386.48200000, 193.61740000, 26.94720000};
    l_U397[3]._fU4 = {1365.16900000, 173.41270000, 27.06630000};
    l_U397[4]._fU4 = {1368.05500000, 221.52110000, 26.34280000};
    l_U397[5]._fU4 = {1365.99800000, 197.34110000, 27.67890000};
    l_U397[6]._fU4 = {1368.20300000, 206.08180000, 31.68280000};
    l_U397[7]._fU4 = {1365.54300000, 194.60920000, 31.68280000};
    l_U397[8]._fU4 = {1365.50700000, 197.18690000, 31.68280000};
    l_U397[9]._fU4 = {1367.30000000, 196.86890000, 31.68280000};
    l_U397[10]._fU4 = {1361.15900000, 181.27660000, 27.25700000};
    l_U397[11]._fU4 = {1373.23700000, 180.25150000, 27.02360000};
    l_U397[12]._fU4 = {1377.04000000, 182.22410000, 26.93770000};
    l_U397[13]._fU4 = {1374.95300000, 244.47440000, 29.59750000};
    l_U397[14]._fU4 = {1364.08800000, 179.50330000, 26.26840000};
    l_U397[15]._fU4 = {1375.21900000, 169.19730000, 25.91270000};
    l_U397[16]._fU4 = {1367.78700000, 194.00520000, 26.67940000};
    l_U397[17]._fU4 = {1364.94100000, 206.26950000, 30.65120000};
    l_U397[0]._fU16 = 172.09140000;
    l_U397[1]._fU16 = 13.12380000;
    l_U397[2]._fU16 = 5.18490000;
    l_U397[3]._fU16 = 48;
    l_U397[4]._fU16 = 186.42770000;
    l_U397[5]._fU16 = 17.24080000;
    l_U397[6]._fU16 = 184.64350000;
    l_U397[7]._fU16 = 8.51880000;
    l_U397[8]._fU16 = 28.27520000;
    l_U397[9]._fU16 = 33.32630000;
    l_U397[10]._fU16 = 336;
    l_U397[11]._fU16 = 31;
    l_U397[12]._fU16 = 51;
    l_U397[13]._fU16 = 189;
    l_U397[14]._fU16 = 328;
    l_U397[15]._fU16 = 43;
    l_U397[16]._fU16 = 44;
    l_U397[17]._fU16 = 191;
    for ( l_U598 = 0; l_U598 < l_U397; l_U598++ )
    {
        sub_24873( l_U598 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[5]._fU0, "DRUGDEN_FLOOR1" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[6]._fU0, "DRUGDEN_FLOOR02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[7]._fU0, "DRUGDEN_FLOOR02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[8]._fU0, "DRUGDEN_FLOOR02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[9]._fU0, "DRUGDEN_FLOOR02" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[16]._fU0, "DRUGDEN_FLOOR1" );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U397[17]._fU0, "DRUGDEN_FLOOR02" );
    CREATE_CHAR( 6, -1004762946, 1366.07600000, 203.74300000, 38.68030000, ref l_U492[0], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U492[0] );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U492[0], "DRUGDEN_FLOOR04" );
    SET_CHAR_HEALTH( l_U492[0], 0 );
    CREATE_CHAR( 26, -1004762946, 1367.47000000, 206.54020000, 43.17350000, ref l_U492[1], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U492[1] );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U492[1], "DRUGDEN_FLOOR05" );
    SET_CHAR_HEALTH( l_U492[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U397[8]._fU0, 1368.58100000, 205.56280000, 35.00000000, 20.00000000 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U397[9]._fU0, 1368.47300000, 207.30980000, 35.00000000, 10.00000000 );
    CLEAR_SEQUENCE_TASK( l_U555 );
    OPEN_SEQUENCE_TASK( ref l_U555 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1371.50500000, 208.31530000, 34.68360000, 3, -2, 1.00000000 );
    TASK_SEEK_COVER_TO_COVER_POINT( 0, l_U534[5], 1379.37500000, 211.83990000, 35.68360000, 10000 );
    TASK_COMBAT( 0, sub_3452() );
    CLOSE_SEQUENCE_TASK( l_U555 );
    TASK_PERFORM_SEQUENCE( l_U397[8]._fU0, l_U555 );
    CLEAR_SEQUENCE_TASK( l_U555 );
    CLEAR_SEQUENCE_TASK( l_U556 );
    OPEN_SEQUENCE_TASK( ref l_U556 );
    TASK_PAUSE( 0, 3000 );
    TASK_COMBAT( 0, sub_3452() );
    CLOSE_SEQUENCE_TASK( l_U556 );
    TASK_PERFORM_SEQUENCE( l_U397[9]._fU0, l_U556 );
    CLEAR_SEQUENCE_TASK( l_U556 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U397[7]._fU0, 1 );
    CLEAR_WANTED_LEVEL( sub_8571() );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_FAKE_WANTED_LEVEL( 2 );
    l_U584 = 0;
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( 1372, 206, 30, 100.00000000 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_8571(), 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3452() );
    LOAD_SCENE( l_U610._fU0, l_U610._fU4, l_U610._fU8 );
    SET_CHAR_HEADING( sub_3452(), 90 );
    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_3452(), l_U610, -2 );
    SET_ROOM_FOR_CHAR_BY_NAME( sub_3452(), "Drugden_Floor3a" );
    SET_PED_IS_BLIND_RAGING( sub_3452(), 1 );
    CLEAR_AREA( l_U610._fU0, l_U610._fU4, l_U610._fU8, 5.00000000, 1 );
    WAIT( 800 );
    DO_SCREEN_FADE_IN_UNHACKED( 500 );
    SET_PLAYER_CONTROL( sub_8571(), 1 );
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    g_U39149[3] = 2;
    FREEZE_OBJECT_POSITION( l_U519, 1 );
    if (NOT (IS_CHAR_INJURED( l_U397[8]._fU0 )))
    {
        SAY_AMBIENT_SPEECH( l_U397[8]._fU0, "EVACUATE_AREA", 1, 1, 2 );
    }
    return;
}

void sub_20410(unknown uParam0, unknown uParam1)
{
    GET_AMMO_IN_CHAR_WEAPON( uParam0, 22, ref l_U597 );
    if (l_U597 > 0)
    {
        SET_CURRENT_CHAR_WEAPON( uParam0, 22, uParam1 );
    }
    else
    {
        GET_AMMO_IN_CHAR_WEAPON( uParam0, 15, ref l_U597 );
        if (l_U597 > 0)
        {
            SET_CURRENT_CHAR_WEAPON( uParam0, 15, uParam1 );
        }
        else
        {
            GET_AMMO_IN_CHAR_WEAPON( uParam0, 14, ref l_U597 );
            if (l_U597 > 0)
            {
                SET_CURRENT_CHAR_WEAPON( uParam0, 14, uParam1 );
            }
            else
            {
                GET_AMMO_IN_CHAR_WEAPON( uParam0, 13, ref l_U597 );
                if (l_U597 > 0)
                {
                    SET_CURRENT_CHAR_WEAPON( uParam0, 13, uParam1 );
                }
                else
                {
                    GET_AMMO_IN_CHAR_WEAPON( uParam0, 12, ref l_U597 );
                    if (l_U597 > 0)
                    {
                        SET_CURRENT_CHAR_WEAPON( uParam0, 12, uParam1 );
                    }
                    else
                    {
                        GET_AMMO_IN_CHAR_WEAPON( uParam0, 26, ref l_U597 );
                        if (l_U597 > 0)
                        {
                            SET_CURRENT_CHAR_WEAPON( uParam0, 26, uParam1 );
                        }
                        else
                        {
                            GET_AMMO_IN_CHAR_WEAPON( uParam0, 10, ref l_U597 );
                            if (l_U597 > 0)
                            {
                                SET_CURRENT_CHAR_WEAPON( uParam0, 10, uParam1 );
                            }
                            else
                            {
                                GET_AMMO_IN_CHAR_WEAPON( uParam0, 27, ref l_U597 );
                                if (l_U597 > 0)
                                {
                                    SET_CURRENT_CHAR_WEAPON( uParam0, 27, uParam1 );
                                }
                                else
                                {
                                    GET_AMMO_IN_CHAR_WEAPON( uParam0, 11, ref l_U597 );
                                    if (l_U597 > 0)
                                    {
                                        SET_CURRENT_CHAR_WEAPON( uParam0, 11, uParam1 );
                                    }
                                    else
                                    {
                                        GET_AMMO_IN_CHAR_WEAPON( uParam0, 9, ref l_U597 );
                                        if (l_U597 > 0)
                                        {
                                            SET_CURRENT_CHAR_WEAPON( uParam0, 9, uParam1 );
                                        }
                                        else
                                        {
                                            GET_AMMO_IN_CHAR_WEAPON( uParam0, 7, ref l_U597 );
                                            if (l_U597 > 0)
                                            {
                                                SET_CURRENT_CHAR_WEAPON( uParam0, 7, uParam1 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_23438()
{
    CREATE_CHAR( 26, -1004762946, 1367.11000000, 219.75000000, 48.84000000, ref l_U501, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501, 1 );
    SET_CHAR_HEADING( l_U501, 122 );
    SET_CHAR_NEVER_TARGETTED( l_U501, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U501 );
    SET_CHAR_KEEP_TASK( l_U501, 1 );
    REMOVE_ALL_CHAR_WEAPONS( l_U501 );
    GIVE_WEAPON_TO_CHAR( l_U501, 13, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U501, 13, 0 );
    return;
}

void sub_23612()
{
    ADD_COVER_BLOCKING_AREA( 1364.83100000, 206.46960000, 0.00000000, 1367.83300000, 209.00000000, 100.00000000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( 1365.10300000, 190.35510000, 0.00000000, 1367.61200000, 193.02220000, 100.00000000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( 1398.50000000, 229.93000000, 0.00000000, 1399.74000000, 230.44000000, 100.00000000, 1, 1, 1 );
    REMOVE_COVER_POINT( l_U534[0] );
    REMOVE_COVER_POINT( l_U534[1] );
    REMOVE_COVER_POINT( l_U534[2] );
    REMOVE_COVER_POINT( l_U534[3] );
    REMOVE_COVER_POINT( l_U534[4] );
    REMOVE_COVER_POINT( l_U534[5] );
    REMOVE_COVER_POINT( l_U534[6] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 42.67470000, 0, 180.00000000, 3, 0, ref l_U534[0] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 38.67850000, 0, 180.00000000, 3, 0, ref l_U534[1] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 34.68470000, 0, 180.00000000, 3, 0, ref l_U534[2] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 30.68470000, 0, 180.00000000, 3, 0, ref l_U534[3] );
    ADD_COVER_POINT( 1366.06300000, 201.66980000, 34.17720000, 1, 322.00000000, 3, 0, ref l_U534[4] );
    ADD_COVER_POINT( 1371.50500000, 208.31530000, 34.68360000, 2, 180.00000000, 3, 0, ref l_U534[5] );
    ADD_COVER_POINT( l_U610._fU0, l_U610._fU4, l_U610._fU8, 2, 180.00000000, 0, 0, ref l_U534[6] );
    return;
}

void sub_24873(int iParam0)
{
    if ((iParam0 == 12) || ((iParam0 == 11) || (iParam0 == 10)))
    {
        CREATE_CHAR( 6, l_U395, l_U397[iParam0]._fU4._fU0, l_U397[iParam0]._fU4._fU4, l_U397[iParam0]._fU4._fU8, ref l_U397[iParam0]._fU0, 1 );
        SET_CHAR_DECISION_MAKER( l_U397[iParam0]._fU0, l_U529 );
        SET_COMBAT_DECISION_MAKER( l_U397[iParam0]._fU0, l_U530 );
        GIVE_WEAPON_TO_CHAR( l_U397[iParam0]._fU0, 7, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U397[iParam0]._fU0, 7, 0 );
        SET_CHAR_ACCURACY( l_U397[iParam0]._fU0, 10 );
    }
    else
    {
        CREATE_CHAR( 6, -1004762946, l_U397[iParam0]._fU4._fU0, l_U397[iParam0]._fU4._fU4, l_U397[iParam0]._fU4._fU8, ref l_U397[iParam0]._fU0, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U397[iParam0]._fU0 );
        SET_CHAR_DECISION_MAKER( l_U397[iParam0]._fU0, l_U529 );
        SET_COMBAT_DECISION_MAKER( l_U397[iParam0]._fU0, l_U530 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U597 );
        SET_CHAR_PROP_INDEX( l_U397[iParam0]._fU0, 0, l_U597 );
        if ((iParam0 mod 2) == 0)
        {
            SET_CHAR_ACCURACY( l_U397[iParam0]._fU0, 15 );
        }
        else
        {
            SET_CHAR_ACCURACY( l_U397[iParam0]._fU0, 10 );
        }
        ADD_ARMOUR_TO_CHAR( l_U397[iParam0]._fU0, 65486 );
    }
    SET_CHAR_HEADING( l_U397[iParam0]._fU0, l_U397[iParam0]._fU16 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U397[iParam0]._fU0, 23 );
    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U397[iParam0]._fU0, 0 );
    REMOVE_ALL_CHAR_WEAPONS( l_U397[iParam0]._fU0 );
    GIVE_WEAPON_TO_CHAR( l_U397[iParam0]._fU0, 13, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U397[iParam0]._fU0, 13, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U397[iParam0]._fU0, l_U397[iParam0]._fU4, 4.00000000 );
    return;
}

void sub_27340()
{
    if (l_U394 == 0)
    {
        sub_10381();
    }
    sub_12298();
    return;
}

void sub_27384()
{
    sub_17181();
    sub_27398();
    if (l_U589)
    {
        if ((TIMERA() > 500) AND ((NOT (sub_17468( l_U543 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT l_U571))))
        {
            PRINT_NOW( "B5_04", 7500, 0 );
            l_U571 = 1;
        }
        if (TIMERA() > 4000)
        {
            if (NOT l_U575)
            {
                CREATE_CHAR( 6, -1004762946, 1376.39100000, 201.06550000, 34.71350000, ref l_U496[0], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U496[0] );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U496[0], "Drugden_Floor3b" );
                SET_CHAR_HEADING( l_U496[0], 297 );
                SET_CHAR_DECISION_MAKER( l_U496[0], l_U529 );
                SET_COMBAT_DECISION_MAKER( l_U496[0], l_U531 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U496[0], 23 );
                SET_CHAR_ACCURACY( l_U496[0], 5 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U496[0], 1 );
                SET_CHAR_RELATIONSHIP( l_U496[0], 5, 0 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U597 );
                SET_CHAR_PROP_INDEX( l_U496[0], 0, l_U597 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U496[0], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U496[0], 0 );
                REMOVE_ALL_CHAR_WEAPONS( l_U496[0] );
                GIVE_WEAPON_TO_CHAR( l_U496[0], 13, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U496[0], 13, 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496[0], 1376.39100000, 201.06550000, 34.71350000, 10.00000000 );
                ADD_ARMOUR_TO_CHAR( l_U496[0], 65486 );
                TASK_COMBAT( l_U496[0], sub_3452() );
                CREATE_CHAR( 6, -1004762946, 1372.64200000, 200.58240000, 34.70590000, ref l_U496[1], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U496[1] );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U496[1], "Drugden_Floor3b" );
                SET_CHAR_HEADING( l_U496[1], 339 );
                SET_CHAR_DECISION_MAKER( l_U496[1], l_U529 );
                SET_COMBAT_DECISION_MAKER( l_U496[1], l_U531 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U496[1], 23 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U496[1], 1 );
                SET_CHAR_RELATIONSHIP( l_U496[1], 5, 0 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U597 );
                SET_CHAR_PROP_INDEX( l_U496[1], 0, l_U597 );
                SET_CHAR_ACCURACY( l_U496[1], 5 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U496[1], 23 );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U496[1], 0 );
                REMOVE_ALL_CHAR_WEAPONS( l_U496[1] );
                GIVE_WEAPON_TO_CHAR( l_U496[1], 13, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U496[1], 13, 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U496[1], 1372.64200000, 200.58240000, 34.70590000, 10.00000000 );
                ADD_ARMOUR_TO_CHAR( l_U496[1], 65486 );
                TASK_COMBAT( l_U496[1], sub_3452() );
                l_U575 = 1;
            }
        }
        if (NOT l_U577)
        {
            if (IS_CHAR_IN_AREA_3D( sub_3452(), 1368.25200000, 192.36340000, 29.68330000, 1364.94700000, 195.71750000, 32.68830000, 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U397[14]._fU0 )))
                {
                    TASK_SHOOT_AT_COORD( l_U397[14]._fU0, 1366.31200000, 194.58860000, 33.75567000, 4000, 5 );
                }
                l_U577 = 1;
                PRINTSTRING( "**********************************FIRE_SINGLE_BULLET*********************************" );
            }
        }
    }
    if (NOT l_U583)
    {
        GET_CHAR_COORDINATES( sub_3452(), ref l_U616._fU0, ref l_U616._fU4, ref l_U616._fU8 );
        if ((NOT sub_28895()) AND (l_U616._fU8 < 28))
        {
            sub_29094();
            if (NOT l_U590)
            {
                if (NOT (HAS_SOUND_FINISHED( l_U599 )))
                {
                    STOP_SOUND( l_U599 );
                    RELEASE_SOUND_ID( l_U599 );
                }
                if (NOT (HAS_SOUND_FINISHED( l_U600 )))
                {
                    STOP_SOUND( l_U600 );
                    RELEASE_SOUND_ID( l_U600 );
                }
                l_U590 = 1;
            }
            l_U583 = 1;
        }
    }
    if (NOT l_U586)
    {
        sub_29316();
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), 1365.99100000, 199.24800000, 28.94340000, 100, 100, 100, 0 )))
        {
            sub_29490();
            l_U586 = 1;
        }
    }
    if (IS_WANTED_LEVEL_GREATER( sub_8571(), 0 ))
    {
        if ((NOT (sub_17468( l_U543 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT l_U584) AND (l_U583))))
        {
            PRINT_NOW( "B5_05", 7500, 0 );
            l_U584 = 1;
        }
    }
    else if (l_U584)
    {
        sub_29695();
    }
    return;
}

void sub_27398()
{
    if (NOT l_U580)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), 1365.68000000, 208.53000000, 27.68000000, 1.20000000, 1.20000000, 1.20000000, 0 ))
        {
            sub_12385( 3 );
            l_U394 = 4;
            if (NOT (IS_CHAR_INJURED( l_U501 )))
            {
                UNLOCK_RAGDOLL( l_U501, 1 );
                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U501 );
                HIGH_FALL_SCREAM( l_U501 );
                l_U616 = {-1.00000000, 0.40000000, 0.00000000};
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U501, 3000, 6000, 4, l_U616 / (VMAG( l_U616 )), 28.00000000, 0, 0, 0, 0, 0, 0 );
            }
            l_U580 = 1;
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3452(), 1366.70000000, 192.29000000, 27.68000000, 1.20000000, 1.20000000, 1.20000000, 0 ))
        {
            if (DOES_CHAR_EXIST( l_U501 ))
            {
                DELETE_CHAR( ref l_U501 );
            }
            l_U580 = 1;
        }
    }
    return;
}

int sub_28895()
{
    int iVar2;

    GET_KEY_FOR_CHAR_IN_ROOM( sub_3452(), ref iVar2 );
    if ((iVar2 == (GET_HASH_KEY( "DRUGDEN_FLOOR02" ))) || ((iVar2 == (GET_HASH_KEY( "drugden_floor1" ))) || ((iVar2 == (GET_HASH_KEY( "Drugden_Floor3b" ))) || ((iVar2 == (GET_HASH_KEY( "Drugden_Floor3a" ))) || (iVar2 == (GET_HASH_KEY( "Drugden_Floor03" )))))))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

void sub_29094()
{
    g_U11004 = 1;
    SET_FAKE_WANTED_LEVEL( 0 );
    SET_MAX_WANTED_LEVEL( 6 );
    SET_WANTED_MULTIPLIER( 0.20000000 );
    ALTER_WANTED_LEVEL( sub_8571(), 3 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_8571() );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U492[0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U492[1] );
    return;
}

void sub_29316()
{
    for ( l_U598 = 0; l_U598 < l_U397; l_U598++ )
    {
        if (IS_CHAR_INJURED( l_U397[l_U598]._fU0 ))
        {
            if (DOES_CHAR_EXIST( l_U397[l_U598]._fU0 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U397[l_U598]._fU0 );
            }
        }
    }
    return;
}

void sub_29490()
{
    for ( l_U598 = 0; l_U598 < l_U397; l_U598++ )
    {
        if (DOES_CHAR_EXIST( l_U397[l_U598]._fU0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U397[l_U598]._fU0 );
        }
    }
    return;
}

void sub_29695()
{
    sub_29704();
    CLEAR_WANTED_LEVEL( sub_8571() );
    g_U24 = 82;
    sub_9322( 0, "E1B5_PASS", "E1B5AUD", 0 );
    UNLOCK_LAZLOW_STATION();
    sub_2645();
    return;
}

void sub_29704()
{
    sub_29713();
    return;
}

void sub_29713()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_29731();
    sub_29790( iVar2, iVar3, iVar4 );
    return;
}

void sub_29731()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_29790(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_29822( iVar5, uParam0, uParam1, uParam2, "Contact_1" );
    return;
}

void sub_29822(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_29918( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_29918( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_29918( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_29918( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_29918( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_29918( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_30495( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4) AND (NOT g_U12306[uParam0]._fU144[I]._fU12))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_30943( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_8571() );
    sub_1644();
    bVar28 = true;
    uVar29 = sub_30495( uParam0, iVar7 );
    uVar30 = sub_1268( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 6) || (iVar31 == 5))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_35397( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_35831();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_35916( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_35995( uParam0 );
                sub_36034( 0 );
                sub_1544( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_36223();
        }
    }
    if (bParam2)
    {
        sub_35831();
        sub_36322();
        sub_36034( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_35831();
        sub_36374();
        sub_36034( 0 );
        sub_1544( uVar30, 0 );
    }
    sub_1155();
    return;
}

void sub_29918(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_30495(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1499( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_30943(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_31039( uParam1 );
        break;
        case 1:
        bVar8 = sub_31734( uParam1 );
        break;
        case 2:
        bVar8 = sub_32467( uParam1 );
        break;
        case 3:
        bVar8 = sub_32704( uParam1 );
        break;
        case 4:
        bVar8 = sub_32870( uParam1 );
        break;
        case 5:
        bVar8 = sub_33069( uParam1 );
        break;
        case 6:
        bVar8 = sub_33264( uParam1 );
        break;
        case 7:
        bVar8 = sub_33469( uParam1 );
        break;
        case 8:
        bVar8 = sub_33674( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_32082( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_30495( uParam0, uParam1 );
    if (bParam3)
    {
        sub_33960( uVar9, uParam0 );
    }
    return 1;
}

int sub_31039(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_31136( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31136( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_31136( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_31136( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_31641( "Contact 1", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 1", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_31136(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_31147( uParam1 );
    sub_31321( uParam0, 0, uParam2 );
    sub_31321( uParam0, 1, uParam3 );
    sub_31321( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_29731();
    return;
}

void sub_31147(unknown uParam0)
{
    ADD_SCORE( sub_8571(), uParam0 );
    sub_31172( uParam0 );
    return;
}

void sub_31172(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1499( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_31321(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_31641(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_31734(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31136( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_31136( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31136( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_31136( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_31136( iVar3, 0, sub_31960(), sub_32226(), 0, 0 );
        break;
        default:
        sub_31641( "Contact 2", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 2", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31960()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32082( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32082(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_32226()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32082( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_32467(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31136( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_31136( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31136( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_31641( "Contact 3", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 3", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32704(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_31641( "Friend 4", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Friend 4", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32870(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31136( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31136( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_31641( "Contact 5", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 5", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33069(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31136( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31136( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_31641( "Contact 6", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 6", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33264(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
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
        sub_31136( iVar3, 0, sub_31960(), sub_32226(), 0, 0 );
        break;
        default:
        sub_31641( "Friend 7", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Friend 7", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33469(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
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
        sub_31136( iVar3, 0, sub_31960(), sub_32226(), 0, 0 );
        break;
        default:
        sub_31641( "Friend 8", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Friend 8", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33674(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31136( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_31641( "Contact 9", 1 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31641( "Contact 9", 0 );
        sub_31136( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_33960(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_34021( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_34739( iParam1 );
    }
    return;
}

int sub_34021(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_34161( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_34161(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_34331( 0 );
    return;
}

void sub_34331(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_34576();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_34576()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_34739(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_34970( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_34970( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_34970( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_34970( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_34970( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_34970( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_34970(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_35397(unknown uParam0, unknown uParam1)
{
    sub_35416( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_35416(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_35831()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_35916(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_35995(unknown uParam0)
{
    sub_1016();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_36034(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_36085( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_36085(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_36223()
{
    sub_36232();
    return;
}

void sub_36232()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_36322()
{
    sub_36232();
    return;
}

void sub_36374()
{
    sub_36232();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

