void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U70 = 0;
    l_U82 = 0;
    l_U83 = 1;
    l_U84 = 3;
    l_U86 = 0;
    l_U87 = -1;
    l_U88 = 0;
    l_U89 = 0;
    l_U90 = 0;
    l_U91 = 0;
    l_U92 = 0;
    l_U93 = 0;
    l_U94 = 0;
    l_U96 = -1;
    l_U208 = 15.00000000;
    l_U209 = 35.00000000;
    l_U210 = 16.00000000;
    l_U211 = 0.00000000;
    l_U217 = 1000.00000000;
    l_U218 = 7500.00000000;
    l_U227 = 1;
    l_U228 = 30.00000000;
    l_U229 = 30.00000000;
    l_U230 = 2.00000000;
    l_U240 = 0.00000000;
    l_U241 = 0.00000000;
    l_U253 = 1;
    l_U254 = 0;
    l_U255 = -1;
    l_U256 = 1;
    l_U257 = -1;
    l_U258 = -1;
    l_U259 = 15.00000000;
    l_U286 = 0;
    l_U287 = -1949702649;
    l_U288 = 2075870698;
    l_U293 = 0.12000000;
    l_U304 = 1;
    l_U305 = 1;
    l_U445 = {0.00000000, 0.00000000, 0.00000000};
    l_U448 = 2.50000000;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U452 = 0;
    l_U863 = -408052231;
    l_U864 = 1439613707;
    l_U875 = 0;
    l_U887 = {-1950.61000000, -79.98751000, 4.73000000};
    l_U890 = {-1951.47700000, -59.47060000, 4.22400000};
    l_U893 = {-1943.20300000, -62.43990000, 5.67630000};
    l_U896 = {-1950.38100000, -62.39640000, 19.21480000};
    l_U899 = {-1950.38100000, -66.39640000, 19.21480000};
    l_U902 = {-927.38640000, 1261.59100000, 23.60800000};
    l_U905 = 205.93900000;
    l_U906 = 0;
    l_U1067 = 0;
    l_U1068 = 0;
    l_U1091 = 0;
    l_U1093 = {-1949.09800000, -67.78201000, 20.65170000};
    l_U1096 = {3.74678400, -0.00000000, 20.52151000};
    l_U1134 = 1;
    l_U1155 = 0;
    l_U1192 = 1;
    l_U1207 = 1;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_660();
        sub_2834();
    }
    while (true)
    {
        WAIT( 0 );
        if (l_U912)
        {
            if (IS_CHAR_DEAD( l_U456[0]._fU0 ))
            {
                if (DOES_BLIP_EXIST( l_U847[0] ))
                {
                    REMOVE_BLIP( l_U847[0] );
                }
                l_U875 = 1;
                l_U453 = 4;
            }
        }
        switch (l_U453)
        {
            case 0:
            sub_3412();
            l_U453 = 1;
            break;
            case 1:
            sub_4568();
            break;
            case 2:
            sub_8332();
            break;
            case 3:
            sub_27181();
            sub_48292();
            break;
            case 4:
            sub_57573();
            break;
            case 12:
            sub_58601();
            break;
        }
        if (l_U1070)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U872 )))
            {
                if (DOES_VEHICLE_EXIST( l_U872 ))
                {
                    ADD_CAR_TO_MISSION_DELETION_LIST( l_U872 );
                }
                else
                {
                    SCRIPT_ASSERT( "Doesn't exist!" );
                }
                sub_59375();
                if (DOES_CHAR_EXIST( l_U456[0]._fU0 ))
                {
                    DELETE_CHAR( ref l_U456[0]._fU0 );
                }
                sub_37460( 1 );
            }
        }
        if (l_U1071)
        {
            if (NOT (IS_CAR_DEAD( l_U872 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_2854(), l_U872 )))
                {
                    if (NOT (LOCATE_CAR_3D( l_U872, -1951.75700000, -66.31300000, 10.37090000, 100.00000000, 100.00000000, 100.00000000, 0 )))
                    {
                        if (sub_59617( l_U872 ))
                        {
                            sub_59375();
                            if (DOES_CHAR_EXIST( l_U456[0]._fU0 ))
                            {
                                DELETE_CHAR( ref l_U456[0]._fU0 );
                            }
                            sub_37460( 2 );
                        }
                    }
                }
            }
        }
        if (l_U1072)
        {
            if (IS_VEH_DRIVEABLE( l_U872 ))
            {
                if (sub_59896( l_U872 ))
                {
                    sub_59375();
                    if (DOES_CHAR_EXIST( l_U456[0]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[0]._fU0 );
                    }
                    sub_37460( 1 );
                }
            }
        }
        sub_61363();
        if (NOT l_U921)
        {
            if (sub_43469( sub_2854() ))
            {
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                l_U921 = 1;
            }
        }
        else if (NOT (sub_43469( sub_2854() )))
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            l_U921 = 0;
        }
        sub_61652();
    }
    return;
}

void sub_660()
{
    sub_669();
    return;
}

void sub_669()
{
    int iVar2;

    iVar2 = 1;
    sub_683( iVar2 );
    sub_1824( iVar2 );
    return;
}

void sub_683(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_727();
        sub_935();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1060();
            sub_1112();
            g_U11095 = 1;
        }
    }
    sub_1205();
    sub_1344();
    uVar5 = sub_1457( uParam0 );
    sub_1733( uVar5, 0 );
    return;
}

void sub_727()
{
    if (g_U10993)
    {
        return;
    }
    sub_754( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_875();
    }
    return;
}

void sub_754(int iParam0)
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

void sub_875()
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

void sub_935()
{
    sub_944();
    return;
}

void sub_944()
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

void sub_1060()
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

void sub_1112()
{
    sub_1121();
    return;
}

void sub_1121()
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

void sub_1205()
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

void sub_1344()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1366();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1366()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1457(unknown uParam0)
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
    sub_1688( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1688(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1733(int iParam0, boolean bParam1)
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

void sub_1824(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1833();
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
    if (NOT sub_2593())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2659();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1833()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1871( 5, g_U572[I] )) == 1))
        {
            if ((sub_1871( 1, g_U572[I] )) != 0)
            {
                sub_2157( I );
            }
        }
    }
    if (NOT sub_2323())
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

int sub_1871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2157(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2242( g_U572 - 1 );
    return;
}

void sub_2242(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2323()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1871( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2593()
{
    if ((g_U10959._fU8 == 1) AND (g_U10959._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_2659()
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

void sub_2834()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U865 );
    SET_PED_IS_BLIND_RAGING( sub_2854(), 0 );
    sub_2903();
    sub_2929( 1 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1923.08800000, -78.82530000, 0.00000000, -1871.07800000, -59.23310000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1947.91900000, -92.13790000, 0.00000000, -1920.68600000, -11.37290000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -2168.91800000, -97.50701000, 0.00000000, -1936.08800000, -89.17440000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1921.03300000, -91.11570000, 0.00000000, -1708.91000000, -91.04550000, 100.00000000 );
    REMOVE_BLIP( l_U882 );
    REMOVE_BLIP( l_U883 );
    REMOVE_BLIP( l_U884 );
    REMOVE_BLIP( l_U885 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (l_U914)
    {
        ;
    }
    STOP_SOUND( l_U908 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2854()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2903()
{
    g_U39126 = 0;
    return;
}

void sub_2929(boolean bParam0)
{
    if (bParam0)
    {
        g_U11116 = 0;
    }
    else
    {
        g_U11116 = 1;
    }
    return;
}

void sub_3412()
{
    sub_3424( 500 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    LOAD_ADDITIONAL_TEXT( "JIM6", 0 );
    LOAD_ADDITIONAL_TEXT( "E1J6AUD", 6 );
    sub_3581( "E1J6AUD" );
    sub_3710( 0, sub_2854(), "JOHNNY", 0 );
    SWITCH_ROADS_OFF( -1923.08800000, -78.82530000, 0.00000000, -1871.07800000, -59.23310000, 100.00000000 );
    SWITCH_ROADS_OFF( -1947.91900000, -92.13790000, 0.00000000, -1920.68600000, -11.37290000, 100.00000000 );
    SWITCH_ROADS_OFF( -2168.91800000, -97.50701000, 0.00000000, -1936.08800000, -89.17440000, 100.00000000 );
    SWITCH_ROADS_OFF( -1921.03300000, -91.11570000, 0.00000000, -1708.91000000, -91.04550000, 100.00000000 );
    SWITCH_ROADS_OFF( -1930.50900000, -99.13600000, 0.00000000, -1710.83800000, -83.00650000, 100.00000000 );
    PROCESS_MISSION_DELETION_LIST();
    ADD_COVER_POINT( -1953.80200000, -77.11940000, 6.20650000, 0, 354.60500000, 3, 0, ref l_U968[0] );
    ADD_COVER_POINT( -1951.71600000, -73.98760000, 6.20650000, 1, 357.30370000, 3, 0, ref l_U968[1] );
    ADD_COVER_POINT( -1952.66600000, -72.81080000, 6.20650000, 3, 0.00000000, 0, 0, ref l_U968[2] );
    ADD_COVER_POINT( -1946.98300000, -74.21000000, 6.20650000, 3, 0.00000000, 0, 0, ref l_U968[4] );
    ADD_COVER_POINT( -1948.50700000, -68.61470000, 6.20650000, 2, 351.76140000, 0, 0, ref l_U968[5] );
    ADD_COVER_POINT( -1948.24000000, -63.97700000, 6.24300000, 2, 173.90190000, 0, 0, ref l_U968[6] );
    ADD_COVER_POINT( -1952.54500000, -70.14780000, 6.20650000, 2, 162.29930000, 0, 0, ref l_U942[7] );
    ADD_COVER_POINT( -1949.48000000, -63.25110000, 6.20650000, 1, 180.00000000, 3, 0, ref l_U942[8] );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 1, 0.00000000 );
    sub_4446( "E1J6AUD", "E1B6_TERRY", "E1B6_CLAY" );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    l_U1148 = 5000;
    g_U38774++;
    l_U908 = GET_SOUND_ID();
    return;
}

void sub_3424(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_3581(unknown uParam0)
{
    StrCopy( ref l_U110._fU0, uParam0, 16 );
    sub_3600();
    return;
}

void sub_3600()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U110._fU16[I]._fU0 = nil;
        StrCopy( ref l_U110._fU16[I]._fU4, "", 32 );
        l_U110._fU344[I] = 0;
    }
    return;
}

void sub_3710(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U110._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U110._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3794( "\n PED NUMBER ", uParam0 );
    sub_3834( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3794(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3834(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4446(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U39126 = 1;
    StrCopy( ref g_U39127, uParam0, 16 );
    StrCopy( ref g_U39131, uParam1, 32 );
    StrCopy( ref g_U39139, uParam2, 32 );
    return;
}

void sub_4568()
{
    boolean bVar2;

    switch (l_U1237)
    {
        case 0:
        if (sub_4613())
        {
            if (IS_BIT_SET( g_U10959._fU0, 7 ))
            {
                ADD_SCENARIO_BLOCKING_AREA( -1228.70200000, 1286.79200000, 0.00000000, -1060.89800000, 1361.98300000, 100.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
                CLEAR_AREA( -1228.70200000, 1286.79200000, 0.00000000, 400.00000000, 0 );
                if (g_U39149[8] > 0)
                {
                    g_U39149[8] = 0;
                }
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                START_CUTSCENE_NOW( "JF06_AA" );
                l_U1237 = 1;
            }
            else
            {
                l_U1237 = 2;
            }
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U1237 = 2;
            CLEAR_NAMED_CUTSCENE( "JF06_AA" );
        }
        break;
        case 2:
        REQUEST_MODEL( l_U863 );
        REQUEST_MODEL( l_U864 );
        REQUEST_ANIMS( "missjim_6" );
        sub_5025( 13 );
        REQUEST_CAR_RECORDING( 231 );
        REQUEST_CAR_RECORDING( 470 );
        while ((NOT (sub_5462( 13 ))) || ((NOT (HAVE_ANIMS_LOADED( "missjim_6" ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 231 ))) || ((NOT (HAS_MODEL_LOADED( l_U864 ))) || (NOT (HAS_MODEL_LOADED( l_U863 ))))))))
        {
            WAIT( 0 );
        }
        FLUSH_SCENARIO_BLOCKING_AREAS();
        SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        sub_5544();
        switch (g_U39149[8])
        {
            case 0:
            if (g_U15728[29])
            {
                while (NOT (sub_5733( ref l_U872, -1111.08400000, 1321.33100000, 23.26340000, 89.85380000 )))
                {
                    WAIT( 0 );
                }
            }
            else
            {
                while (NOT (sub_7355( ref l_U872, -1111.08400000, 1321.33100000, 23.26340000, 89.85380000 )))
                {
                    WAIT( 0 );
                }
            }
            SET_CAR_ENGINE_ON( l_U872, 1, 1 );
            LOAD_SCENE( -1111.07100000, 1321.32100000, 23.26260000 );
            bVar2 = true;
            l_U453 = 2;
            break;
            case 1:
            if (g_U15728[29])
            {
                while (NOT (sub_5733( ref l_U872, -1953.07700000, -101.40240000, 5.57800000, 266.63190000 )))
                {
                    WAIT( 0 );
                }
            }
            else
            {
                while (NOT (sub_7355( ref l_U872, -1953.07700000, -101.40240000, 5.57800000, 266.63190000 )))
                {
                    WAIT( 0 );
                }
            }
            SET_CAR_ENGINE_ON( l_U872, 1, 1 );
            CLEAR_AREA( -1953.07700000, -101.40240000, 5.57800000, 200, 0 );
            LOAD_SCENE( -1953.07700000, -101.40240000, 5.57800000 );
            l_U453 = 2;
            break;
        }
        if (NOT (IS_CAR_DEAD( l_U872 )))
        {
            SET_CAR_ON_GROUND_PROPERLY( l_U872 );
        }
        if (NOT (IS_CAR_DEAD( l_U872 )))
        {
            WARP_CHAR_INTO_CAR( sub_2854(), l_U872 );
        }
        l_U1070 = 1;
        l_U1071 = 1;
        l_U1072 = 1;
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_7910();
        if (bVar2)
        {
            SET_PLAYER_CONTROL( sub_4837(), 1 );
            sub_8120( 500 );
            sub_8226();
            ADD_BLIP_FOR_COORD( -1954.07200000, -100.12500000, 8.02400000, ref l_U886 );
            SET_ROUTE( l_U886, 1 );
        }
        break;
    }
    if (l_U1067)
    {
        ;
    }
    return;
}

void sub_4613()
{
    return sub_4624( 1, 1 );
}

int sub_4624(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_4837()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5025(unknown uParam0)
{
    REQUEST_MODEL( sub_5036( uParam0 ) );
    return;
}

int sub_5036(unknown uParam0)
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
    sub_1688( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5462(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5036( uParam0 ) );
}

void sub_5544()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_2854() )))
    {
        GET_CHAR_COORDINATES( sub_2854(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_5600(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_5600()
{
    return 301427732;
}

void sub_5733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_5742();
    return sub_5776( uParam0, uVar7, uParam1, uParam4, 9 );
}

int sub_5742()
{
    return 802082487;
}

int sub_5776(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_5910( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_5910(unknown uParam0, unknown uParam1, int iParam2)
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

int sub_7355(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_5600();
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
    sub_5910( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_7910()
{
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U878 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U878, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U878, 75 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U879 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U879, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U879, 65 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U880 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U881 );
    SET_GROUP_FORMATION( sub_8023(), 0 );
    SET_GROUP_FORMATION_SPACING( sub_8023(), 8.00000000 );
    return;
}

void sub_8023()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8120(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_8226()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_8332()
{
    unknown uVar2;
    int iVar3;

    if (NOT l_U1186)
    {
        if (l_U1187)
        {
            GET_GAME_TIMER( ref l_U1190 );
            if ((l_U1190 - l_U1189) > 2000)
            {
                if (g_U39149[8] == 0)
                {
                    PRINT_NOW( "JM6_I1", 7500, 1 );
                }
                l_U1186 = 1;
            }
        }
    }
    switch (l_U1185)
    {
        case 0:
        if (NOT l_U1191)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1954.07200000, -100.12500000, 8.02400000, 100.00000000, 100.00000000, 100.00000000, 0 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63587, 65463, 12, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, 63586, 65458, 7, 1, 0.00000000 );
                ADD_COVER_POINT( -1953.83600000, -78.35070000, 6.20650000, 2, 180.00000000, 0, 0, ref l_U942[0] );
                ADD_COVER_POINT( -1952.43600000, -72.21290000, 10.37090000, 1, 1.17610000, 0, 0, ref l_U942[11] );
                ADD_COVER_POINT( -1955.13100000, -74.23440000, 10.37090000, 0, 0.00000000, 3, 0, ref l_U942[12] );
                CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1952.46600000, -63.25430000, 10.57090000, 90.00000000, 0.00000000, 0.00000000, ref l_U1021[0] );
                ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1021[0], "E1_HouseBed2" );
                sub_8784( 0 );
                sub_8784( 1 );
                sub_8784( 2 );
                SET_CHAR_COORDINATES( l_U456[0]._fU0, -1953.97700000, -75.38310000, 10.37090000 );
                SET_CHAR_HEADING( l_U456[0]._fU0, 277.82070000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseBed3" );
                SET_CHAR_PROOFS( l_U456[0]._fU0, 0, 1, 1, 1, 1 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1947.60000000, -74.60330000, 10.37090000, 2, -2, 0.50000000 );
                TASK_PAUSE( 0, 2000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1954.06000000, -74.95120000, 10.37090000, 2, -2, 0.50000000 );
                TASK_PAUSE( 0, 2000 );
                SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_DEAD( l_U456[4]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[4]._fU0, -1953.95200000, -65.40190000, 10.37090000 );
                    SET_CHAR_HEADING( l_U456[4]._fU0, 185.38380000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[4]._fU0, "E1_HouseHall3" );
                }
                l_U1191 = 1;
                l_U912 = 1;
            }
        }
        if ((sub_13294()) || ((sub_13204()) || ((sub_13003()) || (sub_12599( 0 )))))
        {
            l_U919 = 1;
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
            sub_4446( "E1J6AUD", "E1B6_TERRY", "E1B6_CLAY" );
            if (NOT (IS_CHAR_DEAD( l_U456[4]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U456[4]._fU0, -1953.95200000, -65.40190000, 10.37090000 );
                SET_CHAR_HEADING( l_U456[4]._fU0, 185.38380000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U456[4]._fU0, "E1_HouseHall3" );
            }
            if (DOES_BLIP_EXIST( l_U886 ))
            {
                REMOVE_BLIP( l_U886 );
            }
            if (DOES_BLIP_EXIST( l_U874 ))
            {
                REMOVE_BLIP( l_U874 );
            }
            ADD_BLIP_FOR_CHAR( l_U456[0]._fU0, ref l_U847[0] );
            CLEAR_PRINTS();
            if ((NOT sub_13294()) AND ((NOT sub_13003()) AND (NOT (sub_12599( 0 )))))
            {
                if (l_U914)
                {
                    PRINT_NOW( "JM6_KILLS", 4000, 1 );
                }
                else
                {
                    PRINT_NOW( "JM6_KILLS", 7500, 1 );
                }
            }
            l_U1070 = 0;
            l_U1071 = 0;
            l_U1072 = 0;
            l_U912 = 1;
            l_U915 = 1;
            l_U916 = 1;
            l_U453 = 3;
        }
        if (NOT l_U919)
        {
            if (NOT (IS_CAR_DEAD( l_U872 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U874 )))
                {
                    if (((NOT (IS_CHAR_IN_ANY_CAR( sub_2854() ))) AND (LOCATE_CAR_3D( l_U872, -1954.07200000, -100.12500000, 8.02400000, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (IS_CHAR_IN_CAR( sub_2854(), l_U872 )))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_4837(), 0 )))
                        {
                            if (NOT l_U1187)
                            {
                                l_U1187 = 1;
                            }
                            if ((l_U1192 == 0) || (DOES_BLIP_EXIST( l_U874 )))
                            {
                                CLEAR_THIS_PRINT( "JM6_ONBK" );
                                REMOVE_BLIP( l_U874 );
                                ADD_BLIP_FOR_COORD( -1954.07200000, -100.12500000, 8.02400000, ref l_U886 );
                                SET_ROUTE( l_U886, 1 );
                            }
                            l_U1192 = 1;
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1954.07200000, -100.12500000, 8.02400000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_2854(), ref iVar3 );
                                if ((iVar3 == l_U872) || (iVar3 == nil))
                                {
                                    l_U1185 = 1;
                                }
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U886 ))
                        {
                            REMOVE_BLIP( l_U886 );
                        }
                        if ((DOES_BLIP_EXIST( l_U874 )) || (l_U1192))
                        {
                            if (DOES_BLIP_EXIST( l_U874 ))
                            {
                                REMOVE_BLIP( l_U874 );
                            }
                            CLEAR_PRINTS();
                            PRINT_NOW( "JM6_LOSW", 7500, 1 );
                            l_U1192 = 0;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U886 ))
                    {
                        REMOVE_BLIP( l_U886 );
                        ADD_BLIP_FOR_CAR( l_U872, ref l_U874 );
                        CHANGE_BLIP_COLOUR( l_U874, 3 );
                        if (NOT l_U1188)
                        {
                            PRINT_NOW( "JM6_ONBK", 7500, 1 );
                            l_U1188 = 1;
                        }
                    }
                }
                else if (IS_CHAR_IN_CAR( sub_2854(), l_U872 ))
                {
                    if (DOES_BLIP_EXIST( l_U874 ))
                    {
                        CLEAR_THIS_PRINT( "JM6_ONBK" );
                        REMOVE_BLIP( l_U874 );
                        ADD_BLIP_FOR_COORD( -1954.07200000, -100.12500000, 8.02400000, ref l_U886 );
                        SET_ROUTE( l_U886, 1 );
                    }
                }
            }
        }
        break;
        case 1:
        if (sub_14491())
        {
            l_U1185 = 2;
        }
        break;
    }
    return;
}

void sub_8784(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_8858( 13, ref l_U456[0]._fU0, -1951.75700000, -66.31300000, 10.37090000, 172.00000000 );
        SET_CHAR_COMPONENT_VARIATION( l_U456[0]._fU0, 1, 1, 0 );
        sub_3710( 1, l_U456[0]._fU0, "BRIAN", 0 );
        SET_CHAR_DECISION_MAKER( l_U456[0]._fU0, l_U880 );
        GIVE_WEAPON_TO_CHAR( l_U456[0]._fU0, 7, 3000, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U456[0]._fU0, 24 );
        SET_CHAR_AS_ENEMY( l_U456[0]._fU0, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U456[0]._fU0, 1 );
        SET_CHAR_RELATIONSHIP( l_U456[0]._fU0, 1, 24 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseHall3" );
        SET_CHAR_NEVER_TARGETTED( l_U456[0]._fU0, 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U456[0]._fU0, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U456[0]._fU0, 1 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U456[0]._fU0, 3 );
        break;
        case 1:
        l_U456[1]._fU0 = sub_10402( 24, -1953.45400000, -66.60160000, 6.20650000, 0.00000000, 7, "E1_HouseKitch", 0, 1 );
        l_U456[1]._fU76 = 22;
        l_U456[1]._fU64 = {-1953.76300000, -72.03820000, 6.20650000};
        l_U456[1]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[1]._fU0, 220 );
        sub_3710( 6, l_U456[1]._fU0, "LOST_3", 0 );
        l_U456[2]._fU0 = sub_10402( 24, -1947.47900000, -76.26370000, 6.20650000, 17.33620000, 13, "E1_HouseLiving", 0, 1 );
        l_U456[2]._fU76 = 16;
        l_U456[2]._fU64 = {-1954.18400000, -77.53489000, 6.20650000};
        l_U456[2]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[2]._fU0, 320 );
        l_U456[6]._fU0 = sub_10402( 24, -1947.10800000, -75.45580000, 6.20650000, 17.33620000, 14, "E1_HouseLiving", 0, 1 );
        l_U456[6]._fU76 = 17;
        l_U456[6]._fU64 = {-1951.66900000, -74.13650000, 6.20650000};
        l_U456[6]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[6]._fU0, 320 );
        l_U456[7]._fU0 = sub_10402( 24, -1947.73900000, -74.70040000, 6.22680000, 17.33620000, 13, "E1_HouseLiving", 0, 1 );
        l_U456[7]._fU76 = 18;
        l_U456[7]._fU64 = {-1948.78800000, -75.48470000, 6.20650000};
        l_U456[7]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[7]._fU0, 220 );
        l_U456[8]._fU0 = sub_10402( 24, -1946.07600000, -71.21470000, 6.20650000, 17.33620000, 26, "E1_HouseLiving", 0, 1 );
        l_U456[8]._fU76 = 19;
        l_U456[8]._fU64 = {-1946.07600000, -71.21470000, 6.20650000};
        l_U456[8]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[8]._fU0, 320 );
        l_U456[9]._fU0 = sub_10402( 24, -1946.82300000, -67.18219000, 6.20650000, 17.33620000, 13, "E1_HouseLiving", 0, 1 );
        l_U456[9]._fU76 = 20;
        l_U456[9]._fU64 = {-1946.82300000, -67.18219000, 6.20650000};
        l_U456[9]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[9]._fU0, 220 );
        break;
        case 2:
        l_U456[3]._fU0 = sub_10402( 24, -1955.19100000, -74.89580000, 10.37090000, 334.26020000, 13, "E1_HouseBed3", 0, 0 );
        l_U456[3]._fU76 = 7;
        l_U456[3]._fU96 = l_U878;
        SET_CHAR_HEALTH( l_U456[3]._fU0, 220 );
        l_U456[4]._fU0 = sub_10402( 24, -1952.26100000, -67.20790000, 10.37090000, 185.38380000, 26, "E1_HouseHall3", 0, 1 );
        l_U456[4]._fU76 = 9;
        l_U456[4]._fU96 = l_U878;
        l_U456[4]._fU32 = 1;
        l_U456[4]._fU36._fU0 = 2;
        l_U456[4]._fU36._fU16 = {0.00000000, 0.00000000, 7.21150000};
        l_U456[4]._fU36._fU4 = {-0.03040000, -0.84700000, -0.53070000};
        l_U456[5]._fU0 = sub_10402( 24, -1949.05300000, -73.46400000, 14.58340000, 304.06540000, 7, "E1_HouseHall5", 1, 1 );
        l_U456[5]._fU76 = 10;
        l_U456[5]._fU96 = l_U878;
        l_U456[5]._fU64 = {-1946.59600000, -73.04230000, 14.58340000};
        l_U456[5]._fU28 = 1;
        l_U456[5]._fU32 = 1;
        l_U456[5]._fU36._fU0 = 1;
        l_U456[5]._fU36._fU16 = {0.00000000, 0.00000000, 10.37090000};
        l_U456[10]._fU0 = sub_10402( 24, -1954.19800000, -69.80210000, 10.37090000, 304.06540000, 12, "E1_HouseBed3", 0, 1 );
        l_U456[10]._fU76 = 3;
        l_U456[10]._fU96 = l_U878;
        l_U456[10]._fU64 = {-1953.50000000, -75.40030000, 10.37090000};
        SET_CHAR_HEALTH( l_U456[10]._fU0, 320 );
        l_U456[11]._fU0 = sub_10402( 24, -1952.48800000, -72.34610000, 10.37090000, 304.06540000, 13, "E1_HouseBed3", 0, 1 );
        l_U456[11]._fU76 = 8;
        l_U456[11]._fU96 = l_U878;
        l_U456[11]._fU64 = {-1952.48800000, -72.34610000, 10.37090000};
        SET_CHAR_HEALTH( l_U456[11]._fU0, 320 );
        break;
    }
    return;
}

void sub_8858(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_8869( uParam0 ), sub_5036( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_8976( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9082( uParam0, (uParam1^) );
    return;
}

int sub_8869(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_8976(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_9082(unknown uParam0, unknown uParam1)
{
    sub_9094( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_9094(unknown uParam0, int iParam1)
{
    sub_9105( uParam0 );
    if (iParam1 == 22)
    {
        sub_9205( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_9864( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_9105(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_9205(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((g_U15728[19]) AND ((uParam0^) == sub_2854()))
        {
            if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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

void sub_9864(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_9205( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9205( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_10402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7, boolean bParam8)
{
    unknown Result;

    CREATE_CHAR( 26, l_U864, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam4 );
    SET_CHAR_DECISION_MAKER( Result, l_U880 );
    GIVE_WEAPON_TO_CHAR( Result, uParam5, 3000, bParam8 );
    if (bParam8)
    {
        SET_CURRENT_CHAR_WEAPON( Result, uParam5, bParam8 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 24 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    if (bParam7)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    if (NOT (COMPARE_STRING( uParam6, "" )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam6 );
    }
    return Result;
}

int sub_12599(unknown uParam0)
{
    int iVar3;

    switch (uParam0)
    {
        case 0:
        if (NOT l_U1069)
        {
            if (NOT l_U1074)
            {
                GET_INTERIOR_FROM_CHAR( sub_2854(), ref iVar3 );
                if (iVar3 == nil)
                {
                    if ((IS_EXPLOSION_IN_AREA( -1, -1957.29100000, -79.99788000, 8.99375200, -1943.58600000, -64.84035000, 15.20460000 )) || (IS_EXPLOSION_IN_AREA( -1, -1951.52900000, -77.94430000, 9.42414400, -1945.67400000, -72.67003000, 13.99191000 )))
                    {
                        START_PTFX( "smoke_roman11", -1947.67500000, -76.32000000, 10.37090000, 0.00000000, 0.00000000, 0.00000000, 0.80000000 );
                        PLAY_SOUND_FROM_POSITION( l_U908, "J6_KILL_BRIAN_AT_SAFEHOUSE_FIRE", -1947.67500000, -76.32000000, 10.37090000 );
                        l_U917 = 1;
                        l_U1069 = 1;
                    }
                }
            }
        }
        return l_U1069;
        break;
        case 1:
        if (NOT l_U1073)
        {
            if (IS_EXPLOSION_IN_AREA( -1, -1955.49900000, -77.86519000, 5.00000000, -1951.86200000, -67.74050000, 10.17490000 ))
            {
                l_U1073 = 1;
            }
        }
        return l_U1073;
        break;
    }
    return 0;
}

void sub_13003()
{
    int iVar2;

    if (NOT l_U1069)
    {
        if (NOT l_U1074)
        {
            GET_INTERIOR_FROM_CHAR( sub_2854(), ref iVar2 );
            if (iVar2 == nil)
            {
                if ((IS_SNIPER_BULLET_IN_AREA( -1947.90200000, -80.45440000, 11.17990000, -1946.73200000, -78.10230000, 13.80600000 )) || (IS_BULLET_IN_AREA( -1947.39500000, -79.20959000, 12.37882000, 1.00000000, 1 )))
                {
                    ADD_COVER_POINT( -1947.39900000, -78.75100000, 10.37090000, 2, 180.00000000, 0, 0, ref l_U942[10] );
                    l_U1074 = 1;
                    GET_GAME_TIMER( ref l_U1076 );
                }
            }
        }
    }
    return l_U1074;
}

void sub_13204()
{
    if (NOT l_U1082)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.77300000, -77.68200000, 7.21150000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1082 = 1;
        }
    }
    return l_U1082;
}

void sub_13294()
{
    if (NOT l_U1079)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1947.44500000, -78.60970000, 12.07600000, 1.00000000, 1.00000000, 1.50000000, 0 ))
        {
            l_U1079 = 1;
        }
    }
    return l_U1079;
}

int sub_14491()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    vector vVar5;
    float fVar8;
    float fVar9;
    float fVar10;

    if (NOT l_U1160)
    {
        if (NOT sub_14511())
        {
            l_U1160 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1161) AND (l_U1156 > 1)))
    {
        if (sub_14511())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_14726( 0 );
            l_U1161 = 1;
            l_U1156 = 8;
        }
    }
    sub_14908( l_U1156, "j6_arrive_cut_prog...." );
    switch (l_U1156)
    {
        case 0:
        if (sub_15019( 1, 1 ))
        {
            sub_15466( "Can start..." );
            if (sub_4613())
            {
                if (l_U914)
                {
                    if (sub_15503())
                    {
                        sub_15594( 1 );
                    }
                }
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                LOAD_SCENE( -1944.46900000, -75.04560000, 5.62710000 );
                sub_2929( 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                if (l_U914)
                {
                    if (NOT (IS_CAR_DEAD( g_U11087[0] )))
                    {
                        SET_CAR_VISIBLE( g_U11087[0], 0 );
                        SET_CAR_COORDINATES( g_U11087[0], -1961.11800000, -99.97400000, 5.61880000 );
                        SET_CAR_HEADING( g_U11087[0], 134.13080000 );
                        SET_CAR_ON_GROUND_PROPERLY( g_U11087[0] );
                    }
                    if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                    {
                        SET_CAR_VISIBLE( g_U11087[1], 0 );
                        SET_CAR_COORDINATES( g_U11087[1], -1963.47200000, -99.61230000, 5.63340000 );
                        SET_CAR_HEADING( g_U11087[1], 175.04010000 );
                    }
                    if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
                    {
                        SET_CHAR_VISIBLE( g_U11081[0], 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
                    {
                        SET_CHAR_VISIBLE( g_U11081[1], 0 );
                    }
                }
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                sub_15466( "Trying to hide......" );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2854() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2854() );
                }
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 )))
                {
                    REQUEST_CAR_RECORDING( 470 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 )))
                    {
                        WAIT( 0 );
                    }
                }
                REMOVE_BLIP( l_U886 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63587, 65463, 12, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, 63586, 65458, 7, 1, 0.00000000 );
                CLEAR_WANTED_LEVEL( sub_4837() );
                CLEAR_AREA_OF_COPS( -1954.07200000, -100.12500000, 8.02400000, 400.00000000 );
                CLEAR_AREA_OF_CARS( -1952.49300000, -58.14900000, 5.39180000, 50.00000000 );
                SET_CREATE_RANDOM_COPS( 0 );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                BEGIN_CAM_COMMANDS( ref l_U979 );
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                SET_USE_HIGHDOF( 1 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                DISPLAY_RADAR( 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
                if (NOT (IS_CAR_DEAD( l_U872 )))
                {
                    if (IS_CHAR_IN_CAR( sub_2854(), l_U872 ))
                    {
                        GET_CHAR_HEADING( sub_2854(), ref fVar9 );
                        if ((fVar9 >= 180.00000000) AND (fVar9 < 360.00000000))
                        {
                            vVar5 = {-1953.06300000, -101.40200000, 5.57940000};
                            fVar8 = 266.63320000;
                            l_U1166 = {-1953.09600000, -104.32840000, 6.19258700};
                            l_U1169 = {9.57944200, 0.00000000, -5.54359800};
                            l_U1172 = {-1953.44900000, -102.46200000, 6.77764200};
                            l_U1175 = {-0.53625500, -0.00000000, -28.30083000};
                            l_U1178 = {-1953.44300000, -102.44840000, 8.41756800};
                        }
                        else
                        {
                            vVar5 = {-1952.28500000, -101.19170000, 5.58970000};
                            fVar8 = 82.59350000;
                            l_U1166 = {-1953.47400000, -104.67050000, 6.05306000};
                            l_U1169 = {8.24659100, -0.00000000, -11.60499000};
                            l_U1172 = {-1953.05000000, -102.11530000, 6.72933200};
                            l_U1175 = {2.87822100, -0.00000000, -26.47614000};
                            l_U1178 = {-1953.07200000, -102.15860000, 7.69285900};
                        }
                    }
                    else
                    {
                        l_U1166 = {-1952.63100000, -103.71090000, 6.61295400};
                        l_U1169 = {9.37966800, 0.00000000, -10.39750000};
                        l_U1172 = {-1952.73800000, -103.19790000, 6.81563300};
                        l_U1175 = {1.69395100, -0.00000000, -19.78535000};
                        l_U1178 = {-1952.74500000, -103.21460000, 7.41500000};
                    }
                    if (IS_CHAR_IN_CAR( sub_2854(), l_U872 ))
                    {
                        SET_CAR_COORDINATES( l_U872, vVar5.x, vVar5.y, vVar5.z );
                        SET_CAR_HEADING( l_U872, fVar8 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U872 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_2854(), -1952.72400000, -101.52660000, 5.57680000 );
                        SET_CHAR_HEADING( sub_2854(), 329.48200000 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[0]._fU0 );
                    SET_CHAR_COORDINATES( l_U456[0]._fU0, -1947.51900000, -75.57020000, 10.37090000 );
                    SET_CHAR_HEADING( l_U456[0]._fU0, 176.58900000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseBed1" );
                    TASK_USE_MOBILE_PHONE( l_U456[0]._fU0, 1 );
                }
                CREATE_CAM( 14, ref l_U980[0] );
                CREATE_CAM( 14, ref l_U980[1] );
                CREATE_CAM( 3, ref l_U980[2] );
                CREATE_CAM( 14, ref l_U980[3] );
                CREATE_CAM( 14, ref l_U980[4] );
                CREATE_CAM( 3, ref l_U980[5] );
                CREATE_CAM( 14, ref l_U980[6] );
                CREATE_CAM( 14, ref l_U980[7] );
                CREATE_CAM( 3, ref l_U980[8] );
                CREATE_CAM( 14, ref l_U980[9] );
                CREATE_CAM( 14, ref l_U980[10] );
                CREATE_CAM( 3, ref l_U980[11] );
                CREATE_CAM( 14, ref l_U980[12] );
                CREATE_CAM( 14, ref l_U980[13] );
                CREATE_CAM( 3, ref l_U980[14] );
                SET_CAM_POS( l_U980[0], l_U1166._fU0, l_U1166._fU4, l_U1166._fU8 );
                SET_CAM_ROT( l_U980[0], l_U1169._fU0, l_U1169._fU4, l_U1169._fU8 );
                SET_CAM_FOV( l_U980[0], 26.70005000 );
                SET_CAM_ACTIVE( l_U980[0], 1 );
                SET_CAM_PROPAGATE( l_U980[0], 1 );
                SET_CAM_POS( l_U980[1], l_U1166._fU0, l_U1166._fU4, l_U1166._fU8 );
                SET_CAM_ROT( l_U980[1], l_U1169._fU0, l_U1169._fU4, l_U1169._fU8 );
                SET_CAM_FOV( l_U980[1], 24.00005000 );
                SET_CAM_ACTIVE( l_U980[1], 1 );
                SET_CAM_PROPAGATE( l_U980[1], 0 );
                SET_CAM_POS( l_U980[3], -1946.51700000, -76.68729000, 12.47233000 );
                SET_CAM_ROT( l_U980[3], -12.91443000, -0.00000000, 157.93260000 );
                SET_CAM_FOV( l_U980[3], 20.10006000 );
                SET_CAM_ACTIVE( l_U980[3], 0 );
                SET_CAM_PROPAGATE( l_U980[3], 0 );
                SET_CAM_FAR_CLIP( l_U980[3], 100.00000000 );
                SET_CAM_POS( l_U980[4], -1946.51700000, -76.68729000, 12.47233000 );
                SET_CAM_ROT( l_U980[4], -12.91443000, 0.00000000, 157.93260000 );
                SET_CAM_FOV( l_U980[4], 18.30007000 );
                SET_CAM_ACTIVE( l_U980[4], 1 );
                SET_CAM_PROPAGATE( l_U980[4], 0 );
                SET_CAM_FAR_CLIP( l_U980[4], 100.00000000 );
                SET_CAM_ACTIVE( l_U980[5], 0 );
                SET_CAM_PROPAGATE( l_U980[5], 0 );
                SET_CAM_POS( l_U980[6], -1932.94100000, -48.55362000, 12.91999000 );
                SET_CAM_ROT( l_U980[6], -9.78813000, -0.00000000, 139.24520000 );
                SET_CAM_FOV( l_U980[6], 45.00000000 );
                SET_CAM_ACTIVE( l_U980[6], 0 );
                SET_CAM_PROPAGATE( l_U980[6], 0 );
                SET_CAM_POS( l_U980[7], -1932.94100000, -48.55362000, 12.91999000 );
                SET_CAM_ROT( l_U980[7], -9.78813100, 0.00000000, 131.10910000 );
                SET_CAM_FOV( l_U980[7], 45.00000000 );
                SET_CAM_ACTIVE( l_U980[7], 0 );
                SET_CAM_PROPAGATE( l_U980[7], 0 );
                SET_CAM_POS( l_U980[9], -1944.07800000, -53.96319000, 8.73707900 );
                SET_CAM_ROT( l_U980[9], -9.38949900, 0.00000000, 167.07950000 );
                SET_CAM_FOV( l_U980[9], 43.50002000 );
                SET_CAM_ACTIVE( l_U980[9], 0 );
                SET_CAM_PROPAGATE( l_U980[9], 0 );
                SET_CAM_POS( l_U980[10], -1944.07800000, -53.96319000, 8.73707900 );
                SET_CAM_ROT( l_U980[10], -9.38949800, -0.00000000, 139.04170000 );
                SET_CAM_FOV( l_U980[10], 43.50002000 );
                SET_CAM_ACTIVE( l_U980[10], 0 );
                SET_CAM_PROPAGATE( l_U980[10], 0 );
                SET_CAM_POS( l_U980[12], -1956.75900000, -57.44210000, 10.70858000 );
                SET_CAM_ROT( l_U980[12], -38.16298000, 0.00000100, -107.13530000 );
                SET_CAM_FOV( l_U980[12], 40.80001000 );
                SET_CAM_ACTIVE( l_U980[12], 0 );
                SET_CAM_PROPAGATE( l_U980[12], 0 );
                SET_CAM_POS( l_U980[13], -1956.75900000, -57.44210000, 10.70858000 );
                SET_CAM_ROT( l_U980[13], -38.16298000, -0.00000100, -126.04310000 );
                SET_CAM_FOV( l_U980[13], 40.80001000 );
                SET_CAM_ACTIVE( l_U980[13], 0 );
                SET_CAM_PROPAGATE( l_U980[13], 0 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_LOOK_AT_COORD( 0, -1947.49500000, -79.21405000, 12.55598000, -2, 128 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_2854(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_DEAD( l_U456[4]._fU0 )))
                {
                    ;
                }
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                DO_SCREEN_FADE_IN( 500 );
                l_U1156 = 1;
            }
            else
            {
                sub_15466( "Trying to hide...." );
            }
        }
        else
        {
            sub_15466( "Trying to start...." );
        }
        break;
        case 1:
        if (IS_SCREEN_FADED_IN())
        {
            SET_CAM_ACTIVE( l_U980[0], 0 );
            SET_CAM_PROPAGATE( l_U980[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U980[2], l_U980[0], l_U980[1], 10000, 0 );
            SET_CAM_ACTIVE( l_U980[2], 1 );
            SET_CAM_PROPAGATE( l_U980[2], 1 );
            PRINT_NOW( "JM6_CUT1", 7500, 1 );
            GET_GAME_TIMER( ref l_U1157 );
            l_U1156 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (NOT l_U1162)
            {
                GET_SCRIPT_TASK_STATUS( l_U456[0]._fU0, 53, ref iVar3 );
                if (iVar3 == 1)
                {
                    ADD_FOLLOW_NAVMESH_TO_PHONE_TASK( l_U456[0]._fU0, -1947.43300000, -78.80700000, 10.37090000 );
                    l_U1162 = 1;
                }
            }
            else if (NOT l_U1163)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U456[0]._fU0, -1947.43300000, -78.80700000, 10.37090000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                {
                    GET_GAME_TIMER( ref l_U1157 );
                    l_U1163 = 1;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U1158 );
                if ((l_U1158 - l_U1157) > 100)
                {
                    l_U1156 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT l_U1181)
        {
            if (NOT l_U1182)
            {
                if (sub_20896( l_U456[0]._fU0, 1, 0 ))
                {
                    GET_GAME_TIMER( ref l_U1183 );
                    l_U1182 = 1;
                }
            }
            else if (sub_21042( l_U1183, 1500 ))
            {
                l_U1181 = 1;
            }
        }
        GET_GAME_TIMER( ref l_U1158 );
        if ((l_U1158 - l_U1157) > 3000)
        {
            CLEAR_PRINTS();
            sub_21162( "E1J6_BCALL", ref l_U936, 6, 1 );
            SET_CAM_ACTIVE( l_U980[3], 1 );
            SET_CAM_PROPAGATE( l_U980[3], 1 );
            SET_CAM_ACTIVE( l_U980[0], 0 );
            SET_CAM_PROPAGATE( l_U980[0], 0 );
            if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseBed1" );
            }
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U1159 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U1159, "E1_HouseBed1" );
            GET_GAME_TIMER( ref l_U1157 );
            l_U1156 = 4;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U1158 );
        if (NOT (IS_CAM_ACTIVE( l_U980[5] )))
        {
            SET_CAM_ACTIVE( l_U980[3], 0 );
            SET_CAM_PROPAGATE( l_U980[3], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U980[5], l_U980[3], l_U980[4], 10000, 0 );
            SET_CAM_ACTIVE( l_U980[5], 1 );
            SET_CAM_PROPAGATE( l_U980[5], 1 );
            TASK_CLEAR_LOOK_AT( sub_2854() );
            CREATE_CAR( l_U863, -1932.79800000, -66.09870000, 5.62160000, ref l_U1165, 1 );
            SET_CAR_HEADING( l_U1165, 188.31360000 );
            CHANGE_CAR_COLOUR( l_U1165, 98, 48 );
            SET_EXTRA_CAR_COLOURS( l_U1165, 0, 0 );
            l_U1164 = sub_10402( 24, -1952.08800000, -57.07520000, 5.40380000, 163.21060000, 7, "", 0, 0 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_LOOK_AT_CHAR( 0, l_U1164, -2, 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( sub_2854(), uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
        }
        if ((l_U1158 - l_U1157) > 1500)
        {
            if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
            {
                ADD_FOLLOW_NAVMESH_TO_PHONE_TASK( l_U456[0]._fU0, -1949.33400000, -74.84880000, 10.37090000 );
                GET_GAME_TIMER( ref l_U1157 );
                l_U1156 = 5;
            }
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U1158 );
        if ((NOT (sub_22767( l_U936 ))) || ((l_U1158 - l_U1157) > 7000))
        {
            sub_22941( ref l_U936, 0 );
            if (NOT (IS_CAR_DEAD( l_U1165 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U1165, 470 );
                SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U1165 );
                SET_CAR_COORDINATES( l_U1165, -1949.99200000, -57.63490000, 5.46680000 );
                SET_CAR_HEADING( l_U1165, 269.27920000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U1165 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1164 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1953.28400000, -63.54660000, 6.20650000, 2, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U1164, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            GET_GAME_TIMER( ref l_U1157 );
            l_U1156 = 6;
        }
        break;
        case 6:
        if (NOT (IS_CHAR_DEAD( l_U1164 )))
        {
            if ((sub_21042( l_U1157, 10000 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1164, -1952.49300000, -58.52110000, 6.39700000, 3.00000000, 0.80000000, 2.00000000, 0 )))
            {
                SET_CAM_ACTIVE( l_U980[6], 1 );
                SET_CAM_PROPAGATE( l_U980[6], 1 );
                SET_CAM_ACTIVE( l_U980[5], 0 );
                SET_CAM_PROPAGATE( l_U980[5], 0 );
                if (NOT l_U1184)
                {
                    GET_GAME_VIEWPORT_ID( ref uVar4 );
                    CLEAR_ROOM_FOR_VIEWPORT( uVar4 );
                    l_U1184 = 1;
                }
                GET_GAME_TIMER( ref l_U1157 );
                l_U1156 = 7;
            }
        }
        break;
        case 7:
        if (NOT (IS_CAM_ACTIVE( l_U980[6] )))
        {
            SET_CAM_ACTIVE( l_U980[6], 1 );
            SET_CAM_PROPAGATE( l_U980[6], 1 );
            SET_CAM_ACTIVE( l_U980[5], 0 );
            SET_CAM_PROPAGATE( l_U980[5], 0 );
        }
        if (NOT l_U1184)
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            CLEAR_ROOM_FOR_VIEWPORT( uVar4 );
            l_U1184 = 1;
        }
        GET_GAME_TIMER( ref l_U1158 );
        if (NOT (IS_CAR_DEAD( l_U1165 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1164 )))
            {
                if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1165 ))) || ((l_U1158 - l_U1157) > 20000))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
                    GET_GAME_TIMER( ref l_U1157 );
                    l_U1156 = 8;
                }
            }
        }
        break;
        case 8:
        GET_GAME_TIMER( ref l_U1158 );
        if ((l_U1161) || ((l_U1158 - l_U1157) > 4500))
        {
            if (l_U914)
            {
                if (NOT (IS_CAR_DEAD( g_U11087[0] )))
                {
                    SET_CAR_VISIBLE( g_U11087[0], 1 );
                }
                if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                {
                    SET_CAR_VISIBLE( g_U11087[1], 1 );
                }
                if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
                {
                    SET_CHAR_VISIBLE( g_U11081[0], 1 );
                }
                if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
                {
                    SET_CHAR_VISIBLE( g_U11081[1], 1 );
                }
            }
            SET_CAM_ACTIVE( l_U980[2], 0 );
            SET_CAM_PROPAGATE( l_U980[2], 0 );
            SET_CAM_ACTIVE( l_U980[1], 0 );
            SET_CAM_PROPAGATE( l_U980[1], 0 );
            SET_CAM_ACTIVE( l_U980[0], 0 );
            SET_CAM_PROPAGATE( l_U980[0], 0 );
            SET_CAM_ACTIVE( l_U980[5], 0 );
            SET_CAM_PROPAGATE( l_U980[5], 0 );
            SET_CAM_ACTIVE( l_U980[4], 0 );
            SET_CAM_PROPAGATE( l_U980[4], 0 );
            SET_CAM_ACTIVE( l_U980[3], 0 );
            SET_CAM_PROPAGATE( l_U980[3], 0 );
            SET_CAM_ACTIVE( l_U980[8], 0 );
            SET_CAM_PROPAGATE( l_U980[8], 0 );
            SET_CAM_ACTIVE( l_U980[7], 0 );
            SET_CAM_PROPAGATE( l_U980[7], 0 );
            SET_CAM_ACTIVE( l_U980[6], 0 );
            SET_CAM_PROPAGATE( l_U980[6], 0 );
            SET_CAM_ACTIVE( l_U980[11], 0 );
            SET_CAM_PROPAGATE( l_U980[11], 0 );
            SET_CAM_ACTIVE( l_U980[10], 0 );
            SET_CAM_PROPAGATE( l_U980[10], 0 );
            SET_CAM_ACTIVE( l_U980[9], 0 );
            SET_CAM_PROPAGATE( l_U980[9], 0 );
            SET_CAM_ACTIVE( l_U980[14], 0 );
            SET_CAM_PROPAGATE( l_U980[14], 0 );
            SET_CAM_ACTIVE( l_U980[13], 0 );
            SET_CAM_PROPAGATE( l_U980[13], 0 );
            SET_CAM_ACTIVE( l_U980[12], 0 );
            SET_CAM_PROPAGATE( l_U980[12], 0 );
            DESTROY_CAM( l_U980[2] );
            DESTROY_CAM( l_U980[1] );
            DESTROY_CAM( l_U980[0] );
            DESTROY_CAM( l_U980[5] );
            DESTROY_CAM( l_U980[4] );
            DESTROY_CAM( l_U980[3] );
            DESTROY_CAM( l_U980[8] );
            DESTROY_CAM( l_U980[7] );
            DESTROY_CAM( l_U980[6] );
            DESTROY_CAM( l_U980[11] );
            DESTROY_CAM( l_U980[10] );
            DESTROY_CAM( l_U980[9] );
            DESTROY_CAM( l_U980[14] );
            DESTROY_CAM( l_U980[13] );
            DESTROY_CAM( l_U980[12] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            sub_8226();
            TASK_CLEAR_LOOK_AT( sub_2854() );
            if (DOES_CHAR_EXIST( l_U1164 ))
            {
                DELETE_CHAR( ref l_U1164 );
            }
            if (DOES_VEHICLE_EXIST( l_U1165 ))
            {
                DELETE_CAR( ref l_U1165 );
            }
            CREATE_CAR( l_U863, -1949.82300000, -56.07490000, 5.47160000, ref l_U873, 1 );
            SET_CAR_HEADING( l_U873, 267.51280000 );
            CHANGE_CAR_COLOUR( l_U873, 98, 48 );
            SET_EXTRA_CAR_COLOURS( l_U873, 0, 0 );
            if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[0]._fU0 );
                SET_CHAR_COORDINATES( l_U456[0]._fU0, -1953.97700000, -75.38310000, 10.37090000 );
                SET_CHAR_HEADING( l_U456[0]._fU0, 277.82070000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseBed3" );
                SET_CHAR_PROOFS( l_U456[0]._fU0, 0, 1, 1, 1, 1 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1947.60000000, -74.60330000, 10.37090000, 2, -2, 0.50000000 );
                TASK_PAUSE( 0, 2000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1954.06000000, -74.95120000, 10.37090000, 2, -2, 0.50000000 );
                TASK_PAUSE( 0, 2000 );
                SET_SEQUENCE_TO_REPEAT( uVar2, 1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            if (NOT (IS_CHAR_DEAD( l_U456[4]._fU0 )))
            {
                SET_CHAR_COORDINATES( l_U456[4]._fU0, -1953.95200000, -65.40190000, 10.37090000 );
                SET_CHAR_HEADING( l_U456[4]._fU0, 185.38380000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U456[4]._fU0, "E1_HouseHall3" );
            }
            ADD_BLIP_FOR_CHAR( l_U456[0]._fU0, ref l_U847[0] );
            if (l_U914)
            {
                PRINT_NOW( "JM6_KILLS", 3000, 1 );
            }
            else
            {
                PRINT_NOW( "JM6_KILLS", 7500, 1 );
            }
            if (l_U1161)
            {
                INCREMENT_INT_STAT( 372, 1 );
                DO_SCREEN_FADE_IN( 500 );
            }
            else
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_4837(), 1 );
            END_CAM_COMMANDS( ref l_U979 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( -2168.91800000, -97.50701000, 0.00000000, -1936.08800000, -89.17440000, 100.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 1, 0.00000000 );
            sub_2929( 1 );
            SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            l_U1070 = 0;
            l_U1071 = 0;
            l_U1072 = 0;
            l_U912 = 1;
            l_U915 = 1;
            l_U916 = 1;
            l_U453 = 3;
            g_U39149[8] = 1;
            WAIT( 0 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
            l_U920 = 1;
            if ((g_U38774 == 4) || (g_U38774 == 1))
            {
                sub_25626();
            }
            sub_4446( "E1J6AUD", "E1B6_TERRY2", "E1B6_CLAY2" );
            l_U1156 = 9;
        }
        break;
        case 9: break;
    }
    if (l_U1181)
    {
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            GET_CHAR_HEADING( l_U456[0]._fU0, ref fVar10 );
            if ((fVar10 > 100.00000000) || (fVar10 < 8.50000000))
            {
                fVar10 += 10.00000000;
                SET_CHAR_HEADING( l_U456[0]._fU0, fVar10 );
            }
            else
            {
                l_U1181 = 0;
            }
        }
    }
    return 0;
}

int sub_14511()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14726(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 8) AND (g_U8944 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_14908(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_15019(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2854(), ref uVar6 );
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
    if (sub_15143( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_15143(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2854(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2854(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2854()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2854() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2854() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4837() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4837() )))
    {
        return 0;
    }
    return 1;
}

void sub_15466(unknown uParam0)
{
    return;
}

void sub_15503()
{
    if (NOT sub_15512())
    {
        return 0;
    }
    return g_U11090;
}

int sub_15512()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_15594(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_15626( g_U11081[I], uParam0 );
    }
    return;
}

void sub_15626(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_15512())
        {
            if (NOT sub_15503())
            {
                sub_15663();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_15792( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_4837() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_16137( ref g_U11028[iVar5], sub_2854() );
                if (g_U11090)
                {
                    sub_17164( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

void sub_15663()
{
    g_U11090 = 1;
    return;
}

void sub_15792(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_15857( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_15857(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_16137(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_16233( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_2854()) AND (iParam0->_fU8 == sub_2854()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[1]) || (g_U11197 == g_U11081[0]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[1]) || (g_U11198 == g_U11081[0]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if (((iParam0->_fU36 != 1) || (iParam0->_fU8 != iParam1)) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_16718( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_2854())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_16833( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_16833( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_16833( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_16833( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_16833( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_16233(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_16257( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_16257(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_16718(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_16833(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_2854())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_17164(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam1) || (iParam0->_fU88);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

int sub_20896(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_21042(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_21162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21185( uParam0, ref l_U110._fU0, uParam1, uParam2, uParam3 );
}

void sub_21185(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_21239( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21239(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_21261( iParam1 )))
    {
        return 0;
    }
    l_U110._fU384 = 0;
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
    sub_21953( ref g_U8947, ref l_U110 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_21261(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_21338( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_21338( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_21338( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_21338(unknown uParam0)
{
    return;
}

void sub_21953(int iParam0, int iParam1)
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

int sub_22767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_21338( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_21338( "\n speech is not playing" );
    }
    return 0;
}

void sub_22941(int iParam0, unknown uParam1)
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

void sub_25626()
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

    if (NOT sub_15512())
    {
        array(ref uVar4._fU0._fU0, 3);
        ref uVar4._fU0;
        ref uVar4;
        switch (g_U11134)
        {
            default:
              case 0:
            iVar2 = 1;
            iVar3 = 15;
            break;
            case 1:
            iVar2 = 1;
            iVar3 = 16;
            break;
            case 2:
            iVar2 = 1;
            iVar3 = 17;
            break;
            case 3:
            iVar2 = 1;
            iVar3 = 18;
            break;
        }
        g_U11134++;
        if (g_U11134 > 3)
        {
            g_U11134 = 0;
        }
        sub_25787( iVar2, iVar3, 16383, 16383, ref uVar4 );
        sub_26131( ref uVar4, 1 );
        sub_26159( ref uVar4, 0 );
        sub_26186( ref uVar4 );
    }
    return;
}

void sub_25787(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_25809( uParam0, 0, iParam4 + 0 );
    sub_25809( uParam1, 1, iParam4 + 0 );
    sub_25809( uParam2, 2, iParam4 + 0 );
    sub_25809( uParam3, 3, iParam4 + 0 );
    sub_25809( 0, 4, iParam4 + 0 );
    sub_25809( 1, 5, iParam4 + 0 );
    sub_25809( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_25809(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_26131(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_26159(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_26186(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_26256())
        {
            sub_2157( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_26383( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2157( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1871( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_1871( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_26256()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1871( 1, g_U572[I] )) != 0))
        {
            sub_2157( I );
            return 1;
        }
    }
    return 0;
}

int sub_26383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_26448( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_26448(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1871( 0, uParam0 );
        if (iVar14 == (sub_1871( 0, uParam6 )))
        {
            iVar15 = sub_1871( 3, uParam0 );
            if (iVar15 == (sub_1871( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_27181()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    switch (l_U1112)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if ((sub_13294()) || ((sub_12599( 1 )) || ((sub_13003()) || (sub_12599( 0 )))))
            {
                GET_INTERIOR_FROM_CHAR( sub_2854(), ref iVar3 );
                l_U1064 = 1;
                if ((sub_13294()) || (iVar3 == nil))
                {
                    if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                    {
                        GET_GAME_TIMER( ref l_U1141 );
                        l_U1119 = 1;
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        if (l_U455)
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1952.44700000, -58.20670000, 5.39480000, 2, -2, 0.50000000 );
                        }
                        else
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1952.44700000, -58.20670000, 5.39480000, 3, -2, 0.50000000 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1112 = 1;
                    }
                }
            }
            if (sub_13003())
            {
                ;
            }
            if (sub_27534())
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1948.00200000, -75.42540000, 10.37090000, 3, -2, 0.50000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2854() );
                TASK_PLAY_ANIM( 0, "plead", "missjim_6", 1.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                SET_CHAR_PROOFS( l_U456[0]._fU0, 0, 0, 0, 0, 0 );
                l_U1064 = 1;
                l_U1112 = 4;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (sub_20896( l_U456[0]._fU0, 1, 0 ))
            {
                if (l_U1134)
                {
                    l_U1134 = 0;
                }
                SET_CHAR_PROOFS( l_U456[0]._fU0, 0, 0, 0, 0, 0 );
                if (sub_28025())
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U873, -1 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1112 = 2;
                }
                else if (NOT l_U1117)
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2854(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1124 = 1;
                    l_U1112 = 6;
                }
                else if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
                {
                    if (sub_20896( l_U456[0]._fU0, 1, 0 ))
                    {
                        sub_28481();
                    }
                }
                else
                {
                    SCRIPT_ASSERT( "Brian killed after he was let go!" );
                    sub_28481();
                };;;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (sub_28025())
            {
                if (NOT (IS_CAR_DEAD( l_U873 )))
                {
                    if (IS_CHAR_IN_CAR( l_U456[0]._fU0, l_U873 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U873, -1916.60500000, -70.92820000, 5.74820000, 15.00000000, 0, l_U863, 2, 4.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        SET_CAR_DISTANCE_AHEAD_MULTIPLIER( l_U873, 0.25000000 );
                        if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                        }
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1112 = 3;
                    }
                }
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2854(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1124 = 1;
                l_U1112 = 6;
            }
        }
        break;
        case 3:
        if (NOT l_U1137)
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U456[0]._fU0, -1942.36000000, -71.61860000, 6.68370000, 3.00000000, 1.00000000, 2.00000000, 0 ))
            {
                SAY_AMBIENT_SPEECH( l_U456[0]._fU0, "FIGHT_PLAYER", 1, 1, 2 );
                l_U1137 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (NOT (IS_CAR_DEAD( l_U873 )))
            {
                if (IS_CHAR_IN_CAR( l_U456[0]._fU0, l_U873 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U456[0]._fU0, -1933.02100000, -79.03270000, 6.60270000, 2.00000000, 4.00000000, 2.00000000, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        if (NOT l_U1117)
                        {
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U873, -1935.36900000, -24.59620000, 5.36560000, 35.00000000, 0, l_U863, 2, 4.00000000, -1 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U873, 35.00000000, 2 );
                        }
                        else
                        {
                            TASK_CAR_DRIVE_WANDER( 0, l_U873, 10.00000000, 2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        SET_CAR_DISTANCE_AHEAD_MULTIPLIER( l_U873, 1.00000000 );
                        if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                        }
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        if (l_U1117)
                        {
                            sub_28481();
                        }
                        l_U1112 = 6;
                    }
                }
                else
                {
                    GET_DRIVER_OF_CAR( l_U873, ref iVar4 );
                    if (iVar4 != nil)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2854(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                        }
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1124 = 1;
                        l_U1112 = 6;
                    }
                }
            }
        }
        break;
        case 6:
        l_U1148 = 10000;
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if ((sub_37300( sub_2854(), l_U456[0]._fU0 )) > 400.00000000)
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 )))
                {
                    sub_37460( 0 );
                }
            }
            else if ((NOT (IS_CHAR_IN_ANY_CAR( l_U456[0]._fU0 ))) AND ((sub_37300( sub_2854(), l_U456[0]._fU0 )) > 180.00000000))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 )))
                {
                    sub_37460( 0 );
                }
            }
            else if (NOT l_U1130)
            {
                GET_GAME_TIMER( ref l_U1145 );
                l_U1130 = 1;
            }
            else if ((sub_37300( sub_2854(), l_U456[0]._fU0 )) < 50.00000000)
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U456[0]._fU0, sub_2854(), 0 )))
                {
                    if (sub_21042( l_U1145, 10000 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U456[0]._fU0, "FIGHT_PLAYER", 1, 1, 2 );
                        GET_GAME_TIMER( ref l_U1145 );
                    }
                }
                else if (NOT l_U1131)
                {
                    if (NOT l_U1133)
                    {
                        l_U1131 = 1;
                    }
                    else if (sub_21042( l_U1146, 5000 ))
                    {
                        l_U1131 = 1;
                    }
                    else
                    {
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U456[0]._fU0 );
                    }
                }
                else if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U456[0]._fU0 )))
                {
                    SAY_AMBIENT_SPEECH( l_U456[0]._fU0, "SHOT_BY_PLAYER_DISLIKE", 1, 1, 2 );
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U456[0]._fU0 );
                    GET_GAME_TIMER( ref l_U1145 );
                    GET_GAME_TIMER( ref l_U1146 );
                    l_U1131 = 0;
                };;;
            }
            if (NOT l_U1124)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U456[0]._fU0 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2854(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -1923.08800000, -78.82530000, 0.00000000, -1871.07800000, -59.23310000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -1947.91900000, -92.13790000, 0.00000000, -1920.68600000, -11.37290000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -2168.91800000, -97.50701000, 0.00000000, -1936.08800000, -89.17440000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -1921.03300000, -91.11570000, 0.00000000, -1708.91000000, -91.04550000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -1930.50900000, -99.13600000, 0.00000000, -1710.83800000, -83.00650000, 100.00000000 );
                    l_U1124 = 1;
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U456[0]._fU0 )))
            {
                if (sub_20896( l_U456[0]._fU0, 1, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2854(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                    }
                }
            };;;;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (NOT l_U1113)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U456[0]._fU0, "missjim_6", "plead" ))
                {
                    SET_CHAR_COORDINATES( l_U456[0]._fU0, -1950.88100000, -75.23440000, 10.37090000 );
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U456[0]._fU0, 1 );
                    l_U1113 = 1;
                    l_U1115 = 1;
                }
            }
            else if (NOT l_U1114)
            {
                if (sub_38915( l_U456[0]._fU0 ))
                {
                    l_U1114 = 1;
                    l_U1064 = 0;
                    l_U1115 = 0;
                    l_U1063 = 0;
                }
            }
            else if (sub_39191( -1950.88100000, -75.23440000, 10.37090000, 280.78210000, l_U456[0]._fU0 ))
            {
                l_U1112 = 8;
            };;;
            if (NOT l_U1114)
            {
                if ((NOT l_U1116) == 1)
                {
                    if (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 ))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.71300000, -74.54640000, 11.37590000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (sub_42585( sub_2854(), l_U456[0]._fU0 )))
                        {
                            l_U1116 = 1;
                            GET_GAME_TIMER( ref l_U1143 );
                            l_U1120 = 1;
                            l_U1064 = 0;
                            l_U1063 = 0;
                            l_U1065 = 1;
                            sub_14726( 1 );
                            sub_21162( "E1B6_BEG", ref l_U1039, 6, 1 );
                        }
                    }
                }
                else if (NOT l_U1121)
                {
                    if (l_U1120)
                    {
                        if (sub_43469( sub_2854() ))
                        {
                            if (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 ))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.71300000, -74.54640000, 11.37590000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (sub_42585( sub_2854(), l_U456[0]._fU0 )))
                                {
                                    GET_GAME_TIMER( ref l_U1144 );
                                    if ((l_U1144 - l_U1143) > 5000)
                                    {
                                        l_U1121 = 1;
                                    }
                                    else if ((l_U1144 - l_U1143) > 1200)
                                    {
                                        if (NOT l_U1135)
                                        {
                                            PRINT_HELP( "JM6_EXEH" );
                                            l_U1135 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U1120 = 0;
                                }
                            }
                            else
                            {
                                l_U1120 = 0;
                            }
                        }
                        else
                        {
                            l_U1121 = 1;
                        }
                    }
                    else if (sub_43469( sub_2854() ))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 ))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.71300000, -74.54640000, 11.37590000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (sub_42585( sub_2854(), l_U456[0]._fU0 )))
                            {
                                GET_GAME_TIMER( ref l_U1143 );
                                l_U1120 = 1;
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1143 );
                        l_U1120 = 1;
                    }
                }
                else if (sub_43469( sub_2854() ))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U456[0]._fU0 )))
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.71300000, -74.54640000, 11.37590000, 2.00000000, 2.00000000, 2.00000000, 0 ))) AND (NOT (sub_42585( sub_2854(), l_U456[0]._fU0 ))))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( l_U456[0]._fU0, 0 );
                            l_U1116 = 0;
                            if (DOES_BLIP_EXIST( l_U847[0] ))
                            {
                                REMOVE_BLIP( l_U847[0] );
                            }
                            l_U1065 = 0;
                            sub_14726( 0 );
                            l_U1115 = 0;
                            l_U1117 = 1;
                            l_U1112 = 5;
                        }
                    }
                }
                else
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U456[0]._fU0, 0 );
                    l_U1116 = 0;
                    if (DOES_BLIP_EXIST( l_U847[0] ))
                    {
                        REMOVE_BLIP( l_U847[0] );
                    }
                    l_U1065 = 0;
                    sub_14726( 0 );
                    l_U1115 = 0;
                    l_U1117 = 1;
                    l_U1112 = 5;
                };;;
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63587, 65463, 12, 0, 0.00000000 );
            l_U1112 = 7;
        }
        break;
        case 7:
        if (NOT l_U1125)
        {
            if (sub_44330())
            {
                sub_21162( "E1B6_LIVE", ref l_U1045, 6, 1 );
                l_U1125 = 1;
            }
        }
        else if (NOT (sub_22767( l_U1045 )))
        {
            l_U453 = 4;
        }
        break;
    }
    if (l_U1115)
    {
        if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U456[0]._fU0, -1948.60900000, -74.80180000, 10.37480000, 0.50000000, 0.50000000, 2.00000000, 0 ))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U456[0]._fU0, "missjim_6", "plead" ))
                {
                    if (l_U1126)
                    {
                        l_U1126 = 0;
                    }
                    if (NOT (IS_PED_RAGDOLL( l_U456[0]._fU0 )))
                    {
                        GET_CHAR_COORDINATES( l_U456[0]._fU0, ref vVar5.x, ref vVar5.y, ref vVar5.z );
                        GET_CHAR_COORDINATES( sub_2854(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vVar5};
                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref uVar14 );
                        SET_CHAR_HEADING( l_U456[0]._fU0, uVar14 );
                    }
                    if (l_U1065)
                    {
                        if (NOT (sub_22767( l_U1039 )))
                        {
                            if (NOT l_U1123)
                            {
                                GET_GAME_TIMER( ref l_U1138 );
                                l_U1123 = 1;
                            }
                            else if (sub_21042( l_U1138, 4000 ))
                            {
                                sub_21162( "E1B6_BEG", ref l_U1039, 6, 1 );
                                l_U1123 = 0;
                            }
                            else if ((sub_21042( l_U1138, 1000 )) AND (IS_PLAYER_TARGETTING_CHAR( sub_4837(), l_U456[0]._fU0 )))
                            {
                                sub_21162( "E1B6_BEG", ref l_U1039, 6, 1 );
                                l_U1123 = 0;
                            };;;
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    TASK_PLAY_ANIM( l_U456[0]._fU0, "plead", "missjim_6", 1.00000000, 1, 0, 0, 0, 0 );
                }
            }
            else if (NOT l_U1126)
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1948.60900000, -74.80180000, 10.37480000, 2, -2, 0.50000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2854() );
                TASK_PLAY_ANIM( 0, "plead", "missjim_6", 1.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1126 = 1;
            }
        }
    }
    if (l_U1116)
    {
        if (DOES_BLIP_EXIST( l_U847[0] ))
        {
            sub_47429( ref l_U847[0], ref l_U1140 );
        }
    }
    if (l_U1119)
    {
        if (NOT l_U1118)
        {
            GET_GAME_TIMER( ref l_U1142 );
            if ((l_U1142 - l_U1141) > 1500)
            {
                PRINT_NOW( "JM6_I3", 7500, 1 );
                l_U1118 = 1;
            }
        }
    }
    if (l_U1064)
    {
        if ((sub_47642()) || (sub_27534()))
        {
            if ((sub_47642()) || (sub_43469( sub_2854() )))
            {
                if (NOT l_U1122)
                {
                    if (NOT (sub_22767( l_U1027 )))
                    {
                        GET_GAME_TIMER( ref l_U1139 );
                        l_U1122 = 1;
                    }
                }
                else if ((l_U1066) || (sub_21042( l_U1139, 5000 )))
                {
                    if ((NOT (sub_22767( l_U936 ))) AND ((NOT (sub_22767( l_U1033 ))) AND (NOT (sub_22767( l_U1027 )))))
                    {
                        if (NOT sub_47838())
                        {
                            if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[0]._fU0, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                {
                                    if ((l_U1149 mod 3) == 0)
                                    {
                                        sub_21162( "E1B6_RAGE", ref l_U1027, 6, 1 );
                                        l_U1122 = 0;
                                    }
                                    else if ((l_U1149 mod 3) == 1)
                                    {
                                        if (NOT sub_47642())
                                        {
                                            sub_21162( "E1J6_ATT2", ref l_U1027, 6, 1 );
                                            l_U1122 = 0;
                                        }
                                    }
                                    else if (NOT l_U1136)
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                                        {
                                            GET_INTERIOR_FROM_CHAR( g_U11081[0], ref iVar3 );
                                            if (iVar3 != nil)
                                            {
                                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                {
                                                    if (NOT sub_47838())
                                                    {
                                                        if (l_U456[1]._fU4)
                                                        {
                                                            sub_21162( "E1J6_THOUS", ref l_U936, 6, 1 );
                                                            l_U1136 = 1;
                                                            l_U1122 = 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    };;;
                                    l_U1149++;
                                    l_U1066 = 0;
                                    l_U1063 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U915)
    {
        if (NOT (IS_CHAR_DEAD( l_U456[0]._fU0 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[0]._fU0, 500.00000000, 500.00000000, 500.00000000, 0 )))
            {
                sub_37460( 0 );
            }
        }
    }
    return;
}

int sub_27534()
{
    if ((sub_13204()) || (sub_27543()))
    {
        return 1;
    }
    return 0;
}

void sub_27543()
{
    unknown uVar2;
    float fVar3;

    if (NOT l_U1081)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.18100000, -63.22880000, 7.21150000, 1.00000000, 1.50000000, 2.00000000, 0 ))
        {
            l_U1081 = 1;
        }
        else if (l_U916)
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63582, 65475, 7, 2.00000000, -1452339441 ))
            {
                GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, ref uVar2, ref fVar3 );
                if (fVar3 < -0.50000000)
                {
                    l_U1081 = 1;
                }
            }
        }
    }
    return l_U1081;
}

int sub_28025()
{
    int iVar2;

    if (IS_VEH_DRIVEABLE( l_U873 ))
    {
        if (LOCATE_CAR_3D( l_U873, -1950.57500000, -57.97090000, 6.45600000, 6.00000000, 3.00000000, 2.00000000, 0 ))
        {
            GET_DRIVER_OF_CAR( l_U873, ref iVar2 );
            if ((iVar2 == l_U456[0]._fU0) || (iVar2 == nil))
            {
                return 1;
            }
        }
        else
        {
            sub_15466( "Bike not located" );
        }
    }
    else
    {
        sub_15466( "Bike not driveable" );
    }
    return 0;
}

void sub_28481()
{
    g_U24 = 82;
    if (l_U1069)
    {
        g_U15728[17] = 1;
    }
    if (l_U875)
    {
        sub_28526( 13 );
        g_U15728[10] = 1;
    }
    sub_28821();
    if (IS_PLAYER_PLAYING( sub_4837() ))
    {
        CLEAR_WANTED_LEVEL( sub_4837() );
    }
    if (l_U875)
    {
        sub_35642( 1, "E1B6_CALL3", "E1J6AUD", 0 );
    }
    else
    {
        sub_35642( 1, "E1B6_CALL2", "E1J6AUD", 0 );
    }
    sub_2834();
    return;
}

void sub_28526(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_28537( uParam0 );
    if (NOT g_U27892[uVar3]._fU0)
    {
        return;
    }
    g_U27892[uVar3]._fU0 = 0;
    sub_28712();
    return;
}

int sub_28537(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_28548( uParam0 )))
    {
        sub_1688( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_28548(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_28712()
{
    g_U27953._fU16._fU0--;
    sub_28741();
    return;
}

void sub_28741()
{
    if (g_U0)
    {
        return;
    }
    if (g_U27953._fU16._fU4 < g_U27953._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_28821()
{
    sub_28830();
    return;
}

void sub_28830()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_28848();
    sub_28907( iVar2, iVar3, iVar4 );
    return;
}

void sub_28848()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U424[I] = 4;
    }
    return;
}

void sub_28907(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_28938( iVar5, uParam0, uParam1, uParam2, "Friend_2" );
    return;
}

void sub_28938(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_29034( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_29034( ref cVar9 );
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
            sub_29034( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_29034( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_29034( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_29034( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_29611( uParam0, iVar7 );;;
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
    if (NOT (sub_30059( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4837() );
    sub_1833();
    bVar28 = true;
    uVar29 = sub_29611( uParam0, iVar7 );
    uVar30 = sub_1457( uParam0 );
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
                sub_34513( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_34947();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_35032( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_35111( uParam0 );
                sub_35150( 0 );
                sub_1733( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_35339();
        }
    }
    if (bParam2)
    {
        sub_34947();
        sub_35438();
        sub_35150( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_34947();
        sub_35490();
        sub_35150( 0 );
        sub_1733( uVar30, 0 );
    }
    sub_1344();
    return;
}

void sub_29034(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_29611(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1688( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_30059(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_30155( uParam1 );
        break;
        case 1:
        bVar8 = sub_30850( uParam1 );
        break;
        case 2:
        bVar8 = sub_31583( uParam1 );
        break;
        case 3:
        bVar8 = sub_31820( uParam1 );
        break;
        case 4:
        bVar8 = sub_31986( uParam1 );
        break;
        case 5:
        bVar8 = sub_32185( uParam1 );
        break;
        case 6:
        bVar8 = sub_32380( uParam1 );
        break;
        case 7:
        bVar8 = sub_32585( uParam1 );
        break;
        case 8:
        bVar8 = sub_32790( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_31198( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_29611( uParam0, uParam1 );
    if (bParam3)
    {
        sub_33076( uVar9, uParam0 );
    }
    return 1;
}

int sub_30155(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_30252( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30252( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_30252( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_30252( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_30757( "Contact 1", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 1", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_30252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_30263( uParam1 );
    sub_30437( uParam0, 0, uParam2 );
    sub_30437( uParam0, 1, uParam3 );
    sub_30437( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_28848();
    return;
}

void sub_30263(unknown uParam0)
{
    ADD_SCORE( sub_4837(), uParam0 );
    sub_30288( uParam0 );
    return;
}

void sub_30288(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1688( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_30437(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_30757(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_30850(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30252( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_30252( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30252( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_30252( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_30252( iVar3, 0, sub_31076(), sub_31342(), 0, 0 );
        break;
        default:
        sub_30757( "Contact 2", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 2", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31076()
{
    switch (l_U424[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_31198( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_31198(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_31342()
{
    switch (l_U424[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_31198( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_31583(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30252( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_30252( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30252( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_30757( "Contact 3", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 3", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31820(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_30757( "Friend 4", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Friend 4", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30252( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30252( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_30757( "Contact 5", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 5", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32185(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30252( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30252( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_30757( "Contact 6", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 6", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32380(unknown uParam0)
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
        sub_30252( iVar3, 0, sub_31076(), sub_31342(), 0, 0 );
        break;
        default:
        sub_30757( "Friend 7", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Friend 7", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32585(unknown uParam0)
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
        sub_30252( iVar3, 0, sub_31076(), sub_31342(), 0, 0 );
        break;
        default:
        sub_30757( "Friend 8", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Friend 8", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32790(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30252( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_30757( "Contact 9", 1 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_30757( "Contact 9", 0 );
        sub_30252( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_33076(int iParam0, int iParam1)
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
    if (sub_33137( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_33855( iParam1 );
    }
    return;
}

int sub_33137(int iParam0, int iParam1)
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
            sub_33277( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_33277(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_33447( 0 );
    return;
}

void sub_33447(boolean bParam0)
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
        sub_33692();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_33692()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_33855(int iParam0)
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
        sub_34086( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_34086( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_34086( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_34086( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_34086( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_34086( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_34086(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_34513(unknown uParam0, unknown uParam1)
{
    sub_34532( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_34532(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_34947()
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

int sub_35032(int iParam0, int iParam1)
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

void sub_35111(unknown uParam0)
{
    sub_1205();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_35150(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_35201( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_35201(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_35339()
{
    sub_35348();
    return;
}

void sub_35348()
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

void sub_35438()
{
    sub_35348();
    return;
}

void sub_35490()
{
    sub_35348();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_35642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_35686( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_35686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_37300(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
            return Result;
        }
    }
    return Result;
}

void sub_37460(unknown uParam0)
{
    sub_37469();
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "JM6_BESC", 7000, 1 );
        sub_35642( 1, "E1B6_CALL1", "E1J6AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "JM6_DESB", 7000, 1 );
        sub_35642( 1, "E1B6_WRECK", "E1J6AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "JM6_ABAN", 7000, 1 );
        sub_35642( 1, "E1B6_WRECK", "E1J6AUD", 0 );
        break;
        case 3: break;
    }
    sub_2834();
    return;
}

void sub_37469()
{
    sub_37478();
    return;
}

void sub_37478()
{
    int iVar2;

    iVar2 = 1;
    sub_37492( iVar2 );
    sub_1824( iVar2 );
    return;
}

void sub_37492(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4837(), 150 );
    CLEAR_HELP();
    sub_683( uParam0 );
    return;
}

int sub_38915(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_2854(), ref iVar3 );
    if ((iVar3 != 27) AND ((iVar3 != 7) AND (iVar3 != 9)))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_2854() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4837(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_2854() ))))
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

int sub_39191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown[2] uVar23;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown[2] uVar30;
    int iVar33;
    int I;
    unknown uVar35;

    fVar11 = 0.00000000;
    fVar12 = 0.30000000;
    fVar13 = 0.50000000;
    array(ref uVar23, 2);
    array(ref uVar30, 2);
    switch (l_U1103)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( uParam4 )))
        {
            l_U1111 = 1;
            SET_PLAYER_CONTROL( sub_4837(), 0 );
            SET_PED_IS_BLIND_RAGING( sub_2854(), 0 );
            DISPLAY_RADAR( 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U1109 );
            SET_USE_HIGHDOF( 1 );
            CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.00000000, 1 );
            SET_CHAR_COORDINATES( sub_2854(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            SET_CHAR_HEADING( sub_2854(), uParam3 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_2854(), "E1_HouseBed1" );
            CLEAR_PRINTS();
            sub_14726( 0 );
            if (NOT (IS_CAR_DEAD( g_U11087[0] )))
            {
                if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                {
                    GET_CAR_COORDINATES( g_U11087[0], ref uVar23[0]._fU0, ref uVar23[0]._fU4, ref uVar23[0]._fU8 );
                    GET_CAR_HEADING( g_U11087[0], ref uVar30[0] );
                    GET_CAR_COORDINATES( g_U11087[1], ref uVar23[1]._fU0, ref uVar23[1]._fU4, ref uVar23[1]._fU8 );
                    GET_CAR_HEADING( g_U11087[1], ref uVar30[1] );
                    sub_39713( uVar23[0], uVar30[0], 1, -1953.75900000, -71.18870000, 10.37090000, 211.06740000, uVar23[1], uVar30[1], 1, -1954.26200000, -72.74250000, 10.37090000, 199.98460000 );
                }
            }
            l_U980[15] = sub_39901( -1952.60500000, -74.69038000, 11.77513000, -0.26378200, 0.00000000, -92.63326000, 34.80003000, 1, 1 );
            l_U980[16] = sub_39901( -1952.60500000, -74.69038000, 11.77513000, -0.26378200, 0.00000000, -92.63326000, 30.90000000, 1, 0 );
            CREATE_CAM( 3, ref l_U980[17] );
            l_U980[21] = sub_39901( -1946.97400000, -73.39397000, 11.39160000, 3.05937000, 0.00000000, 120.27770000, 34.80003000, 0, 0 );
            l_U980[22] = sub_39901( -1946.97400000, -73.39397000, 11.39160000, 3.05937000, 0.00000000, 120.27770000, 30.90000000, 0, 0 );
            CREATE_CAM( 3, ref l_U980[23] );
            l_U980[24] = sub_39901( -1950.05000000, -73.20355000, 11.62981000, -0.95133100, -0.00000000, -167.52950000, 46.00000000, 0, 0 );
            l_U980[25] = sub_39901( -1948.75700000, -73.20355000, 11.62981000, -0.95133100, -0.00000000, -167.52950000, 46.00000000, 0, 0 );
            CREATE_CAM( 3, ref l_U980[26] );
            l_U980[27] = sub_39901( -1946.22800000, -73.51777000, 10.49493000, 13.55217000, -0.00000000, 113.22550000, 36.90002000, 0, 0 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2854(), 0.00000000, 2.31250000, -1.00010000, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
            SET_CHAR_COORDINATES( uParam4, uVar20._fU0, uVar20._fU4, uVar20._fU8 );
            GET_CHAR_HEADING( sub_2854(), ref uVar10 );
            SET_ROOM_FOR_CHAR_BY_NAME( uParam4, "E1_HouseBed1" );
            SET_CHAR_HEADING( uParam4, uVar10 - 180.71700000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
            GET_GAME_TIMER( ref l_U1107 );
            GET_GAME_TIMER( ref l_U1110 );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim", "missjim_6", 1000.00000000, 0, 0, 0, 1, 0 );
                TASK_PLAY_ANIM( sub_2854(), "player_execute", "missjim_6", 1000.00000000, 0, 1, 1, 0, 0 );
                sub_21162( "E1B6_KILL", ref l_U936, 6, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "ped_to_execute is Injured after wait!" );
            }
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref uVar35 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar35, "E1_HouseBed1" );
            SET_CAM_ACTIVE( l_U980[15], 0 );
            SET_CAM_PROPAGATE( l_U980[15], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U980[17], l_U980[15], l_U980[16], 10000, 0 );
            SET_CAM_ACTIVE( l_U980[17], 1 );
            SET_CAM_PROPAGATE( l_U980[17], 1 );
            GET_GAME_TIMER( ref l_U1110 );
            l_U1103 = 2;
        }
        else
        {
            SCRIPT_ASSERT( "ped_to_execute is Injured!" );
        }
        break;
        case 1: break;
        case 2:
        if ((sub_21042( l_U1110, 10000 )) || (sub_22767( l_U936 )))
        {
            iVar33 = sub_40992( l_U936 );
            if ((sub_21042( l_U1110, 10000 )) || (iVar33 > 1))
            {
                SET_CAM_ACTIVE( l_U980[21], 1 );
                SET_CAM_PROPAGATE( l_U980[21], 1 );
                SET_CAM_ACTIVE( l_U980[22], 1 );
                SET_CAM_ACTIVE( l_U980[16], 0 );
                SET_CAM_ACTIVE( l_U980[17], 0 );
                SET_CAM_PROPAGATE( l_U980[17], 0 );
                SET_CAM_ACTIVE( l_U980[21], 0 );
                SET_CAM_PROPAGATE( l_U980[21], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U980[23], l_U980[21], l_U980[22], 10000, 0 );
                SET_CAM_ACTIVE( l_U980[23], 1 );
                SET_CAM_PROPAGATE( l_U980[23], 1 );
                GET_GAME_TIMER( ref l_U1110 );
                l_U1103 = 3;
            }
        }
        break;
        case 3:
        if ((sub_21042( l_U1110, 10000 )) || (sub_22767( l_U936 )))
        {
            iVar33 = sub_40992( l_U936 );
            if ((sub_41414( sub_2854(), "missjim_6", "player_execute", 0.55000000 )) || ((sub_21042( l_U1110, 10000 )) || (iVar33 > 3)))
            {
                SET_TIME_SCALE( 0.50000000 );
                SET_CAM_ACTIVE( l_U980[24], 1 );
                SET_CAM_PROPAGATE( l_U980[24], 1 );
                SET_CAM_ACTIVE( l_U980[25], 1 );
                SET_CAM_ACTIVE( l_U980[23], 0 );
                SET_CAM_PROPAGATE( l_U980[23], 0 );
                SET_CAM_ACTIVE( l_U980[22], 0 );
                SET_CAM_ACTIVE( l_U980[24], 0 );
                SET_CAM_PROPAGATE( l_U980[24], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U980[26], l_U980[24], l_U980[25], 10000, 0 );
                SET_CAM_ACTIVE( l_U980[26], 1 );
                SET_CAM_PROPAGATE( l_U980[26], 1 );
                GET_GAME_TIMER( ref l_U1110 );
                l_U1103 = 4;
            }
        }
        break;
        case 4:
        if ((sub_21042( l_U1110, 10000 )) || (sub_22767( l_U936 )))
        {
            if (sub_21042( l_U1110, 3000 ))
            {
                SET_TIME_SCALE( 1.00000000 );
                SET_CAM_ACTIVE( l_U980[27], 1 );
                SET_CAM_PROPAGATE( l_U980[27], 1 );
                SET_CAM_ACTIVE( l_U980[26], 0 );
                SET_CAM_PROPAGATE( l_U980[26], 0 );
                SET_CAM_ACTIVE( l_U980[25], 0 );
                GET_GAME_TIMER( ref l_U1110 );
                l_U1103 = 5;
            }
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U1108 );
        if ((sub_21042( l_U1110, 10000 )) || (NOT (sub_22767( l_U936 ))))
        {
            SET_CAM_ACTIVE( l_U980[17], 0 );
            SET_CAM_PROPAGATE( l_U980[17], 0 );
            SET_CAM_ACTIVE( l_U980[16], 0 );
            SET_CAM_PROPAGATE( l_U980[16], 0 );
            SET_CAM_ACTIVE( l_U980[15], 0 );
            SET_CAM_PROPAGATE( l_U980[15], 0 );
            SET_CAM_ACTIVE( l_U980[23], 0 );
            SET_CAM_PROPAGATE( l_U980[23], 0 );
            SET_CAM_ACTIVE( l_U980[22], 0 );
            SET_CAM_PROPAGATE( l_U980[22], 0 );
            SET_CAM_ACTIVE( l_U980[21], 0 );
            SET_CAM_PROPAGATE( l_U980[21], 0 );
            SET_CAM_ACTIVE( l_U980[24], 0 );
            SET_CAM_PROPAGATE( l_U980[24], 0 );
            SET_CAM_ACTIVE( l_U980[25], 0 );
            SET_CAM_PROPAGATE( l_U980[25], 0 );
            SET_CAM_ACTIVE( l_U980[26], 0 );
            SET_CAM_PROPAGATE( l_U980[26], 0 );
            SET_CAM_ACTIVE( l_U980[27], 0 );
            SET_CAM_PROPAGATE( l_U980[27], 0 );
            DESTROY_CAM( l_U980[17] );
            DESTROY_CAM( l_U980[16] );
            DESTROY_CAM( l_U980[15] );
            DESTROY_CAM( l_U980[23] );
            DESTROY_CAM( l_U980[22] );
            DESTROY_CAM( l_U980[21] );
            DESTROY_CAM( l_U980[26] );
            DESTROY_CAM( l_U980[25] );
            DESTROY_CAM( l_U980[24] );
            DESTROY_CAM( l_U980[27] );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                ;
            }
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                STOP_PED_SPEAKING( uParam4, 1 );
                UNLOCK_RAGDOLL( uParam4, 1 );
                SWITCH_PED_TO_RAGDOLL( uParam4, 1000, 10000, 0, 1, 1, 0 );
                WAIT( 2 );
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    SET_CHAR_HEALTH( uParam4, 0 );
                }
            }
            for ( I = 0; I < l_U456; I++ )
            {
                if (I > 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U456[I]._fU0 )))
                    {
                        if (NOT (sub_42585( sub_2854(), l_U456[I]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U456[I]._fU0 );
                        }
                    }
                }
            }
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CLEAR_CHAR_TASKS( sub_2854() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            END_CAM_COMMANDS( ref l_U1109 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_4837(), 1 );
            DISPLAY_RADAR( 1 );
            SET_TIME_SCALE( 1.00000000 );
            l_U1111 = 0;
            l_U1103 = 6;
        }
        break;
        case 6:
        l_U1105 = 0;
        return 1;
        break;
    }
    if (NOT l_U1104)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_2854(), "missjim_6", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_2854(), "missjim_6", "player_execute", ref fVar7 );
            if (fVar7 > 0.59249990)
            {
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( sub_2854(), 1232, 0.20000000, 0.00000000, 0.00000000, ref uVar17 );
                    GET_PED_BONE_POSITION( uParam4, 0, -0.10000000, 0.00000000, 0.35000000, ref uVar14 );
                    FIRE_PED_WEAPON( sub_2854(), uVar14 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_2854(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U1104 = 1;
                }
            }
        }
    }
    if (NOT l_U1106)
    {
        if (sub_41414( uParam4, "missjim_6", "victim", 0.42500000 ))
        {
            TRIGGER_PTFX_ON_PED_BONE( "CS_execution_brian", uParam4, -0.10000000, 0.00000000, 0.35000000, 0.00000000, 0.00000000, 0.00000000, 0, 1 );
            l_U1106 = 1;
        }
    }
    return 0;
}

void sub_39713(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    if (sub_15503())
    {
        g_U11183[0] = {uParam0};
        g_U11159[0] = uParam3;
        g_U11120[0] = uParam4;
        g_U11190[0] = {uParam5};
        g_U11162[0] = uParam8;
        g_U11183[1] = {uParam9};
        g_U11159[1] = uParam12;
        g_U11120[1] = uParam13;
        g_U11190[1] = {uParam14};
        g_U11162[1] = uParam17;
        g_U11102 = 1;
    }
    return;
}

void sub_39901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown Result;

    CREATE_CAM( 14, ref Result );
    SET_CAM_POS( Result, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( Result, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_FOV( Result, uParam6 );
    SET_CAM_ACTIVE( Result, uParam7 );
    SET_CAM_PROPAGATE( Result, uParam8 );
    return Result;
}

void sub_40992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_22767( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_41414(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3)
{
    float fVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref fVar6 );
            if (fVar6 >= fParam3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_42585(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_43469(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
        if (iVar3 != nil)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -1950.71100000, -70.27190000, 6.19520000, 6.00000000, 10.00000000, 15.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_44330()
{
    unknown uVar2;
    unknown uVar3;

    sub_14908( l_U1100, "brianFleeCutProg..." );
    switch (l_U1100)
    {
        case 0:
        if (sub_15019( 1, 1 ))
        {
            if (sub_4613())
            {
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                BEGIN_CAM_COMMANDS( ref l_U979 );
                SET_PLAYER_CONTROL( sub_4837(), 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                DISPLAY_RADAR( 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_14726( 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63587, 65463, 12, 0, 0.00000000 );
                CREATE_CAM( 14, ref l_U980[28] );
                CREATE_CAM( 14, ref l_U980[29] );
                CREATE_CAM( 3, ref l_U980[30] );
                CREATE_CAM( 14, ref l_U980[31] );
                CREATE_CAM( 14, ref l_U980[32] );
                CREATE_CAM( 3, ref l_U980[33] );
                SET_CAM_POS( l_U980[28], -1951.39600000, -73.57546000, 10.47432000 );
                SET_CAM_ROT( l_U980[28], 14.75611000, 0.00000100, -120.63270000 );
                SET_CAM_FOV( l_U980[28], 35.70002000 );
                SET_CAM_ACTIVE( l_U980[28], 1 );
                SET_CAM_PROPAGATE( l_U980[28], 1 );
                SET_CAM_POS( l_U980[29], -1951.39600000, -73.57546000, 10.47432000 );
                SET_CAM_ROT( l_U980[29], 14.75611000, 0.00000000, -112.58110000 );
                SET_CAM_FOV( l_U980[29], 35.70002000 );
                SET_CAM_ACTIVE( l_U980[29], 1 );
                SET_CAM_PROPAGATE( l_U980[29], 0 );
                SET_CAM_ACTIVE( l_U980[30], 0 );
                SET_CAM_PROPAGATE( l_U980[30], 0 );
                SET_CAM_POS( l_U980[31], -1951.78700000, -65.51630000, 14.12220000 );
                SET_CAM_ROT( l_U980[31], -44.35906000, 0.00000100, -125.58460000 );
                SET_CAM_FOV( l_U980[31], 43.20000000 );
                SET_CAM_ACTIVE( l_U980[31], 0 );
                SET_CAM_PROPAGATE( l_U980[31], 0 );
                SET_CAM_POS( l_U980[32], -1951.78700000, -65.51630000, 14.12220000 );
                SET_CAM_ROT( l_U980[32], -44.35906000, 0.00000000, -141.35640000 );
                SET_CAM_FOV( l_U980[32], 43.20000000 );
                SET_CAM_ACTIVE( l_U980[32], 1 );
                SET_CAM_PROPAGATE( l_U980[32], 0 );
                SET_CAM_ACTIVE( l_U980[33], 0 );
                SET_CAM_PROPAGATE( l_U980[33], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                WAIT( 0 );
                GET_GAME_VIEWPORT_ID( ref uVar3 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar3, "E1_HouseBed1" );
                if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U456[0]._fU0, -1948.00200000, -75.42540000, 10.37090000, 1.00000000, 1.00000000, 2.00000000, 0 ))) || (NOT (IS_CHAR_PLAYING_ANIM( l_U456[0]._fU0, "missjim_6", "plead" ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[0]._fU0 );
                        SET_CHAR_COORDINATES( l_U456[0]._fU0, -1948.00200000, -75.42540000, 10.37090000 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U456[0]._fU0, "E1_HouseBed1" );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_PLAY_ANIM( 0, "plead", "missjim_6", 1.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    SET_CHAR_HEADING( l_U456[0]._fU0, 76.80960000 );
                }
                l_U912 = 0;
                GET_GAME_TIMER( ref l_U1101 );
                l_U1100 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CAM_ACTIVE( l_U980[30] )))
        {
            SET_CAM_ACTIVE( l_U980[28], 0 );
            SET_CAM_PROPAGATE( l_U980[28], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U980[30], l_U980[28], l_U980[29], 12000, 0 );
            SET_CAM_ACTIVE( l_U980[30], 1 );
            SET_CAM_PROPAGATE( l_U980[30], 1 );
        }
        if (sub_21042( l_U1101, 500 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1952.63300000, -74.50160000, 6.20650000, 3, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U456[0]._fU0, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                GET_GAME_TIMER( ref l_U1101 );
                l_U1100 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U456[0]._fU0 )))
        {
            if (NOT (IS_CAM_ACTIVE( l_U980[31] )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( l_U456[0]._fU0, -1948.21000000, -71.26600000, 11.47630000, 1.00000000, 1.00000000, 2.00000000, 0 )) || (sub_21042( l_U1101, 20000 )))
                {
                    SET_CAM_ACTIVE( l_U980[30], 0 );
                    SET_CAM_PROPAGATE( l_U980[30], 0 );
                    SET_CAM_ACTIVE( l_U980[31], 1 );
                    SET_CAM_PROPAGATE( l_U980[31], 1 );
                    WAIT( 0 );
                    GET_GAME_VIEWPORT_ID( ref uVar3 );
                    SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar3, "E1_HouseHall3" );
                }
            }
            else
            {
                SET_CAM_ACTIVE( l_U980[31], 0 );
                SET_CAM_PROPAGATE( l_U980[31], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U980[33], l_U980[31], l_U980[32], 6000, 0 );
                SET_CAM_ACTIVE( l_U980[33], 1 );
                SET_CAM_PROPAGATE( l_U980[33], 1 );
                GET_GAME_TIMER( ref l_U1101 );
                l_U1100 = 3;
            }
        }
        break;
        case 3:
        if (sub_21042( l_U1101, 4500 ))
        {
            SET_CAM_ACTIVE( l_U980[30], 0 );
            SET_CAM_PROPAGATE( l_U980[30], 0 );
            SET_CAM_ACTIVE( l_U980[29], 0 );
            SET_CAM_PROPAGATE( l_U980[29], 0 );
            SET_CAM_ACTIVE( l_U980[28], 0 );
            SET_CAM_PROPAGATE( l_U980[28], 0 );
            SET_CAM_ACTIVE( l_U980[33], 0 );
            SET_CAM_PROPAGATE( l_U980[33], 0 );
            SET_CAM_ACTIVE( l_U980[32], 0 );
            SET_CAM_PROPAGATE( l_U980[32], 0 );
            SET_CAM_ACTIVE( l_U980[31], 0 );
            SET_CAM_PROPAGATE( l_U980[31], 0 );
            DESTROY_CAM( l_U980[30] );
            DESTROY_CAM( l_U980[29] );
            DESTROY_CAM( l_U980[28] );
            DESTROY_CAM( l_U980[33] );
            DESTROY_CAM( l_U980[32] );
            DESTROY_CAM( l_U980[31] );
            sub_8226();
            INCREMENT_INT_STAT( 373, 1 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CHAR_EXIST( l_U456[0]._fU0 ))
            {
                DELETE_CHAR( ref l_U456[0]._fU0 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2854() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            END_CAM_COMMANDS( ref l_U979 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_4837(), 1 );
            DISPLAY_RADAR( 1 );
            l_U1100 = 4;
        }
        break;
        case 4:
        return 1;
        break;
    }
    return 0;
}

int sub_47429(unknown uParam0, unknown uParam1)
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

int sub_47642()
{
    if ((sub_13294()) || ((sub_12599( 1 )) || ((sub_13003()) || (sub_12599( 0 )))))
    {
        return 1;
    }
    return 0;
}

void sub_47838()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_48292()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar2 = 0;
    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, ref uVar4, ref uVar5 );
    switch (l_U1150)
    {
        case 0:
        if ((sub_12599( 1 )) || ((sub_13003()) || (sub_12599( 0 ))))
        {
            if (NOT l_U1153)
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 63582, 65475, 7, 2.00000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
                    l_U1153 = 1;
                }
            }
            if (NOT l_U456[1]._fU4)
            {
                if (NOT (IS_CHAR_DEAD( l_U456[1]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[1]._fU0, -1952.55600000, -74.63749000, 6.20650000 );
                    SET_CHAR_HEADING( l_U456[1]._fU0, 155.20000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[1]._fU0, "E1_HouseSTudy" );
                    l_U456[1]._fU76 = 11;
                    l_U456[1]._fU64 = {-1953.06400000, -77.95520000, 6.20650000};
                    l_U456[1]._fU28 = 0;
                    l_U456[1]._fU4 = 1;
                    DELETE_CHAR( ref l_U456[1]._fU0 );
                }
            }
            if (l_U1118)
            {
                if (NOT l_U456[2]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[2]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U456[2]._fU0, -1953.35800000, -59.65010000, 5.36770000 );
                        SET_CHAR_HEADING( l_U456[2]._fU0, 187.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[2]._fU0 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[2]._fU0 );
                        if (l_U455)
                        {
                            l_U456[2]._fU76 = 15;
                            l_U456[2]._fU64 = {-1947.94600000, -57.50470000, 5.52900000};
                            SET_CHAR_HEALTH( l_U456[2]._fU0, 120 );
                        }
                        else
                        {
                            l_U456[2]._fU76 = 12;
                            l_U456[2]._fU64 = {-1957.14800000, -76.54170000, 5.48770000};
                        }
                        l_U456[2]._fU24 = 1;
                        l_U456[2]._fU4 = 1;
                    }
                }
                if (NOT l_U456[9]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[9]._fU0 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[9]._fU0 );
                        SET_CHAR_COORDINATES( l_U456[9]._fU0, -1954.59500000, -57.12550000, 5.36400000 );
                        SET_CHAR_HEADING( l_U456[9]._fU0, 270.00000000 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[9]._fU0 );
                        if (l_U455)
                        {
                            l_U456[9]._fU76 = 15;
                            l_U456[9]._fU64 = {-1949.71500000, -57.89360000, 5.47520000};
                            SET_CHAR_HEALTH( l_U456[9]._fU0, 120 );
                        }
                        else
                        {
                            l_U456[9]._fU76 = 12;
                            l_U456[9]._fU64 = {-1957.92100000, -71.54070000, 5.36400000};
                        }
                        l_U456[9]._fU24 = 1;
                        l_U456[9]._fU4 = 1;
                    }
                }
                if (NOT l_U456[4]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[4]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U456[4]._fU0, -1946.60300000, -59.52970000, 5.57130000 );
                        SET_CHAR_HEADING( l_U456[4]._fU0, 270.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[4]._fU0 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[4]._fU0 );
                        if (l_U455)
                        {
                            l_U456[4]._fU76 = 15;
                            l_U456[4]._fU64 = {-1952.41600000, -56.03740000, 5.39370000};
                            SET_CHAR_HEALTH( l_U456[4]._fU0, 120 );
                        }
                        else
                        {
                            l_U456[4]._fU76 = 12;
                            l_U456[4]._fU64 = {-1942.33700000, -72.03930000, 5.67720000};
                        }
                        l_U456[4]._fU24 = 1;
                        l_U456[4]._fU4 = 1;
                    }
                }
                if (NOT l_U456[6]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[6]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U456[6]._fU0, -1947.33700000, -58.36590000, 5.54740000 );
                        SET_CHAR_HEADING( l_U456[6]._fU0, 66.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[6]._fU0 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[6]._fU0 );
                        l_U456[6]._fU76 = 12;
                        l_U456[6]._fU64 = {-1941.38500000, -70.55690000, 5.71230000};
                        l_U456[6]._fU24 = 1;
                        l_U456[6]._fU4 = 1;
                    }
                }
                if (NOT l_U456[8]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[8]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U456[8]._fU0, -1949.05700000, -58.67120000, 5.49580000 );
                        SET_CHAR_HEADING( l_U456[8]._fU0, 270.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[8]._fU0 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[8]._fU0 );
                        l_U456[8]._fU76 = 12;
                        l_U456[8]._fU64 = {-1943.52600000, -67.58430000, 5.66880000};
                        l_U456[8]._fU24 = 1;
                        l_U456[8]._fU4 = 1;
                    }
                }
                if (NOT l_U456[5]._fU4)
                {
                    if (NOT (IS_CHAR_DEAD( l_U456[5]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U456[5]._fU0, -1948.05100000, -58.22350000, 5.52600000 );
                        SET_CHAR_HEADING( l_U456[5]._fU0, 270.00000000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U456[5]._fU0 );
                        CLEAR_ROOM_FOR_CHAR( l_U456[5]._fU0 );
                        l_U456[5]._fU76 = 12;
                        l_U456[5]._fU64 = {-1943.97600000, -70.50730000, 5.64020000};
                        l_U456[5]._fU24 = 1;
                        l_U456[5]._fU4 = 1;
                        l_U456[5]._fU32 = 0;
                    }
                }
            }
            if (NOT l_U456[7]._fU4)
            {
                l_U456[7]._fU4 = 1;
            }
            if (NOT l_U456[3]._fU4)
            {
                if (sub_13003())
                {
                    l_U456[3]._fU76 = 26;
                    l_U456[3]._fU64 = {-1947.31600000, -78.75100000, 10.37090000};
                }
                else
                {
                    l_U456[3]._fU64 = {-1955.19100000, -74.89580000, 10.37090000};
                }
                l_U456[3]._fU4 = 1;
            }
            if (NOT l_U456[10]._fU4)
            {
                l_U456[10]._fU4 = 1;
            }
            if (NOT l_U456[11]._fU4)
            {
                l_U456[11]._fU4 = 1;
            }
        }
        if (NOT l_U456[1]._fU4)
        {
            if (sub_27543())
            {
                if (NOT l_U456[1]._fU4)
                {
                    sub_21162( "E1B6_JOHN", ref l_U936, 6, 1 );
                    if (l_U454 < 3)
                    {
                        SET_PED_IS_BLIND_RAGING( sub_2854(), 1 );
                    }
                    l_U1064 = 1;
                    l_U1122 = 1;
                    l_U1066 = 1;
                    l_U456[1]._fU4 = 1;
                }
                if (NOT (IS_CHAR_DEAD( l_U456[2]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[2]._fU0, -1954.18400000, -77.53489000, 6.20650000 );
                    SET_CHAR_HEADING( l_U456[2]._fU0, 0.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[2]._fU0, "E1_HouseSTudy" );
                    l_U456[2]._fU4 = 1;
                }
                if (NOT (IS_CHAR_DEAD( l_U456[6]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[6]._fU0, -1951.66900000, -74.13650000, 6.20650000 );
                    SET_CHAR_HEADING( l_U456[6]._fU0, 0.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[6]._fU0, "E1_HouseSTudy" );
                    l_U456[6]._fU4 = 1;
                }
                l_U456[7]._fU4 = 1;
                l_U456[8]._fU4 = 1;
                l_U456[9]._fU4 = 1;
            }
            else if (sub_13204())
            {
                l_U1063 = 1;
                l_U456[1]._fU24 = 1;
                l_U456[1]._fU4 = 1;
                if (NOT (IS_CHAR_DEAD( l_U456[6]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[6]._fU0, -1947.91600000, -75.04410000, 6.20650000 );
                    SET_CHAR_HEADING( l_U456[6]._fU0, 0.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[6]._fU0, "E1_HouseLiving" );
                    SET_PED_IS_BLIND_RAGING( sub_2854(), 1 );
                    l_U456[6]._fU4 = 1;
                }
                if (NOT (IS_CHAR_DEAD( l_U456[2]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[2]._fU0, -1953.74100000, -62.19660000, 6.20650000 );
                    SET_CHAR_HEADING( l_U456[2]._fU0, 180.00000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U456[2]._fU0, "E1_HouseKitch" );
                    l_U456[2]._fU64 = {-1952.73900000, -69.03440000, 6.20650000};
                    l_U456[2]._fU76 = 24;
                    l_U456[2]._fU28 = 1;
                    l_U456[2]._fU4 = 1;
                }
                l_U456[7]._fU4 = 1;
                l_U456[8]._fU4 = 1;
                l_U456[9]._fU4 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U456[9]._fU0 )))
        {
            if (l_U456[9]._fU64._fU0 != -1948.03800000)
            {
                if (sub_51113())
                {
                    SET_CHAR_COORDINATES( l_U456[9]._fU0, -1948.03800000, -63.20370000, 6.33410000 );
                    l_U456[9]._fU64 = {-1948.03800000, -63.20370000, 6.33410000};
                }
            }
        }
        if (sub_51113())
        {
            if (NOT l_U456[4]._fU4)
            {
                if (sub_51365( -1950.54200000, -66.78898000, 11.93189000, 1.00000000 ))
                {
                    l_U456[4]._fU28 = 1;
                    l_U456[4]._fU64 = {-1950.54400000, -67.42760000, 10.37090000};
                    l_U456[4]._fU4 = 1;
                }
            }
        }
        if (sub_51480())
        {
            if (NOT l_U456[3]._fU4)
            {
                l_U456[3]._fU28 = 1;
                l_U456[3]._fU64 = {-1955.19100000, -74.89580000, 10.37090000};
                l_U456[3]._fU4 = 1;
            }
            else if (IS_CHAR_INJURED( l_U456[3]._fU0 ))
            {
                if (l_U456[10]._fU76 != 7)
                {
                    sub_51695( ref l_U456[10] );
                    l_U456[10]._fU76 = 7;
                    l_U456[10]._fU64 = {-1954.82300000, -74.62580000, 10.37090000};
                    l_U456[10]._fU24 = 1;
                    l_U456[10]._fU4 = 1;
                }
            }
            if (NOT l_U456[10]._fU4)
            {
                if (NOT (IS_CHAR_DEAD( l_U456[10]._fU0 )))
                {
                    SET_CHAR_COORDINATES( l_U456[10]._fU0, -1953.50000000, -75.40030000, 10.37090000 );
                    l_U456[10]._fU4 = 1;
                }
            }
            if (NOT l_U456[11]._fU4)
            {
                l_U456[11]._fU4 = 1;
            }
        }
        if (sub_51968())
        {
            if (NOT l_U456[5]._fU4)
            {
                if (sub_51365( -1946.49900000, -73.78164000, 15.62319000, 1.00000000 ))
                {
                    l_U456[5]._fU4 = 1;
                }
            }
        }
        if (NOT l_U456[5]._fU4)
        {
            if (sub_13294())
            {
                sub_52147();
            }
        }
        if (l_U1127)
        {
            sub_52147();
        }
        if (l_U1152)
        {
            sub_52147();
        }
        break;
        default:
    }
    if (l_U1063)
    {
        if (NOT l_U1151)
        {
            if (NOT (sub_22767( l_U1033 )))
            {
                GET_GAME_TIMER( ref l_U1154 );
                l_U1151 = 1;
                iVar3 = -1;
            }
        }
        else if (NOT (sub_22767( l_U1033 )))
        {
            if (NOT (sub_22767( l_U1027 )))
            {
                if (NOT sub_47838())
                {
                    if (sub_21042( l_U1154, 6000 ))
                    {
                        if ((sub_47642()) || (sub_43469( sub_2854() )))
                        {
                            switch (l_U1155)
                            {
                                case 0:
                                if (NOT (IS_CHAR_INJURED( l_U456[2]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[2]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                    {
                                        sub_3710( 2, l_U456[iVar3]._fU0, "LOST_1", 0 );
                                        sub_21162( "E1B6_ATTK1", ref l_U1033, 6, 1 );
                                    }
                                }
                                l_U1151 = 0;
                                l_U1155++;
                                break;
                                case 1:
                                iVar3 = sub_52676();
                                if (iVar3 > -1)
                                {
                                    SAY_AMBIENT_SPEECH( l_U456[iVar3]._fU0, "TARGET", 1, 1, 2 );
                                }
                                l_U1151 = 0;
                                l_U1063 = 0;
                                l_U1064 = 1;
                                l_U1155++;
                                break;
                                case 2:
                                if (NOT (IS_CHAR_INJURED( l_U456[4]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[4]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                    {
                                        sub_3710( 3, l_U456[iVar3]._fU0, "LOST_2", 0 );
                                        sub_21162( "E1B6_ATTK2", ref l_U1033, 6, 1 );
                                    }
                                }
                                l_U1151 = 0;
                                l_U1155++;
                                break;
                                case 3:
                                iVar3 = sub_52676();
                                if (iVar3 > -1)
                                {
                                    SAY_AMBIENT_SPEECH( l_U456[iVar3]._fU0, "MOVE_IN", 1, 1, 2 );
                                }
                                l_U1151 = 0;
                                l_U1063 = 0;
                                l_U1064 = 1;
                                l_U1155++;
                                break;
                                case 4:
                                if (l_U1134)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U456[7]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[7]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                        {
                                            sub_3710( 2, l_U456[iVar3]._fU0, "LOST_1", 0 );
                                            sub_21162( "E1B6_RALLY1", ref l_U1033, 6, 1 );
                                        }
                                    }
                                }
                                l_U1151 = 0;
                                l_U1155++;
                                break;
                                case 5:
                                iVar3 = sub_52676();
                                if (iVar3 > -1)
                                {
                                    SAY_AMBIENT_SPEECH( l_U456[iVar3]._fU0, "MOVE_IN", 1, 1, 2 );
                                }
                                l_U1151 = 0;
                                l_U1155++;
                                break;
                                case 6:
                                if (l_U1134)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U456[10]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[10]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                        {
                                            sub_3710( 3, l_U456[iVar3]._fU0, "LOST_2", 0 );
                                            sub_21162( "E1B6_RALLY2", ref l_U1033, 6, 1 );
                                        }
                                    }
                                }
                                l_U1151 = 0;
                                l_U1063 = 0;
                                l_U1064 = 1;
                                l_U1155++;
                                break;
                            }
                            if (l_U1155 > 6)
                            {
                                l_U1155 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U1069)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1946.94500000, -76.67680000, 11.55850000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_ON_FIRE( sub_2854() )))
            {
                START_CHAR_FIRE( sub_2854() );
            }
        }
    }
    if (l_U920)
    {
        if ((l_U1119) || (sub_43469( sub_2854() )))
        {
            sub_4446( "E1J6AUD", "E1B6_TERRY", "E1B6_CLAY" );
            l_U920 = 0;
        }
    }
    sub_53856();
    sub_56707();
    return;
}

void sub_51113()
{
    if (NOT l_U1087)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1950.58100000, -75.03000000, 7.21150000, 1.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1950.59300000, -70.68500000, 9.20880000, 1.00000000, 3.00000000, 3.00000000, 0 )))
        {
            l_U1087 = 1;
        }
    }
    return l_U1087;
}

int sub_51365(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_51480()
{
    if (NOT l_U1089)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1950.54300000, -66.95680000, 11.40430000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1089 = 1;
        }
    }
    return l_U1089;
}

void sub_51695(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU80 = 0;
    iParam0->_fU20 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

void sub_51968()
{
    if (NOT l_U1088)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1948.50800000, -66.99230000, 11.37590000, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1088 = 1;
        }
    }
    return l_U1088;
}

void sub_52147()
{
    l_U456[1]._fU4 = 1;
    l_U456[2]._fU4 = 1;
    l_U456[3]._fU4 = 1;
    l_U456[4]._fU4 = 1;
    l_U456[5]._fU4 = 1;
    l_U456[6]._fU4 = 1;
    l_U456[7]._fU4 = 1;
    l_U456[8]._fU4 = 1;
    l_U456[9]._fU4 = 1;
    l_U456[10]._fU4 = 1;
    l_U456[11]._fU4 = 1;
    return;
}

void sub_52676()
{
    int I;
    float fVar3;
    float fVar4;
    int Result;

    I = 0;
    fVar3 = 0;
    fVar4 = 1000.00000000;
    Result = -1;
    for ( I = 1; I <= 14; I++ )
    {
        if (l_U456[I]._fU4)
        {
            if (NOT (IS_CHAR_INJURED( l_U456[I]._fU0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), l_U456[I]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    fVar3 = sub_52815( l_U456[I]._fU0, sub_2854(), 1 );
                    if (fVar3 < fVar4)
                    {
                        fVar4 = fVar3;
                        Result = I;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_52815(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_52828( uParam0, uParam2 ), sub_52828( uParam1, uParam2 ) );
}

void sub_52828(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_53856()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 14; I++ )
    {
        if (l_U456[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U456[I]._fU0 )))
            {
                if (NOT l_U456[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U456[I]._fU0, l_U880 );
                    if (l_U456[I]._fU24)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U456[I]._fU64._fU0, l_U456[I]._fU64._fU4, l_U456[I]._fU64._fU8, 3, 0.50000000, 0.50000000, sub_2854(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    else if (l_U456[I]._fU28)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U456[I]._fU64._fU0, l_U456[I]._fU64._fU4, l_U456[I]._fU64._fU8, 3, 0.50000000, 0.50000000, sub_2854(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U456[I]._fU64._fU0, l_U456[I]._fU64._fU4, l_U456[I]._fU64._fU8, 3, -1, 0.50000000 );
                        if (l_U456[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U456[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U456[I]._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U456[I]._fU8 = 1;
                }
                else if ((l_U456[I]._fU12) || (NOT l_U456[I]._fU16))
                {
                    if (NOT l_U456[I]._fU20)
                    {
                        if (sub_20896( l_U456[I]._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U456[I]._fU0, l_U881 );
                            SET_COMBAT_DECISION_MAKER( l_U456[I]._fU0, l_U456[I]._fU96 );
                            sub_54506( ref l_U456[I]._fU0, l_U456[I]._fU76 );
                            SET_CHAR_RELATIONSHIP( l_U456[I]._fU0, 5, 23 );
                            SET_CHAR_RELATIONSHIP( l_U456[I]._fU0, 5, 0 );
                            if (l_U456[I]._fU80)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                if (NOT (IS_CHAR_DEAD( l_U456[I]._fU84 )))
                                {
                                    TASK_COMBAT( 0, l_U456[I]._fU84 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_COMBAT( 0, sub_2854() );
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U456[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U456[I]._fU0, uVar3 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U456[I]._fU16 = 1;
                            l_U456[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_54506(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1950.68600000, -60.90390000, 8.71150000, -1950.68600000, -77.90390000, 5.71150000, 10.00000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1953.77400000, -67.86480000, 8.74290000, -1953.77400000, -77.86480000, 5.74290000, 3.50000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1947.35200000, -61.63410000, 8.71150000, -1947.35200000, -77.63410000, 5.71150000, 5.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1953.52700000, -69.29990000, 12.87590000, -1953.52700000, -77.79990000, 9.87590000, 5.00000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1949.29600000, -72.65820000, 12.87590000, -1949.29600000, -79.65820000, 9.87590000, 7.00000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1950.41100000, -60.71120000, 12.87590000, -1950.41100000, -79.21120000, 9.87590000, 10.50000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.84300000, -74.12990000, 12.87590000, -1953.86200000, -74.40821000, 9.87590000, 2.00000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1954.79700000, -73.53160000, 12.87590000, -1954.79700000, -75.53160000, 9.87590000, 2.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1952.43600000, -71.21290000, 12.87590000, -1952.43600000, -72.71290000, 9.87590000, 1.50000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1950.53600000, -67.07690000, 12.37590000, -1950.53600000, -68.07689000, 9.87590000, 2.00000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1946.59600000, -72.04230000, 16.58840000, -1946.59600000, -74.04229000, 14.08840000, 2.50000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1953.74600000, -79.41860000, 8.21150000, -1953.74600000, -77.41860000, 5.71150000, 1.50000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1948.59700000, -79.67260000, 8.21790000, -1948.59700000, -85.17260000, 5.21790000, 20.50000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1946.90600000, -71.81840000, 7.66790000, -1939.90600000, -71.81840000, 4.86900000, 23.00000000 );
        break;
        case 14:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1958.35100000, -69.31630000, 7.36900000, -1954.85100000, -69.31630000, 4.86900000, 28.50000000 );
        break;
        case 15:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1956.27000000, -57.99360000, 7.96369900, -1944.77000000, -57.99360000, 4.96370000, 5.50000000 );
        break;
        case 16:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.46900000, -77.13880000, 8.71150000, -1951.96900000, -77.13880000, 5.71150000, 2.50000000 );
        break;
        case 17:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1951.71600000, -72.98760000, 8.21150000, -1951.71600000, -75.98760000, 5.71150000, 3.50000000 );
        break;
        case 19:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1945.64300000, -70.06360000, 8.71150000, -1948.14300000, -70.06360000, 5.71150000, 3.00000000 );
        break;
        case 18:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1949.32800000, -72.98760000, 8.71150000, -1949.32800000, -75.98760000, 5.71150000, 2.00000000 );
        break;
        case 20:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1948.12100000, -69.54709000, 8.74080000, -1947.33800000, -63.59840000, 5.74080000, 3.50000000 );
        break;
        case 21:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.23300000, -65.42000000, 8.84650000, -1951.73300000, -65.42000000, 5.84650000, 1.50000000 );
        break;
        case 22:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1951.76300000, -72.03820000, 8.24290000, -1955.76300000, -72.03820000, 5.74290000, 1.50000000 );
        break;
        case 23:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.52600000, -76.51690000, 12.67410000, -1952.02600000, -76.51690000, 10.17410000, 6.00000000 );
        break;
        case 24:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.83500000, -69.97420000, 8.21150000, -1951.83500000, -69.97420000, 5.71150000, 2.50000000 );
        break;
        case 25:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1953.62100000, -72.31730000, 8.71150000, -1953.62100000, -66.31730000, 5.71150000, 4.00000000 );
        break;
        case 26:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1947.33300000, -77.76340000, 12.87590000, -1947.33300000, -79.76340000, 9.87590000, 1.50000000 );
        break;
        case 27:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1958.21400000, -58.31070000, 7.99690000, -1943.21400000, -58.31070000, 4.99690000, 5.50000000 );
        break;
        case 29:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1946.10100000, -63.02980000, 8.09140000, -1946.10100000, -56.52980000, 5.09140000, 4.50000000 );
        break;
        case 28:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.50300000, -64.17730000, 7.86900000, -1955.50300000, -57.67730000, 4.86900000, 1.50000000 );
        break;
        case 30:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), -1955.62600000, -72.17640000, 8.24290000, -1951.62600000, -72.17640000, 5.74290000, 2.00000000 );
        break;
    }
    return;
}

void sub_56707()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    for ( I = 0; I <= 14; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U456[I]._fU0 )))
        {
            if (l_U456[I]._fU32)
            {
                GET_CHAR_HEALTH( l_U456[I]._fU0, ref iVar3 );
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U456[I]._fU0, sub_2854(), 1 )) AND (iVar3 < 200))
                {
                    switch (l_U456[I]._fU36._fU0)
                    {
                        case 0:
                        l_U456[I]._fU32 = 0;
                        break;
                        case 1:
                        l_U456[I]._fU36._fU4 = {sub_56907( sub_2854(), l_U456[I]._fU0, 1 )};
                        l_U456[I]._fU36._fU4 = {l_U456[I]._fU36._fU4 * -1.00000000};
                        sub_57270( l_U456[I]._fU0, l_U456[I]._fU36._fU4, l_U456[I]._fU36._fU16._fU8 );
                        l_U456[I]._fU32 = 0;
                        break;
                        case 2:
                        sub_57440( l_U456[I]._fU0, l_U456[I]._fU36._fU4, l_U456[I]._fU36._fU16._fU8 );
                        l_U456[I]._fU32 = 0;
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_56907(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    }
    else
    {
        SCRIPT_ASSERT( "First ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar11.x, ref vVar11.y, ref vVar11.z );
    }
    else
    {
        SCRIPT_ASSERT( "Second ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    vVar14 = {vVar11 - vVar8};
    if (bParam2)
    {
        Result = {vVar14 / (VMAG( vVar14 ))};
    }
    else
    {
        Result = {vVar14};
    }
    return Result;
}

void sub_57270(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar7 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 4, uParam1, uParam4, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_57440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 6, uParam1, uParam4, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_57573()
{
    vector vVar2;
    float fVar5;
    int iVar6;

    vVar2 = {-1950.60700000, -79.40010000, 5.92950000};
    fVar5 = 100.00000000;
    switch (l_U1193)
    {
        case 0:
        if (l_U917)
        {
            if (NOT l_U1194)
            {
                SET_PED_IS_BLIND_RAGING( sub_2854(), 0 );
                sub_2903();
                if (DOES_BLIP_EXIST( l_U874 ))
                {
                    REMOVE_BLIP( l_U874 );
                }
                GET_GAME_TIMER( ref l_U1196 );
                l_U1194 = 1;
                l_U1152 = 1;
            }
            else if (sub_21042( l_U1196, 2000 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), vVar2.x, vVar2.y, vVar2.z, fVar5, fVar5, fVar5, 0 ))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "JM6_CLR", 7500, 1 );
                        l_U1193++;
                    }
                }
                else
                {
                    l_U1193++;
                }
            }
        }
        else
        {
            l_U1193++;
        }
        break;
        case 1:
        if (l_U917)
        {
            if (NOT l_U1195)
            {
                if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
                {
                    sub_15626( g_U11081[1], 0 );
                }
                if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
                {
                    sub_15626( g_U11081[0], 0 );
                }
                l_U1195 = 1;
            }
            if (NOT (sub_43469( sub_2854() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U456[1]._fU0 )))
                {
                    if (sub_43469( l_U456[1]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[1]._fU0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U456[3]._fU0 )))
                {
                    if (sub_43469( l_U456[3]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[3]._fU0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U456[7]._fU0 )))
                {
                    if (sub_43469( l_U456[7]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[7]._fU0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U456[10]._fU0 )))
                {
                    if (sub_43469( l_U456[10]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[10]._fU0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U456[11]._fU0 )))
                {
                    if (sub_43469( l_U456[11]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U456[11]._fU0 );
                    }
                }
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), vVar2.x, vVar2.y, vVar2.z, fVar5, fVar5, fVar5, 0 )))
            {
                if (NOT (sub_51365( vVar2, 5.00000000 )))
                {
                    sub_28481();
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
        {
            CLEAR_CHAR_TASKS( g_U11081[1] );
        }
        sub_28481();;
        break;
    }
    if (l_U1069)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1946.94500000, -76.67680000, 11.55850000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            if (NOT (IS_CHAR_ON_FIRE( sub_2854() )))
            {
                START_CHAR_FIRE( sub_2854() );
            }
        }
    }
    if (NOT l_U1127)
    {
        if (sub_13003())
        {
            GET_INTERIOR_FROM_CHAR( sub_2854(), ref iVar6 );
            if (iVar6 == nil)
            {
                if (NOT (sub_21042( l_U1076, 3000 )))
                {
                    l_U1127 = 1;
                    GET_GAME_TIMER( ref l_U1147 );
                }
            }
        }
    }
    else
    {
        sub_48292();
    }
    if (l_U1152)
    {
        sub_48292();
    }
    return;
}

void sub_58601()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    switch (l_U1230)
    {
        case 0:
        REQUEST_CAR_RECORDING( 470 );
        REQUEST_MODEL( l_U863 );
        sub_5025( 13 );
        REQUEST_MODEL( l_U864 );
        while ((NOT (sub_5462( 13 ))) || ((NOT (HAS_MODEL_LOADED( l_U864 ))) || ((NOT (HAS_MODEL_LOADED( l_U863 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 470 ))))))
        {
            WAIT( 0 );
        }
        if (DOES_VEHICLE_EXIST( l_U873 ))
        {
            DELETE_CAR( ref l_U873 );
        }
        sub_8858( 13, ref l_U1232, -1956.05300000, -85.20720000, 5.72620000, 172.00000000 );
        l_U1233 = sub_10402( 24, -1959.45600000, -84.93460000, 5.72440000, 87.55530000, 12, "", 1, 1 );
        l_U1230++;
        break;
        case 1:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1232 )))
            {
                sub_15466( "Should be playing....." );
                SAY_AMBIENT_SPEECH( l_U1232, "FIGHT_PLAYER", 1, 1, 2 );
            }
            else
            {
                SCRIPT_ASSERT( "Injured!" );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 3 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U1232 )))
            {
                SAY_AMBIENT_SPEECH( l_U1232, "SHOT_BY_PLAYER_DISLIKE", 1, 1, 2 );
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 4 ))
        {
            SMASH_GLASS_ON_OBJECT( -1947.33900000, -79.24364000, 12.21790000, 3.00000000, 1825573128, 1.00000000 );
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 5 ))
        {
            ;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2854() )))
        {
            ;
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( l_U1231 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1231 )))
            {
                SET_CAR_COORDINATES( l_U1231, -1932.79800000, -66.09870000, 5.62160000 );
                SET_CAR_HEADING( l_U1231, 188.31360000 );
                l_U1230 = 1;
            }
        }
        break;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 4 ))
    {
        CLEAR_AREA_OF_CARS( -1932.79800000, -66.09870000, 5.62160000, 100.00000000 );
    }
    return;
}

void sub_59375()
{
    int I;

    for ( I = 0; I < l_U456; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U456[I]._fU0 )))
        {
            SET_CHAR_DECISION_MAKER( l_U456[I]._fU0, l_U881 );
        }
    }
    return;
}

int sub_59617(unknown uParam0)
{
    int iVar3;

    if (g_U9549 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2854(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2854(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_2854(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U85) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U85 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U85 );
            }
        }
    }
    return 0;
}

int sub_59896(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_2854() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_2854(), uParam0 ))
            {
                if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
                {
                    return 1;
                }
                if ((NOT (CHECK_STUCK_TIMER( uParam0, 1, 0 ))) AND (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
                {
                    return 1;
                }
                if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
                {
                    return 1;
                }
            }
            if (sub_60040( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_60040(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_2854() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2854(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2854(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 3 ))) || ((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 15 ))))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U71++;
                        }
                        GET_GAME_TIMER( ref l_U72 );
                    }
                    else if (NOT sub_60211())
                    {
                        if (sub_60289( uParam0 ))
                        {
                            if (l_U71 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2854() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_2854() )))
                                    {
                                        GET_GAME_TIMER( ref l_U73 );
                                        l_U74 = l_U73 - l_U72;
                                        if (l_U74 > 1000)
                                        {
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check has returned true" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check is setting your vehicle on fire" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            SET_PETROL_TANK_HEALTH( uParam0, 65436 );
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U72 );
                                        l_U71 = 0;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U72 );
                                    l_U71 = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U72 );
                            l_U71 = 0;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U72 );
                        l_U71 = 0;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U72 );
                    l_U71 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U72 );
                l_U71 = 0;
            }
        }
    }
    return 0;
}

int sub_60211()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65516) || (iVar2 > 20))
    {
        return 1;
    }
    if ((iVar3 < 65516) || (iVar3 > 20))
    {
        return 1;
    }
    return 0;
}

int sub_60289(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( sub_2854() )))
    {
        GET_CHAR_COORDINATES( sub_2854(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_60407( sub_2854(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_60407(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        fVar6 = uParam1 - uParam2;
        fVar7 = (uParam1 + uParam2) - 1;
        fVar9 = fVar7 - 360;
        fVar8 = fVar6 + 360;
        if ((fVar6 >= 0) AND (fVar7 <= 360))
        {
            if ((fVar5 < fVar7) AND (fVar5 > fVar6))
            {
                l_U70 = 1;
            }
            else
            {
                l_U70 = 0;
            }
        }
        else if (fVar7 > 360)
        {
            if (((fVar5 > fVar6) AND (fVar5 <= 360)) || ((fVar5 >= 0) AND (fVar5 < fVar9)))
            {
                l_U70 = 1;
            }
            else
            {
                l_U70 = 0;
            }
        }
        else if (fVar6 < 0)
        {
            if (((fVar5 < fVar7) AND (fVar5 >= 0)) || ((fVar5 <= 360) AND (fVar5 > fVar8)))
            {
                l_U70 = 1;
            }
            else
            {
                l_U70 = 0;
            }
        };;;
        if (l_U70)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_61363()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_2854(), ref iVar2 );
    if (iVar2 == nil)
    {
        if (NOT l_U1077)
        {
            if (IS_PROJECTILE_IN_AREA( -1947.90200000, -80.45440000, 11.17990000, -1946.73200000, -78.10230000, 13.80600000 ))
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -1947.33900000, -79.24364000, 12.21790000, 3.00000000, 1825573128 ))
                {
                    SMASH_GLASS_ON_OBJECT( -1947.33900000, -79.24364000, 12.21790000, 3.00000000, 1825573128, 1.00000000 );
                    l_U1077 = 1;
                }
            }
        }
    }
    return;
}

void sub_61652()
{
    unknown uVar2;
    int iVar3;
    unknown[15] uVar4;
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
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;

    array(ref uVar4, 15);
    switch (l_U454)
    {
        case 0:
        if (sub_15512())
        {
            l_U914 = 1;
            l_U454 = 1;
        }
        break;
        case 1:
        switch (l_U453)
        {
            case 2:
            if (NOT sub_15503())
            {
                ;
            }
            else
            {
                l_U1200 = 1;
                l_U454 = 2;
            }
            break;
            case 3:
            if (NOT l_U1119)
            {
                if (sub_43469( sub_2854() ))
                {
                    l_U454 = 10;
                }
                else
                {
                    l_U454 = 2;
                }
            }
            else
            {
                l_U454 = 12;
            }
            break;
        }
        break;
        case 2:
        if (l_U916)
        {
            if ((l_U1200) || (sub_61935()))
            {
                sub_15594( 1 );
                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                {
                    sub_3710( 5, g_U11081[0], "TERRY", 0 );
                    TASK_PAUSE( g_U11081[0], 50000 );
                }
                if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                {
                    sub_3710( 7, g_U11081[1], "CLAY", 0 );
                    TASK_PAUSE( g_U11081[1], 50000 );
                }
                l_U454 = 3;
            }
        }
        break;
        case 3:
        if (NOT l_U1203)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if ((l_U1207) || (l_U1200))
                {
                    if (NOT sub_47642())
                    {
                        if (NOT sub_27534())
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63584, 65474, 7, 1, 1.00000000 );
                        }
                        ADD_COVER_POINT( -1951.72500000, -63.25090000, 6.20650000, 0, 180.00000000, 3, 0, ref l_U942[9] );
                        sub_21162( "E1B6_BACK", ref l_U1051, 6, 1 );
                        l_U1203 = 1;
                    }
                }
                else
                {
                    l_U1203 = 1;
                }
            }
        }
        else if (NOT sub_47642())
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (NOT l_U1215[0])
                {
                    if (((sub_20896( g_U11081[0], 1, 0 )) AND (l_U1218[0])) || (((sub_21042( l_U1226[0], 15000 )) AND (l_U1218[0])) || (LOCATE_CHAR_ANY_MEANS_3D( g_U11081[0], -1952.79900000, -101.77150000, 6.72720000, 10.00000000, 4.00000000, 2.00000000, 0 ))))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( g_U11081[0], -1952.79900000, -101.77150000, 6.72720000, 10.00000000, 14.00000000, 2.00000000, 0 ))
                        {
                            sub_15466( "0 Located" );
                        }
                        if ((sub_21042( l_U1226[0], 15000 )) AND (l_U1218[0]))
                        {
                            sub_15466( "0 time up" );
                        }
                        if ((sub_20896( g_U11081[0], 1, 0 )) AND (l_U1218[0]))
                        {
                            sub_15466( "0 processed" );
                        }
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1950.67600000, -83.01380000, 5.72450000, 3, -2, 0.50000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1953.85100000, -55.81780000, 5.36400000, 3, -2, 0.50000000 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, -1950.67600000, -83.01380000, 5.72450000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        CLEAR_CHAR_TASKS( g_U11081[0] );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 1 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1215[0] = 1;
                    }
                    else if (NOT l_U1218[0])
                    {
                        if (IS_CHAR_IN_ANY_CAR( g_U11081[0] ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[0], ref uVar395 );
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_CAR_DRIVE_TO_COORD( 0, uVar395, -1956.92800000, -101.27940000, 5.57650000, 5.00000000, 0, 0, 2, 4.00000000, -1 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                            GET_GAME_TIMER( ref l_U1226[0] );
                            l_U1218[0] = 1;
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                if (NOT l_U1215[1])
                {
                    if (((sub_20896( g_U11081[1], 1, 0 )) AND (l_U1218[1])) || (((sub_21042( l_U1226[1], 15000 )) AND (l_U1218[1])) || (LOCATE_CHAR_ANY_MEANS_3D( g_U11081[1], -1952.79900000, -101.77150000, 6.72720000, 10.00000000, 4.00000000, 2.00000000, 0 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1950.67600000, -83.01380000, 5.72450000, 3, -2, 0.50000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1946.54000000, -55.86810000, 5.57170000, 3, -2, 0.50000000 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, -1950.67600000, -83.01380000, 5.72450000 );
                        TASK_AIM_GUN_AT_COORD( 0, -1953.09500000, -60.86253000, 7.56505400, 99999999 );
                        TASK_AIM_GUN_AT_COORD( 0, -1953.09500000, -60.86253000, 7.56505400, 99999999 );
                        TASK_AIM_GUN_AT_COORD( 0, -1953.09500000, -60.86253000, 7.56505400, 99999999 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        CLEAR_CHAR_TASKS( g_U11081[1] );
                        TASK_PERFORM_SEQUENCE( g_U11081[1], uVar2 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 1 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1215[1] = 1;
                    }
                    else if (NOT l_U1218[1])
                    {
                        if (IS_CHAR_IN_ANY_CAR( g_U11081[1] ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[1], ref uVar395 );
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_CAR_DRIVE_TO_COORD( 0, uVar395, -1963.39900000, -101.02250000, 5.57650000, 5.00000000, 0, 0, 2, 4.00000000, -1 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( g_U11081[1], uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                            GET_GAME_TIMER( ref l_U1226[1] );
                            l_U1218[1] = 1;
                        }
                    }
                }
            }
        }
        if ((l_U1215[1]) AND (l_U1215[0]))
        {
            l_U454 = 4;
        }
        break;
        case 4:
        if (NOT sub_47642())
        {
            if (NOT l_U1206)
            {
                if (l_U1200)
                {
                    if (NOT (sub_22767( l_U1051 )))
                    {
                        sub_21162( "E1B6_GREN", ref l_U1057, 6, 1 );
                        l_U1206 = 1;
                    }
                }
                else
                {
                    l_U1206 = 1;
                }
            }
            else if (NOT l_U1201)
            {
                if ((NOT (sub_22767( l_U1057 ))) AND ((NOT (sub_22767( l_U1051 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
                {
                    sub_21162( "E1J6_BYEBS", ref l_U936, 6, 1 );
                    PRINT_HELP( "JM6_BBHP" );
                    l_U1201 = 1;
                }
            }
            else if (NOT l_U1202)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "JM6_BBHP" )))
                {
                    PRINT_HELP( "JM6_BHP2" );
                    l_U1202 = 1;
                }
            }
            else if (NOT l_U1225)
            {
                if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
                {
                    if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( g_U11081[0], -1949.48400000, -56.49720000, 6.48700000, 5.00000000, 2.00000000, 2.00000000, 0 ))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( g_U11081[1], -1949.48400000, -56.49720000, 6.48700000, 5.00000000, 2.00000000, 2.00000000, 0 ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1951.10500000, -57.90700000, 6.43860000, 6.00000000, 3.00000000, 2.00000000, 0 ))
                                {
                                    sub_21162( "E1J6_SIDE", ref l_U936, 6, 1 );
                                    l_U1225 = 1;
                                }
                            }
                        }
                    }
                }
            };;;;
        }
        if (sub_47642())
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                SET_CHAR_DECISION_MAKER( g_U11081[0], l_U881 );
                SET_CHAR_RELATIONSHIP( g_U11081[0], 5, 24 );
                SET_COMBAT_DECISION_MAKER( g_U11081[0], l_U878 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
                sub_54506( ref g_U11081[0], 28 );
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                SET_CHAR_DECISION_MAKER( g_U11081[1], l_U881 );
                SET_CHAR_RELATIONSHIP( g_U11081[1], 5, 24 );
                SET_COMBAT_DECISION_MAKER( g_U11081[1], l_U878 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 0 );
                sub_54506( ref g_U11081[1], 29 );
            }
            l_U455 = 1;
            l_U454 = 12;
        }
        else if (sub_27543())
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1953.39800000, -62.42890000, 6.20650000, 3, -2, 0.50000000 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -1951.72500000, -63.25090000, 6.20650000, -2 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U454 = 5;
            }
        }
        break;
        case 9: break;
        case 5:
        if (NOT l_U1212[0])
        {
            if (NOT l_U1136)
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                {
                    GET_INTERIOR_FROM_CHAR( g_U11081[0], ref iVar3 );
                    if (iVar3 != nil)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT sub_47838())
                            {
                                if (l_U456[1]._fU4)
                                {
                                    sub_21162( "E1J6_THOUS", ref l_U936, 6, 1 );
                                    SET_PED_IS_BLIND_RAGING( sub_2854(), 1 );
                                    l_U1136 = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                GET_INTERIOR_FROM_CHAR( g_U11081[0], ref iVar3 );
                if (iVar3 != nil)
                {
                    if (sub_65086())
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1949.48000000, -63.25110000, 6.20650000, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1204 = 1;
                        l_U1212[0] = 1;
                    }
                    else if (sub_65275())
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -249081380, 63581, 65468, 7, 1, -1.00000000 );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1954.38400000, -66.76240000, 6.20650000, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1205 = 1;
                        l_U1212[0] = 1;
                    }
                }
            }
        }
        else if (NOT l_U1136)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT sub_47838())
                {
                    if (l_U456[1]._fU4)
                    {
                        sub_21162( "E1J6_THOUS", ref l_U936, 6, 1 );
                        SET_PED_IS_BLIND_RAGING( sub_2854(), 1 );
                        l_U1136 = 1;
                    }
                }
            }
        }
        if (sub_20896( g_U11081[0], 1, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                SET_CHAR_DECISION_MAKER( g_U11081[0], l_U881 );
                SET_CHAR_RELATIONSHIP( g_U11081[0], 5, 24 );
                if (l_U1204)
                {
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( g_U11081[0], -1949.37900000, -63.04770000, 6.20650000, 2.30000000 );
                }
                else
                {
                    sub_54506( ref g_U11081[0], 25 );
                }
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 35.00000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1212[0] = 0;
                l_U454 = 6;
            }
        }
        break;
        case 6:
        if (NOT l_U1136)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT sub_47838())
                {
                    if (l_U456[1]._fU4)
                    {
                        sub_21162( "E1J6_THOUS", ref l_U936, 6, 1 );
                        SET_PED_IS_BLIND_RAGING( sub_2854(), 1 );
                        l_U1136 = 1;
                    }
                }
            }
        }
        if (NOT l_U1212[0])
        {
            if (l_U1204)
            {
                uVar4[0] = {l_U456[7]};
                uVar4[1] = {l_U456[8]};
                uVar4[2] = {l_U456[9]};
                if (sub_65990( ref uVar4, 3, 3, 0, 1 ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 1 );
                        SET_CHAR_DECISION_MAKER( g_U11081[0], l_U880 );
                        REMOVE_CHAR_DEFENSIVE_AREA( g_U11081[0] );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1947.24000000, -69.27800000, 6.20650000, 3, -2, 0.50000000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1947.68200000, -75.23751000, 6.20820000, 3, -1 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1208 = {-1947.68200000, -75.23751000, 6.20820000};
                        l_U1211 = 55.78480000;
                        l_U1212[0] = 1;
                    }
                    else
                    {
                        l_U454 = 8;
                    }
                }
            }
            else if (l_U1205)
            {
                uVar4[0] = {l_U456[1]};
                uVar4[1] = {l_U456[2]};
                uVar4[2] = {l_U456[6]};
                if (sub_65990( ref uVar4, 3, 3, 0, 1 ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 1 );
                        SET_CHAR_DECISION_MAKER( g_U11081[0], l_U880 );
                        REMOVE_CHAR_DEFENSIVE_AREA( g_U11081[0] );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1953.16900000, -73.24550000, 6.20650000, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        REMOVE_COVER_POINT( l_U968[1] );
                        l_U1208 = {-1953.68100000, -74.68360000, 6.20650000};
                        l_U1211 = 287.65480000;
                        l_U1212[0] = 1;
                    }
                    else
                    {
                        l_U454 = 8;
                    }
                }
            }
        }
        else if (sub_20896( g_U11081[0], 1, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                SET_CHAR_DECISION_MAKER( g_U11081[0], l_U881 );
                SET_CHAR_RELATIONSHIP( g_U11081[0], 5, 24 );
                if (l_U1204)
                {
                    sub_54506( ref g_U11081[0], 18 );
                }
                else
                {
                    sub_54506( ref g_U11081[0], 17 );
                }
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 3.00000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1212[0] = 0;
                l_U454 = 7;
            }
            else
            {
                l_U454 = 8;
            }
        }
        break;
        case 7:
        if (sub_66904( 1 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 1 );
                SET_CHAR_DECISION_MAKER( g_U11081[0], l_U880 );
                REMOVE_CHAR_DEFENSIVE_AREA( g_U11081[0] );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U1208._fU0, l_U1208._fU4, l_U1208._fU8, 3, -1 );
                TASK_ACHIEVE_HEADING( 0, l_U1211 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U454 = 8;
            }
            else
            {
                l_U454 = 8;
            }
        }
        break;
        case 8:
        if (NOT l_U1224)
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (sub_20896( g_U11081[0], 1, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2854(), g_U11081[0], 5.00000000, 5.00000000, 2.00000000, 0 ))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT sub_47838())
                            {
                                sub_21162( "E1J6_TWAIT", ref l_U936, 6, 1 );
                                l_U1224 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (IS_CHAR_DEAD( l_U456[0]._fU0 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                {
                    if (NOT l_U1221[0])
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1952.98700000, -58.11970000, 5.37700000, 2, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( g_U11081[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1221[0] = 1;
                    }
                }
            }
            if (NOT (sub_43469( sub_2854() )))
            {
                sub_15594( 0 );
                l_U454 = 12;
            }
        }
        break;
        case 10:
        if (l_U1111)
        {
            ;
        }
        break;
        case 11:
        if (NOT l_U1111)
        {
            if (NOT (IS_CHAR_DEAD( g_U11081[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
            }
            if (NOT (IS_CHAR_DEAD( g_U11081[1] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 0 );
            }
            sub_15594( 0 );
            l_U454 = 12;
        }
        break;
    }
    return;
}

int sub_61935()
{
    int I;

    if ((l_U1197[1]) AND (l_U1197[0]))
    {
        return 1;
    }
    else
    {
        for ( I = 0; I < g_U11081; I++ )
        {
            if (NOT l_U1197[I])
            {
                if (NOT (IS_CHAR_DEAD( g_U11081[I] )))
                {
                    if (((LOCATE_CHAR_ANY_MEANS_3D( g_U11081[I], -1942.67200000, -84.70430000, 6.71810000, 36.00000000, 25.00000000, 2.00000000, 0 )) AND (NOT l_U1200)) || (((LOCATE_CHAR_ANY_MEANS_3D( g_U11081[I], -1954.17100000, -94.22329000, 6.77030000, 24.00000000, 11.00000000, 2.00000000, 0 )) AND (NOT l_U1200)) || ((LOCATE_CHAR_ANY_MEANS_3D( g_U11081[I], -1938.99900000, -78.06070000, 6.75000000, 1.00000000, 5.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( g_U11081[I], -1948.45600000, -83.80420000, 6.72629900, 11.00000000, 1.00000000, 2.00000000, 0 )))))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1952.79900000, -101.77150000, 6.72720000, 10.00000000, 4.00000000, 2.00000000, 0 ))
                        {
                            if (sub_15503())
                            {
                                sub_15626( g_U11081[I], 1 );
                                l_U1197[I] = 1;
                            }
                        }
                        else
                        {
                            sub_15626( g_U11081[I], 1 );
                            l_U1197[I] = 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_65086()
{
    if (NOT l_U1083)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1953.84200000, -68.83280000, 7.21150000, 2.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1083 = 1;
        }
    }
    return l_U1083;
}

void sub_65275()
{
    if (NOT l_U1085)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2854(), -1947.60700000, -62.85510000, 7.31620000, 2.00000000, 1.00000000, 2.00000000, 0 ))
        {
            l_U1085 = 1;
        }
    }
    return l_U1085;
}

int sub_65990(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
{
    int I;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((NOT bParam4) || ((uParam0^)[I]._fU4))
        {
            if ((IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )) || (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                iVar8++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar8++;
                }
            }
        }
    }
    if (iVar8 >= iParam2)
    {
        return 1;
    }
    return 0;
}

int sub_66904(unknown uParam0)
{
    unknown[15] uVar3;
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
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;

    array(ref uVar3, 15);
    switch (uParam0)
    {
        case 1:
        uVar3[0] = {l_U456[7]};
        uVar3[1] = {l_U456[8]};
        uVar3[2] = {l_U456[9]};
        uVar3[3] = {l_U456[1]};
        uVar3[4] = {l_U456[2]};
        uVar3[5] = {l_U456[6]};
        if (sub_65990( ref uVar3, 6, 6, 0, 1 ))
        {
            return 1;
        }
        break;
        default:
    }
    return 0;
}

