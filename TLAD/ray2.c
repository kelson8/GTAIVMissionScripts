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
    l_U354 = 0;
    l_U364 = 8000;
    l_U368 = 0;
    l_U369 = 500;
    l_U370 = 5000;
    l_U372 = 60;
    l_U373 = 30000;
    l_U374 = 15000;
    l_U382 = {0.00000000, 0.00000000, 0.00000000};
    l_U385 = {0.00000000, 0.00000000, 0.00000000};
    l_U400 = 0;
    l_U401 = 0;
    l_U402 = 0;
    l_U419 = 0;
    l_U420 = 0;
    l_U421 = 0;
    l_U422 = 0;
    l_U423 = 0;
    l_U424 = 0;
    l_U425 = 0;
    l_U426 = 0;
    l_U427 = 0;
    l_U428 = 0;
    l_U429 = 0;
    l_U430 = 0;
    l_U431 = 0;
    l_U432 = 0;
    l_U433 = 0;
    l_U434 = 1;
    l_U442 = 0;
    l_U443 = 0;
    l_U444 = 0;
    l_U445 = 0;
    l_U446 = 0;
    l_U447 = 0;
    l_U448 = 0;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U452 = 0;
    l_U465 = 0;
    l_U466 = 0;
    l_U467 = 0;
    l_U468 = 0;
    l_U469 = 0;
    l_U470 = 0;
    l_U471 = 1;
    l_U472 = 0;
    l_U473 = 0;
    l_U474 = 0;
    l_U475 = 0;
    l_U476 = 0;
    l_U477 = 0;
    l_U478 = 0;
    l_U479 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U527 = {-95.49130000 + 2, 881.07940000, 13.94410000};
    l_U530 = {0, 0, 0};
    l_U533 = {65429, 821, 20};
    l_U536 = {65342, 1379, 20};
    l_U539 = 0;
    l_U837 = -911507684;
    l_U838 = 1613899343;
    l_U839 = -479595866;
    l_U840 = -1639359785;
    l_U841 = -1639359785;
    l_U842 = 897868981;
    l_U843 = 897868981;
    l_U844 = 510389335;
    l_U845 = -302362397;
    l_U846 = 510389335;
    l_U847 = -183203150;
    l_U848 = 870892404;
    l_U849 = 1977784957;
    l_U850 = -268530289;
    l_U878 = 1376298265;
    l_U879 = 1376298265;
    l_U880 = 1376298265;
    l_U881 = 1376298265;
    l_U882 = 584879743;
    l_U883 = 353883353;
    l_U884 = -570033273;
    l_U897 = 0;
    l_U898 = 0.00000000;
    l_U899 = {-107.46060000, 762.67580000, 15.94530000};
    l_U903 = 0;
    l_U904 = 0;
    l_U924 = 0;
    l_U925 = 0;
    l_U977 = 0;
    l_U985 = 0;
    l_U989 = 0;
    l_U1034 = 0;
    l_U1035 = 0;
    l_U1036 = 0;
    l_U1037 = 0;
    l_U1042 = 0;
    l_U1057 = 0;
    l_U1061 = 5000;
    SET_MISSION_FLAG( 1 );
    sub_1148( "ASHLEY2", 0 );
    sub_1148( "E1R2AUD", 6 );
    sub_1307();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_5484();
    l_U362 = 0;
    l_U400 = 1;
    while (l_U400)
    {
        switch (l_U362)
        {
            case 0:
            sub_6507();
            break;
            case 1:
            sub_11052();
            break;
            case 2:
            sub_13926();
            break;
            case 3:
            sub_24325();
            break;
            case 4:
            sub_25927();
            break;
            case 5:
            sub_45302();
            break;
            case 6:
            sub_57686();
            break;
            case 7:
            sub_60172();
            break;
            case 8:
            sub_84209();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U402 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U1063 );
            sub_85084();
        }
        else if (l_U401 == 1)
        {
            CLEAR_HELP();
            sub_91986();
        }
    }
    sub_3514();
    return;
}

void sub_1148(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_1184())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_1184()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_1307()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1328();
        l_U401 = 1;
        l_U362 = -1;
        sub_3514();
    }
    return;
}

void sub_1328()
{
    sub_1337();
    return;
}

void sub_1337()
{
    int iVar2;

    iVar2 = 5;
    sub_1351( iVar2 );
    sub_2492( iVar2 );
    return;
}

void sub_1351(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_1395();
        sub_1603();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1728();
            sub_1780();
            g_U11095 = 1;
        }
    }
    sub_1873();
    sub_2012();
    uVar5 = sub_2125( uParam0 );
    sub_2401( uVar5, 0 );
    return;
}

void sub_1395()
{
    if (g_U10993)
    {
        return;
    }
    sub_1422( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1543();
    }
    return;
}

void sub_1422(int iParam0)
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

void sub_1543()
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

void sub_1603()
{
    sub_1612();
    return;
}

void sub_1612()
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

void sub_1728()
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

void sub_1780()
{
    sub_1789();
    return;
}

void sub_1789()
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

void sub_1873()
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

void sub_2012()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2034();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_2034()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2125(unknown uParam0)
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
    sub_2356( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2356(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2401(int iParam0, boolean bParam1)
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

void sub_2492(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2501();
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
    if (NOT sub_3261())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_3327();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2501()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_2539( 5, g_U572[I] )) == 1))
        {
            if ((sub_2539( 1, g_U572[I] )) != 0)
            {
                sub_2825( I );
            }
        }
    }
    if (NOT sub_2991())
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

int sub_2539(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2825(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2910( g_U572 - 1 );
    return;
}

void sub_2910(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2991()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2539( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3261()
{
    if ((g_U10959._fU8 == 1) AND (g_U10959._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_3327()
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

void sub_3514()
{
    int I;

    sub_3523();
    sub_3548();
    sub_3628();
    sub_3708();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    g_U10956 = 0;
    g_U10460 = 1;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_POLICE_RADAR_BLIPS( 1 );
    SET_PED_IS_BLIND_RAGING( sub_3862(), 0 );
    RELEASE_SOUND_ID( l_U375 );
    RELEASE_SOUND_ID( l_U376 );
    SWITCH_PED_PATHS_ON( -136.57000000, 750.12000000, 12.87000000, -76.24000000, 773.11000000, 13.68000000 );
    sub_3974();
    sub_4315();
    if (DOES_OBJECT_EXIST( l_U902 ))
    {
        DELETE_OBJECT( ref l_U902 );
    }
    if (DOES_PICKUP_EXIST( l_U391 ))
    {
        REMOVE_PICKUP( l_U391 );
    }
    if (DOES_PICKUP_EXIST( l_U392 ))
    {
        REMOVE_PICKUP( l_U392 );
    }
    if (DOES_PICKUP_EXIST( l_U393 ))
    {
        REMOVE_PICKUP( l_U393 );
    }
    if (DOES_PICKUP_EXIST( l_U399 ))
    {
        REMOVE_PICKUP( l_U399 );
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_PICKUP_EXIST( l_U394[I] ))
        {
            REMOVE_PICKUP( l_U394[I] );
        }
    }
    sub_4924();
    if (DOES_BLIP_EXIST( l_U540 ))
    {
        REMOVE_BLIP( l_U540 );
    }
    if (DOES_BLIP_EXIST( l_U541 ))
    {
        REMOVE_BLIP( l_U541 );
    }
    if (DOES_BLIP_EXIST( l_U542 ))
    {
        REMOVE_BLIP( l_U542 );
    }
    if (DOES_BLIP_EXIST( l_U544 ))
    {
        REMOVE_BLIP( l_U544 );
    }
    if (DOES_BLIP_EXIST( l_U547 ))
    {
        REMOVE_BLIP( l_U547 );
    }
    if (DOES_BLIP_EXIST( l_U546 ))
    {
        REMOVE_BLIP( l_U546 );
    }
    if (DOES_BLIP_EXIST( l_U545 ))
    {
        REMOVE_BLIP( l_U545 );
    }
    if (DOES_CHAR_EXIST( l_U816 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U816 );
    }
    if (DOES_CHAR_EXIST( l_U817 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U817 );
    }
    if (DOES_CHAR_EXIST( l_U818 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U818 );
    }
    if (DOES_CHAR_EXIST( l_U819 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U819 );
    }
    if (DOES_CHAR_EXIST( l_U796 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U796 );
    }
    if (DOES_VEHICLE_EXIST( l_U869 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U869 );
    }
    if (NOT (IS_CAR_DEAD( l_U867 )))
    {
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U867, 0 );
    }
    if (DOES_VEHICLE_EXIST( l_U867 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U867 );
    }
    DONT_SUPPRESS_CAR_MODEL( l_U882 );
    DONT_SUPPRESS_CAR_MODEL( l_U878 );
    DONT_SUPPRESS_CAR_MODEL( l_U879 );
    DONT_SUPPRESS_CAR_MODEL( l_U880 );
    DONT_SUPPRESS_CAR_MODEL( l_U881 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3523()
{
    g_U39126 = 0;
    return;
}

void sub_3548()
{
    int I;

    if (l_U677 != 0)
    {
        for ( I = 0; I <= (l_U677 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U651[I] );
        }
    }
    l_U677 = 0;
    return;
}

void sub_3628()
{
    int I;

    if (l_U689 != 0)
    {
        for ( I = 0; I <= (l_U689 - 1); I++ )
        {
            REMOVE_ANIMS( l_U678[I] );
        }
    }
    l_U689 = 0;
    return;
}

void sub_3708()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U885[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U885[I] );
        }
    }
    return;
}

void sub_3862()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3974()
{
    int I;

    if (NOT (IS_CHAR_DEAD( l_U813 )))
    {
        if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( l_U813 ))))
        {
            DELETE_CHAR( ref l_U813 );
        }
        else
        {
            SET_CHAR_KEEP_TASK( l_U813, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U813 );
        }
    }
    I = 0;
    for ( I = 0; I <= 0; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U814[I] )))
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( l_U814[I] ))))
            {
                DELETE_CHAR( ref l_U814[I] );
            }
            else
            {
                SET_CHAR_KEEP_TASK( l_U814[I], 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U814[I] );
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U870[I] )))
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CAR_ON_SCREEN( l_U870[I] ))))
            {
                DELETE_CAR( ref l_U870[I] );
            }
            else
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U870[I] );
            }
        }
    }
    return;
}

void sub_4315()
{
    int I;

    I = 0;
    for ( I = 0; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U701[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U701[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701[I] );
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U710[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U710[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U710[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U697[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U697[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U697[I] );
        }
    }
    for ( I = 0; I <= 15; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U725[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U725[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U725[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U742[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U742[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U742[I] );
        }
    }
    return;
}

void sub_4924()
{
    g_U968 = -1;
    return;
}

void sub_5484()
{
    sub_5503( "E1R2AUD" );
    sub_5632( 0, sub_3862(), "Johnny", 0 );
    l_U1062 = sub_3862();
    l_U1063 = sub_5791();
    l_U375 = GET_SOUND_ID();
    l_U376 = GET_SOUND_ID();
    g_U10460 = 0;
    ADD_SCENARIO_BLOCKING_AREA( -124.00000000, 752.40000000, 12.00000000, -90.25000000, 763.77000000, 16.00000000 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -98.83999000, 854.75000000, 26.10000000, 0, 0, 0, ref l_U391 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U391, "museum2_hall" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -99.18500000, 767.20000000, 15.49000000, 0, 0, 90, ref l_U392 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U392, "museum2_loading" );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -102.61000000, 844.64000000, 18.75300000, 270.52000000, 0, 77.04000000, ref l_U393 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U393, "museum2_hall" );
    while (NOT sub_6114())
    {
        WAIT( 0 );
    }
    sub_6229( "missray2" );
    while (NOT sub_6281())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5503(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_5522();
    return;
}

void sub_5522()
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

void sub_5632(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5716( "\n PED NUMBER ", uParam0 );
    sub_5756( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5716(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5756(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5791()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_6114()
{
    int I;

    if (l_U677 != 0)
    {
        for ( I = 0; I <= (l_U677 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U651[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_6229(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U678[l_U689] = uParam0;
    l_U689++;
    return;
}

int sub_6281()
{
    int I;

    if (l_U689 != 0)
    {
        for ( I = 0; I <= (l_U689 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U678[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_6507()
{
    if (IS_BIT_SET( g_U10959._fU0, 7 ))
    {
        ;
    }
    else if (g_U39149[17] < 1)
    {
        CLEAR_AREA( l_U527._fU0, l_U527._fU4, l_U527._fU8, 200, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1062 )))
        {
            SET_CHAR_COORDINATES( l_U1062, -392.07390000, 1155, 13.55380000 );
            SET_CHAR_HEADING( l_U1062, 268.58920000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        sub_6665();
        while (NOT (sub_6808( ref l_U867, -392.07390000, 1156.71500000, 13.55380000, 268.58920000 )))
        {
            WAIT( 0 );
        }
        l_U478 = 1;
        LOAD_SCENE( -392.07390000, 1156.71500000, 13.55380000 );
        if (NOT (IS_CAR_DEAD( l_U867 )))
        {
            WARP_CHAR_INTO_CAR( l_U1062, l_U867 );
            SET_CAR_ON_GROUND_PROPERLY( l_U867 );
            GIVE_PED_HELMET_WITH_OPTS( l_U1062, 0 );
            SET_CAR_ENGINE_ON( l_U867, 1, 1 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        sub_8503();
    }
    else
    {
        sub_8545();
        sub_8721();
        sub_9436();
        sub_10461();
        SET_CHAR_COORDINATES( l_U1062, -120.57320000, 792.11740000 + 2.00000000, 24.93190000 );
        SET_CHAR_HEADING( l_U1062, 356.41670000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1062, "Museum2_Hall" );
        WAIT( 1000 );
        l_U362 = 4;
    }
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 120001, ref l_U373 );
    GENERATE_RANDOM_INT_IN_RANGE( 5000, 25000, ref l_U374 );
    SETTIMERA( 0 );
    if (l_U362 < 4)
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_5791(), 1, 1, 1 );
        l_U362++;
    }
    return;
}

void sub_6665()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_3862() )))
    {
        GET_CHAR_COORDINATES( sub_3862(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_6721(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_6721()
{
    return 301427732;
}

int sub_6808(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_6721();
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
    sub_6948( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_6948(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_8503()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_8545()
{
    sub_8559( l_U878 );
    sub_8559( l_U879 );
    sub_8559( l_U880 );
    sub_8559( l_U881 );
    while (NOT sub_6114())
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U878 );
    SUPPRESS_CAR_MODEL( l_U879 );
    SUPPRESS_CAR_MODEL( l_U880 );
    SUPPRESS_CAR_MODEL( l_U881 );
    return;
}

void sub_8559(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U651[l_U677] = uParam0;
    l_U677++;
    return;
}

void sub_8721()
{
    CREATE_CAR( l_U881, -81.38960000, 843.25590000, 14.20580000 - 1.00000000, ref l_U851[0], 1 );
    SET_CAR_HEADING( l_U851[0], 297.78990000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[0] );
    CHANGE_CAR_COLOUR( l_U851[0], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[0], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[0], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[0], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[0], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[0] );
    CREATE_CAR( l_U881, -101.15240000, 885.17870000, 14.18850000, ref l_U851[1], 1 );
    SET_CAR_HEADING( l_U851[1], 91.54040000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[1] );
    CHANGE_CAR_COLOUR( l_U851[1], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[1], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[1], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[1], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[1], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[1] );
    CREATE_CAR( l_U881, -88.40040000, 887.00630000, 14.02640000, ref l_U851[2], 1 );
    SET_CAR_HEADING( l_U851[2], 7.69840000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[2] );
    CHANGE_CAR_COLOUR( l_U851[2], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[2], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[2], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[2], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[2], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[2] );
    CREATE_CAR( l_U881, -93.38290000, 895.45120000, 14.32980000, ref l_U851[3], 1 );
    SET_CAR_HEADING( l_U851[3], 53.18850000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[3] );
    CHANGE_CAR_COLOUR( l_U851[3], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[3], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[3], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[3], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[3], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[3] );
    return;
}

void sub_9436()
{
    CREATE_CAR( l_U879, -110.88070000, 755.10860000, 13.60010000, ref l_U861[0], 1 );
    SET_CAR_HEADING( l_U861[0], 114.54670000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[0] );
    CHANGE_CAR_COLOUR( l_U861[0], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U861[0], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[0], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[0], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[0], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[0] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[0], 1 );
    CREATE_CAR( l_U878, -104.27780000, 755.96310000, 14.32950000 - 1.00000000, ref l_U861[1], 1 );
    SET_CAR_HEADING( l_U861[1], 91.67760000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[1] );
    CHANGE_CAR_COLOUR( l_U861[1], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U861[1], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[1], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[1], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[1], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[1] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[1], 1 );
    CREATE_CAR( l_U879, -98.14050000, 755.48470000, 14.34680000 - 1.00000000, ref l_U861[2], 1 );
    SET_CAR_HEADING( l_U861[2], 77.05760000 + 180 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[2] );
    CHANGE_CAR_COLOUR( l_U861[2], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U861[2], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[2], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[2], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[2], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[2] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[2], 1 );
    CREATE_CAR( l_U878, -61.28390000, 803.44570000, 13.52400000, ref l_U861[3], 1 );
    SET_CAR_HEADING( l_U861[3], 179.16410000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[3] );
    CHANGE_CAR_COLOUR( l_U861[3], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U861[3], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[3], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[3], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[3], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[3] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[3], 1 );
    CREATE_CAR( l_U880, -27.12660000, 772.74490000, 13.71190000, ref l_U861[4], 1 );
    SET_CAR_HEADING( l_U861[4], 89.58290000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[4] );
    CHANGE_CAR_COLOUR( l_U861[4], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U861[4], 0, 0 );
    FORCE_CAR_LIGHTS( l_U861[4], 2 );
    SET_CAR_LIGHT_MULTIPLIER( l_U861[4], 2.20000000 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[4], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[4], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U861[4], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U861[4] );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[4], 1 );
    return;
}

void sub_10461()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U890 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U889 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U888 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U892 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U892, 0 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U891 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U891, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U891, 1 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U893 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U893, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U893, 2 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U894 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U895 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U895, 0 );
    sub_8559( l_U837 );
    sub_8559( l_U838 );
    sub_8559( l_U839 );
    sub_8559( l_U840 );
    sub_8559( l_U841 );
    sub_8559( l_U842 );
    sub_8559( l_U843 );
    sub_8559( l_U844 );
    sub_8559( l_U845 );
    sub_8559( l_U850 );
    if (g_U39149[17] == 1)
    {
        LOAD_ALL_OBJECTS_NOW();
    }
    while (NOT sub_6114())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    return;
}

void sub_11052()
{
    if (l_U422 == 0)
    {
        if (l_U480[3] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_01", 7500, 1 );
            l_U480[3] = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U540 )))
        {
            ADD_BLIP_FOR_COORD( l_U527._fU0, l_U527._fU4, l_U527._fU8, ref l_U540 );
            SET_ROUTE( l_U540, 1 );
        }
        l_U422 = 1;
    }
    if (l_U419 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, l_U527._fU0, l_U527._fU4, l_U527._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            sub_8545();
            sub_8721();
            sub_9436();
            sub_10461();
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 0, 0.00000000 );
            ADD_SCENARIO_BLOCKING_AREA( -136.57000000, 750.12000000, 12.87000000, -76.24000000, 773.11000000, 13.68000000 );
            SWITCH_PED_PATHS_OFF( -136.57000000, 750.12000000, 12.00000000, -76.24000000, 773.11000000, 16.00000000 );
            l_U419 = 1;
        }
    }
    if ((l_U434 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U1063, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U548 ))
        {
            REMOVE_BLIP( l_U548 );
        }
        if (DOES_BLIP_EXIST( l_U540 ))
        {
            REMOVE_BLIP( l_U540 );
        }
        if (l_U480[1] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_07", 7500, 1 );
            l_U480[1] = 1;
        }
        l_U434 = 0;
    }
    if ((l_U434 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U540 )))
        {
            ADD_BLIP_FOR_COORD( l_U527._fU0, l_U527._fU4, l_U527._fU8, ref l_U540 );
            SET_ROUTE( l_U540, 1 );
        }
        if (l_U480[3] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_01", 7500, 1 );
            l_U480[3] = 1;
        }
        l_U434 = 1;
    }
    if (l_U434 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 0, 0.00000000 );
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -97.33060000, 879.78090000, 13.81980000 + 2.00000000, 2.50000000, 2.50000000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, l_U527._fU0, l_U527._fU4, l_U527._fU8 + 2.00000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U540 ))
            {
                REMOVE_BLIP( l_U540 );
            }
            if (DOES_BLIP_EXIST( l_U543 ))
            {
                REMOVE_BLIP( l_U543 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U546 )))
            {
                ADD_BLIP_FOR_COORD( -101.39820000, 852.47740000, 17.62490000, ref l_U546 );
            }
            l_U362++;
        }
    }
    else
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, 65439, 878, 15, 1, 0.00000000 );
    }
    sub_11981();
    sub_12490();
    sub_13421();
    if (((NOT (IS_CHAR_INJURED( g_U11081[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] )))) || (sub_13783()))
    {
        l_U1042 = 1;
    }
    return;
}

void sub_11981()
{
    int I;

    if (l_U435[0] == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U861[0] )))
        {
            GET_CAR_HEALTH( l_U861[0], ref l_U366 );
            if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1062, l_U861[0], 7.50000000, 7.50000000, 7.50000000, 0 ))) AND ((NOT (IS_CHAR_TOUCHING_VEHICLE( l_U1062, l_U861[0] ))) AND ((NOT (IS_CHAR_IN_CAR( l_U1062, l_U861[0] ))) AND (l_U366 < 750))))
            {
                EXPLODE_CAR( l_U861[0], 1, 0 );
                l_U435[0] = 1;
            }
            if (IS_CHAR_IN_CAR( l_U1062, l_U861[0] ))
            {
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[0], 0 );
                l_U435[0] = 1;
            }
        }
    }
    for ( I = 1; I <= 4; I++ )
    {
        if (l_U435[0] == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U861[I] )))
            {
                GET_CAR_HEALTH( l_U861[I], ref l_U366 );
                if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1062, l_U861[I], 8.00000000, 8.00000000, 8.00000000, 0 ))) AND ((NOT (IS_CHAR_TOUCHING_VEHICLE( l_U1062, l_U861[I] ))) AND ((NOT (IS_CHAR_IN_CAR( l_U1062, l_U861[I] ))) AND (l_U366 < (300 - ((4) XOR (I)))))))
                {
                    EXPLODE_CAR( l_U861[I], 1, 0 );
                    l_U435[I] = 1;
                }
                if (IS_CHAR_IN_CAR( l_U1062, l_U861[I] ))
                {
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U861[I], 0 );
                    l_U435[I] = 1;
                }
            }
        }
    }
    return;
}

void sub_12490()
{
    if ((l_U401 == 0) AND (DOES_CHAR_EXIST( l_U690 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U690, l_U1062, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U690 )))
            {
                SET_CHAR_RELATIONSHIP( l_U690, 5, 0 );
                SET_CHAR_KEEP_TASK( l_U690, 1 );
            }
            if (NOT IS_SCREEN_FADING_OUT())
            {
                PRINT_NOW( "RB2_FAIL_05", 7500, 1 );
            }
            sub_12655( 5, "E1R2_FAIL4", "E1R2AUD", 0 );
            l_U362 = -1;
            l_U401 = 1;
        }
        else if ((IS_CHAR_INJURED( l_U690 )) AND (DOES_CHAR_EXIST( l_U690 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U690 )))
            {
                SET_CHAR_RELATIONSHIP( l_U690, 5, 0 );
                SET_CHAR_KEEP_TASK( l_U690, 1 );
            }
            if (NOT IS_SCREEN_FADING_OUT())
            {
                PRINT_NOW( "RB2_FAIL_06", 7500, 1 );
            }
            sub_12655( 5, "E1R2_FAIL4", "E1R2AUD", 0 );
            l_U362 = -1;
            l_U401 = 1;
        }
    }
    return;
}

void sub_12655(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_12699( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_12699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_13421()
{
    unknown uVar2;
    int iVar3;

    if (l_U478 == 0)
    {
        if (IS_CHAR_ON_ANY_BIKE( l_U1062 ))
        {
            GET_CAR_CHAR_IS_USING( l_U1062, ref uVar2 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                if (sub_13489( uVar2 ))
                {
                    GET_CAR_HEALTH( uVar2, ref iVar3 );
                    if ((NOT (IS_CAR_A_MISSION_CAR( uVar2 ))) AND ((NOT (IS_CAR_TYRE_BURST( uVar2, 7 ))) AND ((NOT (IS_CAR_TYRE_BURST( uVar2, 6 ))) AND ((iVar3 > 300) AND (NOT (IS_CAR_ON_FIRE( uVar2 )))))))
                    {
                        l_U867 = uVar2;
                        SET_CAR_AS_MISSION_CAR( l_U867 );
                        SET_CAR_HEALTH( l_U867, 2000 );
                        SET_ENGINE_HEALTH( l_U867, 2000 );
                        SET_PETROL_TANK_HEALTH( l_U867, 2000 );
                        GET_CAR_MODEL( l_U867, ref l_U882 );
                        SUPPRESS_CAR_MODEL( l_U882 );
                        l_U478 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_13489(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref iVar3 );
        if ((iVar3 == -359167535) || ((iVar3 == 802082487) || ((iVar3 == 584879743) || ((iVar3 == -408052231) || ((iVar3 == -570033273) || ((iVar3 == 301427732) || (iVar3 == -159126838)))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_13783()
{
    if (NOT sub_13792())
    {
        return 0;
    }
    return g_U11090;
}

int sub_13792()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_13926()
{
    if (l_U450 == 0)
    {
        PRINT_NOW( "RB2_COMMAND_11", 7500, 1 );
        sub_13975();
        SETTIMERA( 0 );
        l_U450 = 1;
    }
    if (sub_13783())
    {
        l_U1036 = 1;
    }
    if (l_U451 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.39820000, 852.47740000, 17.62490000 + 1.50000000, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            PRINT_NOW( "RB2_COMMAND_12", 7500, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U545 )))
            {
                ADD_BLIP_FOR_COORD( -107.45770000, 764.30180000, 14.32990000, ref l_U545 );
            }
            if (DOES_BLIP_EXIST( l_U546 ))
            {
                REMOVE_BLIP( l_U546 );
            }
            l_U451 = 1;
        }
    }
    sub_17041();
    if ((l_U451 == 1) AND (l_U985 == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -108.37780000, 845.44200000, 17.62490000, 16.20735000, 0.34835000, 10, 0 ))
        {
            sub_20311( "E1R2_ARRV", ref l_U1064, 1, 0 );
            l_U985 = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[0] ))) AND (l_U453[0] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[0], 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U650 );
            TASK_LOOK_AT_CHAR( 0, l_U1062, 5000, 0 );
            CLOSE_SEQUENCE_TASK( l_U650 );
            TASK_PERFORM_SEQUENCE( l_U797[0], l_U650 );
            CLEAR_SEQUENCE_TASK( l_U650 );
            SAY_AMBIENT_SPEECH( l_U797[0], "GENERIC_HI", 1, 0, 0 );
            l_U453[0] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[0] ))) AND ((l_U453[1] == 0) AND (l_U453[0] == 1)))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[0], 6.00000000, 6.00000000, 6.00000000, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U797[1] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_CHAT_WITH_CHAR( 0, l_U797[1], 1, 1 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( l_U797[0], l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                TASK_CHAT_WITH_CHAR( l_U797[1], l_U797[0], 0, 1 );
            }
            SAY_AMBIENT_SPEECH( l_U797[0], "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
            l_U453[1] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[2] ))) AND (l_U453[2] == 0))
    {
        if ((NOT (sub_21801( l_U1064 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[2], 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            TASK_LOOK_AT_CHAR( l_U797[2], l_U1062, 5000, 0 );
            sub_20311( "E1R2_WALK2", ref l_U1064, 6, 1 );
            l_U453[2] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[4] ))) AND (l_U453[3] == 0))
    {
        if ((NOT (sub_21801( l_U1064 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[4], 2.50000000, 2.50000000, 2.50000000, 0 )))
        {
            TASK_LOOK_AT_CHAR( l_U797[4], l_U1062, 6000, 0 );
            sub_20311( "E1R2_WALK3", ref l_U1064, 6, 1 );
            l_U453[3] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[8] ))) AND (l_U453[4] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[8], 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U797[8], l_U1062, 7000, 0 );
            if (IS_CHAR_ARMED( l_U1062, 4 ))
            {
                SAY_AMBIENT_SPEECH( l_U797[8], "GUN_COOL", 1, 0, 0 );
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U797[8], "FIGHT", 1, 0, 0 );
            }
            l_U453[4] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[5] ))) AND (l_U453[5] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[5], 3.00000000, 3.00000000, 3.00000000, 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U797[5], l_U1062, 7000, 0 );
            SAY_AMBIENT_SPEECH( l_U797[5], "GENERIC_HI", 1, 0, 0 );
            l_U453[5] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[9] ))) AND (l_U453[6] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[9], 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U797[9], l_U1062, 7000, 0 );
            SAY_AMBIENT_SPEECH( l_U797[9], "GANG_WATCH_THIS_GUY_SOLO", 1, 0, 0 );
            l_U453[6] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[10] ))) AND (l_U453[7] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[10], 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U797[10], l_U1062, 7000, 0 );
            if (IS_CHAR_ARMED( l_U1062, 4 ))
            {
                SAY_AMBIENT_SPEECH( l_U797[10], "GUN_COOL", 1, 0, 0 );
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U797[10], "FIGHT", 1, 0, 0 );
            }
            l_U453[7] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[14] ))) AND (l_U453[8] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[14], 1.50000000, 1.50000000, 1.50000000, 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U797[14], l_U1062, 7000, 0 );
            SAY_AMBIENT_SPEECH( l_U797[14], "GENERIC_HI", 1, 0, 0 );
            l_U453[8] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[6] ))) AND (l_U453[9] == 0))
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U797[5] ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[6], 4.00000000, 4.00000000, 3.00000000, 0 )))
        {
            SAY_AMBIENT_SPEECH( l_U797[6], "GANG_WATCH_THIS_GUY", 1, 0, 0 );
            l_U453[9] = 1;
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[7] ))) AND ((l_U453[9] == 1) AND (l_U453[10] == 0)))
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U797[6] ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U797[7], 6.00000000, 6.00000000, 3.00000000, 0 )))
        {
            SAY_AMBIENT_SPEECH( l_U797[7], "GANG_WATCH_THIS_GUY_RESP", 1, 0, 0 );
            l_U453[10] = 1;
        }
    }
    sub_23259();
    if ((sub_23940( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -107.45770000, 764.30180000, 14.32990000 + 1.50000000, 1.60000000, 1.60000000, 1.60000000, 1 )))
    {
        g_U10956 = 1;
        l_U362++;
        if (DOES_BLIP_EXIST( l_U545 ))
        {
            REMOVE_BLIP( l_U545 );
        }
        if (DOES_BLIP_EXIST( l_U546 ))
        {
            REMOVE_BLIP( l_U546 );
        }
    }
    sub_13421();
    return;
}

void sub_13975()
{
    CREATE_CHAR( 8, l_U843, -103.03010000, 845.66460000, 17.62490000, ref l_U797[0], 1 );
    SET_CHAR_HEADING( l_U797[0], 28.83440000 );
    sub_14067( l_U797[0], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[0], 1, 0 );
    sub_14434( l_U797[0], 0 );
    CREATE_CHAR( 8, l_U844, -103.82720000, 847.57520000, 17.62490000, ref l_U797[1], 1 );
    SET_CHAR_HEADING( l_U797[1], 210.56650000 );
    sub_14067( l_U797[1], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[1], 1, 0 );
    sub_14434( l_U797[1], 0 );
    TASK_SWAP_WEAPON( l_U797[1], 1 );
    CREATE_CHAR( 8, l_U844, -104.41410000, 836.54460000, 17.62490000, ref l_U797[2], 1 );
    SET_CHAR_HEADING( l_U797[2], 93.15900000 );
    sub_14067( l_U797[2], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[2], 1, 0 );
    sub_14434( l_U797[2], 2 );
    sub_5632( 3, l_U797[2], "MOBSTER_1", 0 );
    CREATE_CHAR( 8, l_U843, -108.29250000, 811.87770000, 17.62490000, ref l_U797[3], 1 );
    SET_CHAR_HEADING( l_U797[3], 166.12830000 );
    sub_14067( l_U797[3], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[3], 1, 0 );
    sub_14434( l_U797[3], 0 );
    CREATE_CHAR( 8, l_U843, -108.80250000, 809.81620000, 17.62490000, ref l_U797[4], 1 );
    SET_CHAR_HEADING( l_U797[4], 353.02460000 );
    sub_14067( l_U797[4], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[4], 1, 0 );
    sub_14434( l_U797[4], 1 );
    sub_5632( 4, l_U797[4], "MOBSTER_2", 0 );
    CREATE_CHAR( 8, l_U843, -104.32330000, 780.40080000, 17.62520000, ref l_U797[5], 1 );
    SET_CHAR_HEADING( l_U797[5], 278.94350000 );
    sub_14067( l_U797[5], 2, 1, 1, "Museum2_store" );
    SET_CHAR_RELATIONSHIP( l_U797[5], 1, 0 );
    sub_14434( l_U797[5], 3 );
    if (HAS_MODEL_LOADED( l_U850 ))
    {
        TASK_START_SCENARIO_AT_POSITION( l_U797[5], "Scenario_SmokingOutsideOffice", -104.32330000, 780.40080000, 17.62520000, 278.94350000 );
        GIVE_PED_AMBIENT_OBJECT( l_U797[5], l_U850 );
    }
    CREATE_CHAR( 8, l_U845, -113.27570000, 778.25850000, 17.62520000, ref l_U797[6], 1 );
    SET_CHAR_HEADING( l_U797[6], 233.07220000 );
    sub_14067( l_U797[6], 2, 1, 1, "Museum2_store" );
    SET_CHAR_RELATIONSHIP( l_U797[6], 1, 0 );
    sub_14434( l_U797[6], 0 );
    CREATE_CHAR( 8, l_U843, -111.44270000, 776.87980000, 17.62520000, ref l_U797[7], 1 );
    SET_CHAR_HEADING( l_U797[7], 55.55020000 );
    sub_14067( l_U797[7], 2, 1, 1, "Museum2_store" );
    SET_CHAR_RELATIONSHIP( l_U797[7], 1, 0 );
    sub_14434( l_U797[7], 0 );
    CREATE_CHAR( 8, l_U844, -117.99770000, 821.06980000, 17.62490000, ref l_U797[8], 1 );
    SET_CHAR_HEADING( l_U797[8], 274.40340000 );
    sub_14067( l_U797[8], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[8], 1, 0 );
    sub_14434( l_U797[8], 1 );
    TASK_SWAP_WEAPON( l_U797[8], 1 );
    CREATE_CHAR( 8, l_U844, -92.23560000, 866.92350000, 24.93230000, ref l_U797[9], 1 );
    SET_CHAR_HEADING( l_U797[9], 278.52910000 );
    sub_14067( l_U797[9], 2, 1, 1, "Museum2_jugs" );
    SET_CHAR_RELATIONSHIP( l_U797[9], 1, 0 );
    sub_14434( l_U797[9], 0 );
    TASK_SWAP_WEAPON( l_U797[9], 1 );
    CREATE_CHAR( 8, l_U843, -108.13560000, 848.44180000, 24.93230000, ref l_U797[10], 1 );
    SET_CHAR_HEADING( l_U797[10], 185.58150000 );
    sub_14067( l_U797[10], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[10], 1, 0 );
    sub_14434( l_U797[10], 1 );
    TASK_SWAP_WEAPON( l_U797[10], 1 );
    CREATE_CHAR( 8, l_U843, -97.96220000, 824.58540000, 24.93230000, ref l_U797[12], 1 );
    SET_CHAR_HEADING( l_U797[12], 186.52660000 );
    sub_14067( l_U797[12], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[12], 1, 0 );
    sub_14434( l_U797[12], 0 );
    CREATE_CHAR( 8, l_U843, -97.65050000, 821.04190000, 24.93230000, ref l_U797[13], 1 );
    SET_CHAR_HEADING( l_U797[13], 14.36020000 );
    sub_14067( l_U797[13], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[13], 1, 0 );
    sub_14434( l_U797[13], 3 );
    CREATE_CHAR( 8, l_U843, -117.07280000, 800.77940000, 24.93230000, ref l_U797[14], 1 );
    SET_CHAR_HEADING( l_U797[14], 300.21910000 );
    sub_14067( l_U797[14], 2, 1, 1, "Museum2_Hall" );
    SET_CHAR_RELATIONSHIP( l_U797[14], 1, 0 );
    sub_14434( l_U797[14], 0 );
    if (HAS_MODEL_LOADED( l_U850 ))
    {
        TASK_START_SCENARIO_AT_POSITION( l_U797[14], "Scenario_SmokingOutsideOffice", -117.07280000, 800.77940000, 24.93230000, 300.21910000 );
        GIVE_PED_AMBIENT_OBJECT( l_U797[14], l_U850 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[1] ))) AND (NOT (IS_CHAR_INJURED( l_U797[0] ))))
    {
        TASK_CHAT_WITH_CHAR( l_U797[0], l_U797[1], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U797[1], l_U797[0], 0, 1 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[4] ))) AND (NOT (IS_CHAR_INJURED( l_U797[3] ))))
    {
        TASK_CHAT_WITH_CHAR( l_U797[3], l_U797[4], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U797[4], l_U797[3], 0, 1 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[7] ))) AND (NOT (IS_CHAR_INJURED( l_U797[6] ))))
    {
        TASK_CHAT_WITH_CHAR( l_U797[6], l_U797[7], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U797[7], l_U797[6], 0, 1 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U797[13] ))) AND (NOT (IS_CHAR_INJURED( l_U797[12] ))))
    {
        TASK_CHAT_WITH_CHAR( l_U797[12], l_U797[13], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U797[13], l_U797[12], 0, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U797[2] )))
    {
        ;
    }
    return;
}

void sub_14067(unknown uParam0, int iParam1, int iParam2, int iParam3, unknown uParam4)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U890 );
    if (iParam2 == 1)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( uParam0, uParam4 );
    }
    if (iParam1 == 1)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U893 );
        SET_CHAR_WILL_USE_COVER( uParam0, 0 );
    }
    else if (iParam1 == 2)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U892 );
    }
    else if (iParam1 == 3)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U895 );
    }
    else if (iParam1 == 4)
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U891 );
    }
    else
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U894 );
    };;;;
    if (iParam3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 24 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 23 );
    }
    else if (iParam3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 24 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 23 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( uParam0, 23 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 25 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 24 );
    }
    SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
    SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
    return;
}

void sub_14434(unknown uParam0, int iParam1)
{
    if (iParam1 == 1)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 15, 9999, 1 );
    }
    else if (iParam1 == 2)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 11, 9999, 1 );
    }
    else if (iParam1 == 3)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 13, 9999, 1 );
    }
    else if (iParam1 == 4)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 7, 9999, 1 );
    }
    else
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 9, 9999, 1 );
    };;;;
    return;
}

void sub_17041()
{
    int I;
    unknown uVar3;

    if (l_U1036 == 0)
    {
        if (l_U1037 == 0)
        {
            if (sub_13783())
            {
                GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
                if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -99.50985000, 875.25110000 - 2, 13.68480000, 6.58310000, 4.26400000, 10, 0 )) || ((l_U423 == 1) AND (l_U365 == 0)))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                    {
                        if ((l_U1040 == 1) AND (l_U1038 == 0))
                        {
                            SAY_AMBIENT_SPEECH( g_U11081[0], "GREET_JOHNNY", 1, 0, 2 );
                            l_U1038 = 1;
                        }
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 0 );
                    }
                    sub_3523();
                    sub_17304( 0 );
                    l_U1043 = 99;
                    l_U1037 = 1;
                }
            }
        }
        switch (l_U1043)
        {
            case 0:
            if (l_U1042 == 0)
            {
                if ((NOT (IS_CHAR_INJURED( g_U11081[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] ))))
                {
                    sub_17304( 1 );
                    l_U1043++;
                }
            }
            break;
            case 1:
            for ( I = 0; I <= 1; I++ )
            {
                if (NOT (IS_CHAR_INJURED( g_U11081[I] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[I], 1 );
                    if (NOT (IS_CAR_DEAD( g_U11087[I] )))
                    {
                        GET_CAR_MODEL( g_U11087[I], ref uVar3 );
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, g_U11087[I], 6000 );
                        TASK_CAR_DRIVE_TO_COORD( 0, g_U11087[I], -78.45590000 - I, 877.37820000 - (I * 3), 13.68360000, 20.00000000, 0, uVar3, 2, 1.50000000, 1 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( g_U11081[I], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                    }
                }
            }
            if (I > 0)
            {
                l_U1040 = 1;
                l_U1043++;
            }
            break;
            case 2:
            if ((NOT (IS_CHAR_INJURED( g_U11081[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] ))))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( g_U11081[1], -78.45590000 - 1, 877.37820000 - 3, 13.68360000, 10, 10, 10, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( g_U11081[0], -78.45590000, 877.37820000, 13.68360000, 10, 10, 10, 0 )))
                {
                    l_U1043++;
                }
            }
            if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (l_U1058[1] == 0))
            {
                PRINT_HELP( "RB2_HELP_02" );
                l_U1058[1] = 1;
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                if (NOT (IS_CAR_DEAD( g_U11087[0] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U650 );
                    TASK_LEAVE_CAR( 0, g_U11087[0] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -102.22620000, 883.97700000, 14.31400000, 3, 60000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U650 );
                    TASK_PERFORM_SEQUENCE( g_U11081[0], l_U650 );
                    CLEAR_SEQUENCE_TASK( l_U650 );
                    sub_5632( 1, g_U11081[0], "TERRY", 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                if (NOT (IS_CAR_DEAD( g_U11087[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U650 );
                    TASK_LEAVE_CAR( 0, g_U11087[1] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -87.87870000, 884.20490000, 13.74110000, 3, 60000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U650 );
                    TASK_PERFORM_SEQUENCE( g_U11081[1], l_U650 );
                    CLEAR_SEQUENCE_TASK( l_U650 );
                    sub_5632( 2, g_U11081[1], "CLAY", 0 );
                }
            }
            if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (l_U1058[1] == 0))
            {
                PRINT_HELP( "RB2_HELP_02" );
                l_U1058[1] = 1;
            }
            l_U1043++;
            break;
            case 4:
            if (l_U1037 == 0)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -99.50985000, 875.25110000 - 2, 13.68480000, 6.58310000, 4.26400000, 10, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                    {
                        if ((l_U1040 == 1) AND (l_U1038 == 0))
                        {
                            SAY_AMBIENT_SPEECH( g_U11081[0], "GREET_JOHNNY", 1, 0, 2 );
                            l_U1038 = 1;
                        }
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 0 );
                    }
                    sub_17304( 0 );
                    sub_3523();
                    l_U1043 = 99;
                }
                l_U1037 = 1;
            }
            break;
        }
    }
    return;
}

void sub_17304(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_17336( g_U11081[I], uParam0 );
    }
    return;
}

void sub_17336(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_13792())
        {
            if (NOT sub_13783())
            {
                sub_17373();
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
                sub_17502( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_5791() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_17847( ref g_U11028[iVar5], sub_3862() );
                if (g_U11090)
                {
                    sub_18874( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

void sub_17373()
{
    g_U11090 = 1;
    return;
}

void sub_17502(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_17567( iParam0 ) ))
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

void sub_17567(int iParam0)
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

void sub_17847(int iParam0, int iParam1)
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
                if (sub_17943( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_3862()) AND (iParam0->_fU8 == sub_3862()))
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
        sub_18428( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3862())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_18543( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_18543( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_18543( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_18543( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_18543( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_17943(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_17967( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_17967(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_18428(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_18543(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3862())
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

void sub_18874(int iParam0, int iParam1)
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

void sub_20311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20334( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_20334(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20388( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20388(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20410( iParam1 )))
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
    sub_21102( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_20410(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_20487( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_20487( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_20487( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_20487(unknown uParam0)
{
    return;
}

void sub_21102(int iParam0, int iParam1)
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

int sub_21801(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_20487( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_20487( "\n speech is not playing" );
    }
    return 0;
}

void sub_23259()
{
    int I;

    I = 0;
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U797[I] ))
        {
            if ((IS_CHAR_INJURED( l_U797[I] )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U797[I], l_U1062, 0 )))
            {
                l_U452 = 1;
            }
        }
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
    if (IS_CHAR_SHOOTING( l_U1062 ))
    {
        if ((l_U365 == 193674066) || ((l_U365 == -1611808994) || ((l_U365 == -1975100134) || (l_U365 == 2004012895))))
        {
            l_U368++;
            if (l_U368 > 3)
            {
                l_U452 = 1;
            }
        }
    }
    if (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))
    {
        l_U368 = 5;
        l_U452 = 1;
    }
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, 65429, 821, 20, 150, 150, 150, 0 )))
    {
        l_U473 = 1;
        l_U452 = 1;
    }
    if (l_U452 == 1)
    {
        I = 0;
        for ( I = 0; I <= 14; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U797[I] )))
            {
                SET_CHAR_RELATIONSHIP( l_U797[I], 5, 0 );
                SET_CHAR_KEEP_TASK( l_U797[I], 1 );
            }
        }
        if (NOT IS_SCREEN_FADING_OUT())
        {
            if (l_U368 > 3)
            {
                PRINT_NOW( "RB2_FAIL_12", 7500, 1 );
                sub_12655( 5, "E1R2_FAIL2", "E1R2AUD", 0 );
            }
            else if (l_U473 == 1)
            {
                PRINT_NOW( "RB2_FAIL_14", 7500, 1 );
                sub_12655( 5, "E1R2_DEAL", "E1R2AUD", 0 );
            }
            else
            {
                PRINT_NOW( "RB2_FAIL_07", 7500, 1 );
                sub_12655( 5, "E1R2_FAIL", "E1R2AUD", 0 );
            }
        }
        l_U362 = -1;
        l_U401 = 1;
    }
    return;
}

int sub_23940(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3862() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3862(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3862() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3862(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3862()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3862() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3862() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5791() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5791() )))
    {
        return 0;
    }
    return 1;
}

void sub_24325()
{
    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_23259();
        if (l_U401 == 1)
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 750 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            PRINT_NOW( "RB2_FAIL_07", 7500, 1 );
            return;
        }
        WAIT( 0 );
    }
    l_U480[1] = 0;
    l_U480[4] = 0;
    sub_24505();
    SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -107.00000000, 761.00000000, 15.00000000, 5.00000000, 2030256269, 0 );
    if (IS_CHAR_IN_ANY_CAR( l_U1062 ))
    {
        PRINTSTRING( "\n\n     -----> STORE PLAYER CAR <----- \n\n\n" );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1062, ref l_U868 );
        if (NOT (IS_CAR_A_MISSION_CAR( l_U868 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U868 );
        }
        WAIT( 0 );
        WARP_CHAR_FROM_CAR_TO_COORD( l_U1062, -120.57320000, 791.50000000, 24.93190000 );
        REMOVE_PED_HELMET( l_U1062, 1 );
    }
    SWITCH_PED_PATHS_ON( -136.57000000, 750.12000000, 12.00000000, -76.24000000, 773.11000000, 16.00000000 );
    SET_PLAYER_CONTROL_ADVANCED( l_U1063, 0, 1, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1062 );
    RETUNE_RADIO_TO_STATION_NAME( "HARDCORE" );
    if (NOT (IS_CAR_DEAD( l_U867 )))
    {
        GET_INTERIOR_FROM_CAR( l_U867, ref l_U896 );
        if ((l_U896 != nil) || ((LOCATE_CAR_3D( l_U867, l_U527._fU0, l_U527._fU4, l_U527._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )) || (LOCATE_CAR_3D( l_U867, -106.76030000, 762.18690000, 14.29030000, 25.00000000, 25.00000000, 10.00000000, 0 ))))
        {
            PRINTSTRING( "\n\n -----> CAR WITHIN 25m <----- \n\n\n" );
            if (NOT (IS_CAR_A_MISSION_CAR( l_U867 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U867 );
            }
            if (LOCATE_CAR_3D( l_U867, -120.57320000, 792.11740000 + 2.00000000, 24.93190000, 10.00000000, 10.00000000, 3.00000000, 0 ))
            {
                SET_CAR_HEADING( l_U867, 2.76380000 );
                SET_CAR_COORDINATES( l_U867, -118.66150000, 798.90160000, 24.93230000 );
                SET_CAR_IN_CUTSCENE( l_U867, 1 );
            }
            else
            {
                SET_CAR_HEADING( l_U867, 91.18260000 );
                SET_CAR_COORDINATES( l_U867, -98.00000000, 884.70970000, 14.18830000 );
            }
        }
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U867, 1 );
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U873 );
    if (IS_VEH_DRIVEABLE( l_U873 ))
    {
        if (LOCATE_CAR_3D( l_U873, -94.49130000, 881.07940000, 13.94410000, 20, 20, 20, 0 ))
        {
            SET_CAR_COORDINATES( l_U873, -94.49130000 + 10, 881.07940000, 13.94410000 );
            SET_CAR_HEADING( l_U873, 270 );
            SET_CAR_ON_GROUND_PROPERLY( l_U873 );
        }
    }
    if (((NOT (IS_CHAR_INJURED( g_U11081[1] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] )))) || (sub_13783()))
    {
        if (l_U1036 == 1)
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
            {
                SET_CHAR_HEADING( g_U11081[0], 0.19540000 );
                SET_CHAR_COORDINATES( g_U11081[0], -118.28280000, 795.59340000, 24.93230000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[0], 0 );
            }
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                SET_CHAR_HEADING( g_U11081[1], 359.89660000 );
                SET_CHAR_COORDINATES( g_U11081[1], -123.02530000, 795.73020000, 24.93230000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[1], 0 );
            }
            sub_17304( 0 );
        }
    }
    else
    {
        sub_25663( "E1R2AUD", "E1R2_MUST", "E1R2_MUSC" );
        l_U1034 = 1;
    }
    CLEAR_AREA( -106.36830000, 762.87490000, 14.50000000, 5.00000000, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    LOAD_ADDITIONAL_TEXT( "E1R2AUD", 6 );
    START_CUTSCENE_NOW( "e1rb4b" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "e1rb4b" );
    ENABLE_SCENE_STREAMING( 1 );
    if (NOT (IS_CAR_DEAD( l_U867 )))
    {
        SET_CAR_IN_CUTSCENE( l_U867, 0 );
    }
    l_U362++;
    return;
}

void sub_24505()
{
    int I;

    I = 0;
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U797[I] ))
        {
            DELETE_CHAR( ref l_U797[I] );
        }
    }
    return;
}

void sub_25663(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U39126 = 1;
    StrCopy( ref g_U39127, uParam0, 16 );
    StrCopy( ref g_U39131, uParam1, 32 );
    StrCopy( ref g_U39139, uParam2, 32 );
    return;
}

void sub_25927()
{
    int I;

    if (l_U423 == 0)
    {
        g_U39149[17] = 1;
        ADD_SCENARIO_BLOCKING_AREA( -143.00000000, 760.00000000, 12.00000000, -76.50000000, 886.50000000, 30.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
        SET_PLAYER_MOOD_PISSED_OFF( l_U1063, 600 );
        SET_PED_IS_BLIND_RAGING( sub_3862(), 1 );
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\RB2_COLLECTORS_ITEM" )))
        {
            PRINTSTRING( "\n\n   ----> Load Audio <---- \n\n\n" );
            WAIT( 0 );
        }
        sub_26147();
        sub_26915();
        LOAD_SCENE( -94.57000000, 790.50650000, 24.89680000 );
        FREEZE_CHAR_POSITION( l_U1062, 1 );
        SET_CHAR_COORDINATES( l_U1062, -120.57320000, 792.11740000 + 2.00000000, 24.93190000 );
        SET_CHAR_HEADING( l_U1062, 356.41670000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1062, "Museum2_Hall" );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 2000 );
        FREEZE_CHAR_POSITION( l_U1062, 0 );
        if (HAS_CHAR_GOT_WEAPON( l_U1062, 15 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 15, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 14 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 14, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 13 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 13, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 12 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 12, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 22 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 22, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 11 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 11, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 26 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 26, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 10 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 10, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 27 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 27, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 9 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 9, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 7 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 7, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 28 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 28, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 4 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 4, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 5 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 5, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U1062, 18 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1062, 18, 1 );
        }
        else
        {
            TASK_SWAP_WEAPON( l_U1062, 1 );
        };;;;;;;;;;;;;;;
        SETTIMERA( 0 );
        sub_27887();
        sub_28231();
        sub_28430();
        sub_28976();
        sub_30308();
        sub_31183();
        sub_32343();
        sub_33616( -78.91650000, 882.80540000, 13.79210000, 39.27710000, 1, -118.16780000, 795.83350000, 24.93230000, 45.65210000, -81.82870000, 883.75990000, 13.83840000, 33.42680000, 1, -122.81450000, 800.86840000, 24.93230000, 357.43800000 );
        WAIT( 1000 );
        l_U367 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U367, "RB2_COLLECTORS_ITEM_ALARM", 65429, 821, 20 );
        DO_SCREEN_FADE_IN( 500 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U1062, -120.60960000, 798.88260000, 24.93230000, 60000 );
        SET_PLAYER_CONTROL_ADVANCED( l_U1063, 1, 1, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U547 )))
        {
            ADD_BLIP_FOR_COORD( -101.39820000, 852.47740000, 17.62490000 + 1.50000000, ref l_U547 );
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U701[I] )))
            {
                TASK_COMBAT( l_U701[I], l_U1062 );
            }
        }
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U710[I] )))
            {
                TASK_COMBAT( l_U710[I], l_U1062 );
            }
        }
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U717[I] )))
            {
                TASK_COMBAT( l_U717[I], l_U1062 );
            }
        }
        sub_34142();
        if (NOT (IS_CHAR_INJURED( l_U690 )))
        {
            if ((NOT (IS_CHAR_DEAD( l_U819 ))) AND (NOT (IS_CHAR_DEAD( l_U818 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_SWAP_WEAPON( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.95590000, 832.39210000, 17.62490000, 3, 30000, 2.00000000 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -103.25610000, 825.68640000, 17.62500000, 3, 2.00000000, 2.00000000, l_U818, 0 );
                if (NOT (IS_CHAR_DEAD( l_U701[7] )))
                {
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -101.45840000, 815.04600000, 17.62490000, 3, 2.00000000, 2.00000000, l_U701[7], 0 );
                }
                TASK_SEEK_COVER_TO_COORDS( 0, -100.04860000, 813.54020000, 17.62490000, -101.62730000, 804.71170000, 17.62490000, 2500 );
                TASK_SHOOT_AT_CHAR( 0, l_U819, 4000, 3 );
                if (NOT (IS_CHAR_DEAD( l_U701[0] )))
                {
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -103.37410000, 806.73290000, 17.62490000, 3, 2.00000000, 2.00000000, l_U701[0], 1 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -107.64210000, 765.37090000, 14.34170000, 3, 30000, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( l_U690, l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.95590000, 832.39210000, 17.62490000, 3, 30000, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -101.45840000, 815.04600000, 17.62490000, 3, 30000, 2.00000000 );
                TASK_SEEK_COVER_TO_COORDS( 0, -100.04860000, 813.54020000, 17.62490000, -101.62730000, 804.71170000, 17.62490000, 3000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -107.64210000, 765.37090000, 14.34170000, 3, 30000, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( l_U690, l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U690 ))) AND (NOT (IS_CHAR_INJURED( l_U701[4] ))))
        {
            sub_35345( l_U690, l_U701[4] );
            TASK_AIM_GUN_AT_CHAR( l_U701[4], l_U690, 8000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U691 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U650 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -125.16410000, 772.74190000, 24.93200000, 3, 10000, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, -116.66640000, 790.75580000, 25.93190000 );
            TASK_PLAY_ANIM( 0, "cower_idle", "missray2", 4.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U650 );
            TASK_PERFORM_SEQUENCE( l_U691, l_U650 );
            CLEAR_SEQUENCE_TASK( l_U650 );
        }
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( -107.00000000, 761.00000000, 15.00000000, 5.00000000, 2030256269, 1 );
        PRINT_NOW( "RB2_COMMAND_02", 7500, 1 );
        l_U423 = 1;
        SETTIMERA( 0 );
        SETTIMERB( 0 );
    }
    if (l_U989 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -110.10270000, 852.32550000, 24.93230000, 6.00010000, 3.15655000, 5, 0 ))
        {
            sub_36028();
            l_U989 = 1;
        }
    }
    if (NOT l_U1041)
    {
        if (NOT sub_13783())
        {
            sub_25663( "E1R2AUD", "E1R2_MUST", "E1R2_MUSC" );
            l_U1034 = 1;
            l_U1041 = 1;
        }
    }
    if ((TIMERA() > 3000) AND (l_U1035 == 0))
    {
        if (l_U1034 == 1)
        {
            sub_36487();
            l_U1035 = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U690 )))
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((TIMERA() > l_U369) AND (l_U411[0] == 0)))
        {
            sub_20311( "E1R2_NIKO", ref l_U1064, 6, 0 );
            l_U369 += 5000;
            if (l_U369 > 33000)
            {
                l_U411[0] = 1;
            }
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U690 ))) AND (NOT (IS_CHAR_INJURED( l_U701[4] ))))
    {
        GET_CHAR_COORDINATES( l_U690, ref l_U385._fU0, ref l_U385._fU4, ref l_U385._fU8 );
        if (l_U385._fU4 > 791)
        {
            sub_35345( l_U690, l_U701[4] );
        }
    }
    if ((TIMERA() > 500) AND (l_U407[0] == 0))
    {
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -95.19000000, 791.21000000, 26.18000000, 10 );
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -95.19000000, 791.21000000, 26.18000000, 10 );
        l_U407[0] = 1;
    }
    if ((TIMERA() > 1500) AND (l_U407[1] == 0))
    {
        FIRE_SINGLE_BULLET( -95.50000000, 795.00000000, 26.50000000, -94.88000000, 791.34000000, 26.17000000, 10 );
        FIRE_SINGLE_BULLET( -95.50000000, 795.00000000, 26.50000000, -94.88000000, 791.34000000, 26.17000000, 10 );
        l_U407[1] = 1;
    }
    if ((TIMERA() > 3000) AND (l_U407[2] == 0))
    {
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -94.38000000, 791.21000000, 26.43000000, 10 );
        FIRE_SINGLE_BULLET( -100.00000000, 792.00000000, 26.50000000, -94.38000000, 791.21000000, 26.43000000, 10 );
        l_U407[2] = 1;
    }
    if ((TIMERA() > 5000) AND (l_U431 == 0))
    {
        if (l_U432 == 0)
        {
            FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.37000000, 22.20000000, 25 );
            FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.37000000, 22.20000000, 25 );
            FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.00000000, 22.50000000, 25 );
            FIRE_SINGLE_BULLET( -112.00000000, 805.00000000, 24.00000000, -108.38000000, 805.00000000, 22.50000000, 25 );
            FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -107.78000000, 813.27000000, 27.10000000, 99 );
            FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -109.86000000, 816.73000000, 22.99000000, 99 );
            FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -109.69000000, 816.22990000, 22.91000000, 99 );
            FIRE_SINGLE_BULLET( -116.90000000, 803.80000000, 27.00000000, -108.96000000, 817.69000000, 25.56000000, 99 );
            FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -107.78000000, 813.27000000, 27.10000000, 99 );
            FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -109.86000000, 816.73000000, 22.99000000, 99 );
            FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -109.69000000, 816.22990000, 22.91000000, 99 );
            FIRE_SINGLE_BULLET( -112.90000000, 805.80000000, 25.00000000, -108.96000000, 817.69000000, 25.56000000, 99 );
            FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -107.78000000, 813.27000000, 27.10000000, 99 );
            FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -109.86000000, 816.73000000, 22.99000000, 99 );
            FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -109.69000000, 816.22990000, 22.91000000, 99 );
            FIRE_SINGLE_BULLET( -119.90000000, 807.80000000, 29.00000000, -108.96000000, 817.69000000, 25.56000000, 99 );
            FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -107.32000000, 807.17000000, 22.19000000, 25 );
            FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -107.32000000, 807.17000000, 22.19000000, 25 );
            FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -108.00000000, 805.02000000, 22.13000000, 25 );
            FIRE_SINGLE_BULLET( -105.00000000, 812.00000000, 24.00000000, -108.00000000, 805.02000000, 22.13000000, 25 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.82000000, 820.68000000, 24.84000000, 99 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -105.07000000, 821.31000000, 25.71000000, 99 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.73000000, 822.81000000, 25.22000000, 99 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.82000000, 820.68000000, 24.84000000, 99 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -105.07000000, 821.31000000, 25.71000000, 99 );
            FIRE_SINGLE_BULLET( -97.30000000, 816.90000000, 27.00000000, -104.73000000, 822.81000000, 25.22000000, 99 );
            PRINTSTRING( "\n*\n*\n*\n*\n*\n    -----> SHOOT AT WHALE <-----    \n*\n*\n*\n*\n*\n*\n" );
            l_U432 = 1;
        }
        if (l_U433 == 0)
        {
            FIRE_SINGLE_BULLET( -104.00000000, 808.00000000, 22.00000000, -107.83000000, 808.13000000, 22.15000000, 50 );
            FIRE_SINGLE_BULLET( -112.00000000, 808.50000000, 23.00000000, -107.83000000, 808.13000000, 22.15000000, 50 );
            PRINTSTRING( "\n*\n*\n*\n*\n*\n    -----> SHOOT AT T-REX <-----    \n*\n*\n*\n*\n*\n*\n" );
            l_U433 = 1;
        }
        if ((l_U433 == 1) AND (l_U432 == 1))
        {
            l_U431 = 1;
        }
    }
    sub_17041();
    sub_39828();
    sub_40069();
    sub_41197();
    sub_41356();
    sub_42054();
    sub_42367();
    if (l_U430 == 0)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -123.63790000, -256.57810000, 11.68540000, 4.00000000, 4.00000000, 4.00000000, 0 )))
        {
            CREATE_CHAR( 8, l_U843, -94.27800000, 804.77880000, 24.89720000, ref l_U701[0], 1 );
            SET_CHAR_HEADING( l_U701[0], 187.15760000 );
            sub_14067( l_U701[0], 2, 1, 1, "Museum2_Hall" );
            sub_14434( l_U701[0], 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[0], -94.27800000, 804.77880000, 24.89720000, 3.00000000 );
            SET_CHAR_ACCURACY( l_U701[0], 20 );
            TASK_COMBAT( l_U701[0], l_U1062 );
            SET_CHAR_AS_ENEMY( l_U701[0], 1 );
            DAMAGE_CHAR( l_U701[0], 2000, 0 );
            sub_26365( l_U701[0] );
            l_U430 = 1;
        }
    }
    if ((l_U403[0] == 0) AND (NOT (IS_CHAR_INJURED( l_U710[4] ))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U710[4], 70.00000000, 70.00000000, 70.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U710[4], l_U895 );
            SET_CHAR_ACCURACY( l_U710[4], 45 );
            l_U403[0] = 1;
        }
    }
    if ((l_U403[1] == 0) AND (NOT (IS_CHAR_INJURED( l_U710[2] ))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U710[2], 25.00000000, 25.00000000, 25.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U710[2], l_U895 );
            SET_CHAR_ACCURACY( l_U710[2], 45 );
            l_U403[1] = 1;
        }
    }
    if ((l_U403[2] == 0) AND (NOT (IS_CHAR_INJURED( l_U717[1] ))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U717[1], 35.00000000, 35.00000000, 35.00000000, 0 ))
        {
            SET_COMBAT_DECISION_MAKER( l_U717[1], l_U895 );
            SET_CHAR_ACCURACY( l_U717[1], 45 );
            l_U403[2] = 1;
        }
    }
    if ((l_U475 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -94.27770000, 855.74480000, 24.93230000, 2.75000000, 2.50000000, 3.00000000, 0 )))
    {
        sub_43189();
        SETTIMERB( 0 );
        l_U475 = 1;
    }
    if ((l_U475 == 1) AND (l_U476 == 0))
    {
        if (NOT (IS_CHAR_INJURED( l_U820[2] )))
        {
            if (IS_PED_IN_COVER( l_U820[2] ))
            {
                REMOVE_COVER_POINT( l_U649 );
                l_U476 = 1;
            }
        }
        else
        {
            REMOVE_COVER_POINT( l_U649 );
            l_U476 = 1;
        }
    }
    if ((l_U475 == 1) AND ((l_U477 == 0) AND (TIMERB() > 8000)))
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U820[I] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[I], 0 );
            }
        }
        if (TIMERB() > 15000)
        {
            for ( I = 3; I <= 5; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U820[I] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[I], 0 );
                }
            }
            l_U477 = 1;
        }
    }
    GET_CHAR_COORDINATES( l_U1062, ref l_U382._fU0, ref l_U382._fU4, ref l_U382._fU8 );
    if ((l_U382._fU8 < 23.00000000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -100.87830000, 873.18660000, 25.93190000, 3.00000000, 3.00000000, 3.00000000, 0 )))
    {
        l_U362++;
    }
    return;
}

void sub_26147()
{
    CREATE_CHAR( 7, l_U842, -123.31870000, 789.32980000, 24.93180000 + 3.00000000, ref l_U692[0], 1 );
    SET_CHAR_HEADING( l_U692[0], 60.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U692[0], "Museum2_Hall" );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[0], 8, 0, 0 );
    sub_26365( l_U692[0] );
    CREATE_CHAR( 7, l_U842, -122.66670000, 792.08100000, 24.93180000 + 3.00000000, ref l_U692[1], 1 );
    SET_CHAR_HEADING( l_U692[1], 120.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U692[1], "Museum2_Hall" );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 0, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U692[1], 8, 0, 0 );
    sub_26365( l_U692[1] );
    CREATE_CHAR( 7, l_U840, -118.90050000, 790.19260000, 24.93180000, ref l_U697[1], 1 );
    SET_CHAR_HEADING( l_U697[1], 15.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U697[1], "Museum2_Hall" );
    sub_26365( l_U697[1] );
    return;
}

void sub_26365(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PED_BONE_POSITION( uParam0, 1205, 0, 0, 0, ref l_U388 );
        FIRE_SINGLE_BULLET( l_U388._fU0, l_U388._fU4 + 0.25000000, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
        FIRE_SINGLE_BULLET( l_U388._fU0, l_U388._fU4 + 0.25000000, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
        FIRE_SINGLE_BULLET( l_U388._fU0, l_U388._fU4 + 0.25000000, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
    }
    return;
}

void sub_26915()
{
    CREATE_PICKUP_ROTATE( -575490643, 22, 8, -123.27000000, 790.11000000, 24.95000000, 26.70000000, 0, 36.60000000, ref l_U394[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U394[0], "museum2_hall" );
    CREATE_PICKUP_ROTATE( -196312163, 22, 17, -121.57000000, 791.58000000, 24.94800000, 89, 0, 339.84000000, ref l_U394[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U394[1], "museum2_hall" );
    CREATE_PICKUP_ROTATE( 993473937, 22, 5, -98.72000000, 870.23000000, 24.95500000, 94.62001000, 40.28000000, 0, ref l_U399 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U399, "museum2_jugs" );
    return;
}

void sub_27887()
{
    CREATE_CHAR( 26, l_U838, -107.44130000, 850.23360000, 17.62490000, ref l_U690, 1 );
    SET_CHAR_HEADING( l_U690, 182.84240000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U690, "Museum2_Hall" );
    SET_CHAR_DECISION_MAKER( l_U690, l_U890 );
    SET_COMBAT_DECISION_MAKER( l_U690, l_U894 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U690, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U690, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U690, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 6, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 4, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U690, 8, 0, 0 );
    sub_14434( l_U690, 3 );
    SET_AMBIENT_VOICE_NAME( l_U690, "NIKO_NORMAL" );
    sub_5632( 8, l_U690, "NIKO", 0 );
    return;
}

void sub_28231()
{
    CREATE_CHAR( 26, l_U839, -119.91050000, 789.66770000, 24.93190000, ref l_U691, 1 );
    SET_CHAR_HEADING( l_U691, 185.65380000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U691, "Museum2_Hall" );
    SET_CHAR_DECISION_MAKER( l_U691, l_U890 );
    SET_COMBAT_DECISION_MAKER( l_U691, l_U892 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U691, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U691, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U691, 1 );
    sub_14434( l_U691, 0 );
    sub_5632( 7, l_U691, "ISAAC", 0 );
    return;
}

void sub_28430()
{
    CREATE_CHAR( 7, l_U845, -107.50590000, 794.66170000, 25.93190000 - 1.00000000, ref l_U697[2], 1 );
    SET_CHAR_HEADING( l_U697[2], 0.60399990 );
    sub_14067( l_U697[2], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U697[2], 0 );
    SET_CHAR_AS_ENEMY( l_U697[2], 1 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U697[2], -107.50590000, 794.66170000, 25.93190000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U697[2], 15 );
    if (NOT (IS_CHAR_DEAD( l_U690 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U697[2], 1 );
        PRINTSTRING( "\n\n   ---> ISAAC GANG PED SHOOT AT NIKO <---\n\n" );
        OPEN_SEQUENCE_TASK( ref l_U650 );
        TASK_SHOOT_AT_CHAR( 0, l_U690, 25000, 3 );
        TASK_COMBAT( 0, l_U1062 );
        CLOSE_SEQUENCE_TASK( l_U650 );
        TASK_PERFORM_SEQUENCE( l_U697[2], l_U650 );
        CLEAR_SEQUENCE_TASK( l_U650 );
    }
    else
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U697[2], 1 );
        PRINTSTRING( "\n\n   ---> ISAAC GANG PED SHOOT AT COORD <---\n\n" );
        OPEN_SEQUENCE_TASK( ref l_U650 );
        TASK_SHOOT_AT_COORD( 0, -105.00000000, 808.00000000, 23.00000000, 30000, 3 );
        TASK_COMBAT( 0, l_U1062 );
        CLOSE_SEQUENCE_TASK( l_U650 );
        TASK_PERFORM_SEQUENCE( l_U697[2], l_U650 );
        CLEAR_SEQUENCE_TASK( l_U650 );
    }
    return;
}

void sub_28976()
{
    CREATE_CHAR( 8, l_U843, -104.49670000, 802.67230000, 17.62520000, ref l_U701[0], 1 );
    SET_CHAR_HEADING( l_U701[0], 102.86320000 );
    sub_14067( l_U701[0], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[0], -104.49670000, 802.67230000, 17.62520000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U701[0], 55 );
    SET_CHAR_AS_ENEMY( l_U701[0], 1 );
    CREATE_CHAR( 8, l_U844, -97.24800000, 814.66780000, 25.93200000 - 1.00000000, ref l_U701[1], 1 );
    SET_CHAR_HEADING( l_U701[1], 203.53680000 );
    sub_14067( l_U701[1], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[1], -97.24800000, 814.66780000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U701[1], 60 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[1], 1 );
    sub_26365( l_U701[1] );
    CREATE_CHAR( 8, l_U843, -96.18280000, 833.16840000, 25.93200000, ref l_U701[3], 1 );
    SET_CHAR_HEADING( l_U701[3], 182.98940000 );
    sub_14067( l_U701[3], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[3], -96.18280000, 833.16840000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U701[3], 55 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[3], 1 );
    sub_26365( l_U701[3] );
    CREATE_CHAR( 8, l_U843, -102.14370000, 851.80890000, 24.93230000, ref l_U701[4], 1 );
    SET_CHAR_HEADING( l_U701[4], 159.99310000 );
    sub_14067( l_U701[4], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[4], 1 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[4], -106.12650000, 848.48570000, 24.93190000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U701[4], 60 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[4], 1 );
    sub_26365( l_U701[4] );
    CREATE_CHAR( 8, l_U843, -92.37910000, 817.59130000, 25.93200000 - 1.00000000, ref l_U701[5], 1 );
    SET_CHAR_HEADING( l_U701[5], 177.31980000 );
    sub_14067( l_U701[5], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[5], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[5], -92.37910000, 817.59130000, 25.93200000 - 1.00000000, 10.00000000 );
    SET_CHAR_ACCURACY( l_U701[5], 55 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[5], 1 );
    sub_26365( l_U701[5] );
    CREATE_CHAR( 8, l_U843, -108.25870000, 822.74710000, 17.62520000, ref l_U701[6], 1 );
    SET_CHAR_HEADING( l_U701[6], 7.71330000 );
    sub_14067( l_U701[6], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[6], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[6], -108.25870000, 822.74710000, 17.62520000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U701[6], 60 );
    SET_CHAR_AS_ENEMY( l_U701[6], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[6], 1 );
    sub_26365( l_U701[6] );
    CREATE_CHAR( 8, l_U843, -105.95170000, 819.39260000, 17.62520000, ref l_U701[7], 1 );
    SET_CHAR_HEADING( l_U701[7], 205.88150000 );
    sub_14067( l_U701[7], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U701[7], 2 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U701[7], -105.95170000, 819.39260000, 17.62520000, 2.50000000 );
    SET_CHAR_ACCURACY( l_U701[7], 55 );
    SET_CHAR_AS_ENEMY( l_U701[7], 1 );
    return;
}

void sub_30308()
{
    CREATE_CHAR( 8, l_U846, -118.35500000, 812.70700000, 25.93190000 - 1.00000000, ref l_U710[0], 1 );
    SET_CHAR_HEADING( l_U710[0], 182.82860000 );
    sub_14067( l_U710[0], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U710[0], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U710[0], -118.35500000, 812.70700000, 25.93190000 - 1.00000000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U710[0], 70 );
    SET_CHAR_AS_ENEMY( l_U710[0], 1 );
    CREATE_CHAR( 8, l_U843, -124.23890000 + 1.50000000, 821.09200000, 25.93190000, ref l_U710[1], 1 );
    SET_CHAR_HEADING( l_U710[1], 160 );
    sub_14067( l_U710[1], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U710[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U710[1], -124.23890000, 821.09200000, 25.93190000 - 1.00000000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U710[1], 65 );
    SET_CHAR_AS_ENEMY( l_U710[1], 1 );
    CREATE_CHAR( 8, l_U844, -122.67100000 + 2.50000000, 853.08620000, 25.93190000 - 1.00000000, ref l_U710[3], 1 );
    SET_CHAR_HEADING( l_U710[3], 260 );
    sub_14067( l_U710[3], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U710[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U710[3], -122.67100000, 853.08620000, 25.93190000 - 1.00000000, 1.00000000 );
    SET_CHAR_AS_ENEMY( l_U710[3], 1 );
    CREATE_CHAR( 8, l_U845, -111.07630000, 847.99190000, 25.93190000 - 1.00000000, ref l_U710[4], 1 );
    SET_CHAR_HEADING( l_U710[4], 186.96400000 );
    sub_14067( l_U710[4], 1, 1, 1, "Museum2_Hall" );
    sub_14434( l_U710[4], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U710[4], -111.07630000, 847.99190000, 25.93190000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U710[4], 65 );
    SET_CHAR_AS_ENEMY( l_U710[4], 1 );
    CREATE_CHAR( 8, l_U846, -122.47550000, 809.90380000, 24.93230000, ref l_U710[5], 1 );
    SET_CHAR_HEADING( l_U710[5], 242.72450000 );
    sub_14067( l_U710[5], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U710[5], 0 );
    SET_CHAR_ACCURACY( l_U710[5], 65 );
    SET_CHAR_AS_ENEMY( l_U710[5], 1 );
    return;
}

void sub_31183()
{
    CREATE_CHAR( 8, l_U846, -91.88681000, 871.38590000, 24.93230000, ref l_U717[0], 1 );
    SET_CHAR_HEADING( l_U717[0], 186.02380000 );
    sub_14067( l_U717[0], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U717[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U717[0], -91.88681000, 871.38590000, 24.93230000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U717[0], 60 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[0], 1 );
    sub_26365( l_U717[0] );
    CREATE_CHAR( 8, l_U845, -99.39180000, 871.76530000, 25.93190000 - 1.00000000, ref l_U717[1], 1 );
    SET_CHAR_HEADING( l_U717[1], 148.20330000 );
    sub_14067( l_U717[1], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U717[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U717[1], -99.39180000, 871.76530000, 25.93190000 - 1.00000000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U717[1], 75 );
    SET_CHAR_AS_ENEMY( l_U717[1], 1 );
    CREATE_CHAR( 8, l_U843, -108.95820000, 855.18360000 - 5.00000000, 18.62470000 + 2.00000000, ref l_U717[3], 1 );
    SET_CHAR_HEADING( l_U717[3], 1.15850000 );
    sub_14067( l_U717[3], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U717[3], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U717[3], -108.95820000, 855.18360000, 18.62470000 - 1.00000000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U717[3], 55 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[3], 1 );
    sub_26365( l_U717[3] );
    CREATE_CHAR( 8, l_U846, -106.36180000 - 1, 848.26980000, 18.62470000 - 1.00000000, ref l_U717[4], 1 );
    SET_CHAR_HEADING( l_U717[4], 6.54540000 );
    sub_14067( l_U717[4], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U717[4], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U717[4], -106.36180000, 848.26980000, 18.62470000 - 1.00000000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U717[4], 65 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[4], 1 );
    sub_26365( l_U717[4] );
    CREATE_CHAR( 8, l_U845, -92.45780000, 870.96580000, 24.93230000, ref l_U717[5], 1 );
    SET_CHAR_HEADING( l_U717[5], 154.76490000 );
    sub_14067( l_U717[5], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U717[5], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U717[5], -92.45780000, 870.96580000, 24.93230000, 5.00000000 );
    SET_CHAR_ACCURACY( l_U717[5], 70 );
    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U717[5], -92.45140000, 871.04660000, 24.93230000, 1000 );
    SET_CHAR_AS_ENEMY( l_U717[5], 1 );
    CREATE_CHAR( 8, l_U846, -98.77150000, 863.65940000, 24.93230000, ref l_U717[6], 1 );
    SET_CHAR_HEADING( l_U717[6], 148.20330000 );
    sub_14067( l_U717[6], 1, 1, 1, "Museum2_jugs" );
    sub_14434( l_U717[6], 3 );
    SET_CHAR_ACCURACY( l_U717[6], 75 );
    SET_CHAR_AS_ENEMY( l_U717[6], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U717[6], 1 );
    sub_26365( l_U717[6] );
    return;
}

void sub_32343()
{
    CREATE_CHAR( 8, l_U844, -93.75090000, 850.54080000, 24.93230000, ref l_U763[0], 1 );
    SET_CHAR_HEADING( l_U763[0], 144.89920000 );
    sub_14067( l_U763[0], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U763[0], 0 );
    sub_26365( l_U763[0] );
    CREATE_CHAR( 8, l_U843, -104.48030000, 854.04130000, 24.93230000, ref l_U763[1], 1 );
    SET_CHAR_HEADING( l_U763[1], 23.42310000 );
    sub_14067( l_U763[1], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U763[1], 1 );
    sub_26365( l_U763[1] );
    CREATE_CHAR( 8, l_U845, -92.89620000, 864.84120000, 24.93230000, ref l_U763[2], 1 );
    SET_CHAR_HEADING( l_U763[2], 150.53230000 );
    sub_14067( l_U763[2], 2, 1, 1, "Museum2_Jugs" );
    sub_14434( l_U763[2], 2 );
    sub_26365( l_U763[2] );
    CREATE_CHAR( 8, l_U846, -96.76930000, 864.25430000, 24.93230000, ref l_U763[3], 1 );
    SET_CHAR_HEADING( l_U763[3], 75.24470000 );
    sub_14067( l_U763[3], 2, 1, 1, "Museum2_Jugs" );
    sub_14434( l_U763[3], 3 );
    sub_26365( l_U763[3] );
    CREATE_CHAR( 8, l_U844, -108.59730000, 872.01370000, 24.93220000, ref l_U763[4], 1 );
    SET_CHAR_HEADING( l_U763[4], 280.76120000 );
    sub_14067( l_U763[4], 2, 1, 1, "Museum2_Jugs" );
    sub_14434( l_U763[4], 0 );
    sub_26365( l_U763[4] );
    CREATE_CHAR( 8, l_U843, -114.58440000, 834.02200000, 17.62490000 - 1.00000000, ref l_U725[1], 1 );
    SET_CHAR_HEADING( l_U725[1], 212.55420000 );
    sub_14067( l_U725[1], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U725[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U725[1], -107.44010000, 832.12950000, 19.37590000 - 1.00000000, 3.00000000 );
    SET_CHAR_ACCURACY( l_U725[1], 55 );
    SET_CHAR_AS_ENEMY( l_U725[1], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[1], 1 );
    sub_26365( l_U725[1] );
    CREATE_CHAR( 8, l_U843, -98.15690000, 819.73160000, 25.93190000 - 1.00000000, ref l_U725[8], 1 );
    SET_CHAR_HEADING( l_U725[8], 47.67160000 );
    sub_14067( l_U725[8], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U725[8], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U725[8], -98.15690000, 819.73160000, 25.93190000 - 1.00000000, 1.50000000 );
    SET_CHAR_ACCURACY( l_U725[8], 40 );
    SET_CHAR_AS_ENEMY( l_U725[8], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[8], 1 );
    sub_26365( l_U725[8] );
    CREATE_CHAR( 8, l_U844, -100.10750000, 809.26700000, 17.62490000, ref l_U725[12], 1 );
    SET_CHAR_HEADING( l_U725[12], 17.51170000 );
    sub_14067( l_U725[12], 1, 1, 1, "Museum2_display1" );
    sub_14434( l_U725[12], 3 );
    SET_CHAR_ACCURACY( l_U725[12], 42 );
    SET_CHAR_AS_ENEMY( l_U725[12], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[12], 1 );
    sub_26365( l_U725[12] );
    return;
}

void sub_33616(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    if (sub_13783())
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

void sub_34142()
{
    CREATE_CHAR( 8, l_U843, -109.93660000, 827.85220000, 17.62490000, ref l_U818, 1 );
    SET_CHAR_HEADING( l_U818, 293.05320000 );
    sub_14067( l_U818, 0, 1, 1, "Museum2_Hall" );
    sub_14434( l_U818, 0 );
    SET_CHAR_ACCURACY( l_U818, 30 );
    SET_CHAR_AS_ENEMY( l_U818, 1 );
    if (NOT (IS_CHAR_INJURED( l_U690 )))
    {
        OPEN_SEQUENCE_TASK( ref l_U650 );
        TASK_SHOOT_AT_CHAR( 0, l_U690, 40000, 3 );
        TASK_COMBAT( 0, l_U1062 );
        CLOSE_SEQUENCE_TASK( l_U650 );
        TASK_PERFORM_SEQUENCE( l_U818, l_U650 );
        CLEAR_SEQUENCE_TASK( l_U650 );
    }
    SET_CHAR_KEEP_TASK( l_U818, 1 );
    CREATE_CHAR( 8, l_U844, -101.62730000, 804.71170000, 17.62490000, ref l_U819, 1 );
    SET_CHAR_HEADING( l_U819, 359.56560000 );
    sub_14067( l_U819, 0, 1, 1, "Museum2_Hall" );
    sub_14434( l_U819, 3 );
    SET_CHAR_ACCURACY( l_U819, 30 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U819, 1 );
    SET_CHAR_AS_ENEMY( l_U819, 1 );
    if (NOT (IS_CHAR_INJURED( l_U690 )))
    {
        OPEN_SEQUENCE_TASK( ref l_U650 );
        TASK_SHOOT_AT_CHAR( 0, l_U690, 15000, 3 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -106.00000000, 813.68760000, 17.62490000, 3, 1.50000000, 1.50000000, l_U690, 1 );
        TASK_SHOOT_AT_CHAR( 0, l_U690, 5000, 3 );
        TASK_COMBAT( 0, l_U1062 );
        CLOSE_SEQUENCE_TASK( l_U650 );
        TASK_PERFORM_SEQUENCE( l_U819, l_U650 );
        CLEAR_SEQUENCE_TASK( l_U650 );
    }
    SET_CHAR_KEEP_TASK( l_U819, 1 );
    return;
}

void sub_35345(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    int iVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    fVar4 = -3.00000000;
    fVar5 = 3.00000000;
    fVar6 = -4.00000000;
    fVar7 = -0.50000000;
    fVar8 = 0.50000000;
    fVar9 = 4.00000000;
    GET_GAME_TIMER( ref iVar10 );
    if ((iVar10 - l_U371) > l_U372)
    {
        l_U372 = sub_35436( 40, 120 );
        if ((NOT (IS_CHAR_INJURED( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, sub_35504( fVar4, fVar5 ), sub_35504( fVar6, fVar7 ), 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.50000000, sub_35504( fVar8, fVar9 ), ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar11._fU0, uVar11._fU4, uVar11._fU8, ref uVar11._fU8 );
            FIRE_SINGLE_BULLET( uVar14._fU0, uVar14._fU4, uVar14._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8, 1 );
            GET_GAME_TIMER( ref l_U371 );
        }
    }
    return;
}

void sub_35436(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_35504(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_36028()
{
    CREATE_CHAR( 8, l_U845, -118.80100000, 789.50410000, 19.35157000, ref l_U820[0], 1 );
    SET_CHAR_HEADING( l_U820[0], 183.54620000 );
    sub_14067( l_U820[0], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[0], 3 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[0], 1 );
    sub_26365( l_U820[0] );
    SET_DEAD_CHAR_COORDINATES( l_U820[0], -96.02840000, 873.24740000, 24.93210000 );
    CREATE_CHAR( 8, l_U843, -118.80100000 + 1, 789.50410000, 19.35157000, ref l_U820[1], 1 );
    SET_CHAR_HEADING( l_U820[1], 190.43980000 );
    sub_14067( l_U820[1], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[1], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[1], 1 );
    sub_26365( l_U820[1] );
    SET_DEAD_CHAR_COORDINATES( l_U820[1], -95.66291000, 869.07290000, 24.93230000 );
    return;
}

void sub_36487()
{
    if ((g_U10991 == 4) || (g_U10991 == 1))
    {
        sub_36516();
    }
    return;
}

void sub_36516()
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

    if (NOT sub_13792())
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
        sub_36677( iVar2, iVar3, 16383, 16383, ref uVar4 );
        sub_37021( ref uVar4, 1 );
        sub_37049( ref uVar4, 0 );
        sub_37076( ref uVar4 );
    }
    return;
}

void sub_36677(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_36699( uParam0, 0, iParam4 + 0 );
    sub_36699( uParam1, 1, iParam4 + 0 );
    sub_36699( uParam2, 2, iParam4 + 0 );
    sub_36699( uParam3, 3, iParam4 + 0 );
    sub_36699( 0, 4, iParam4 + 0 );
    sub_36699( 1, 5, iParam4 + 0 );
    sub_36699( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_36699(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_37021(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_37049(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_37076(int iParam0)
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
        if (NOT sub_37146())
        {
            sub_2825( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_37273( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2825( iVar9 );
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
                ConcatString(ref cVar5, sub_2539( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_2539( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_37146()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_2539( 1, g_U572[I] )) != 0))
        {
            sub_2825( I );
            return 1;
        }
    }
    return 0;
}

int sub_37273(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_37338( uParam0, g_U572[Result] ))
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

int sub_37338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_2539( 0, uParam0 );
        if (iVar14 == (sub_2539( 0, uParam6 )))
        {
            iVar15 = sub_2539( 3, uParam0 );
            if (iVar15 == (sub_2539( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_39828()
{
    if ((l_U444 == 0) AND (NOT (IS_CHAR_INJURED( l_U697[2] ))))
    {
        GET_CHAR_HEALTH( l_U697[2], ref l_U363 );
        if (l_U363 < 120)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U697[2], 0, 4000, 5, 0, 1, 0, 20.00000000, 0, 0, 0, 0, 0, 0 );
            l_U444 = 1;
        }
    }
    if ((l_U445 == 0) AND (NOT (IS_CHAR_INJURED( l_U717[2] ))))
    {
        GET_CHAR_HEALTH( l_U717[2], ref l_U363 );
        if (l_U363 < 200)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U717[2], 0, 4000, 2, 0, -1, 0, 10.00000000, 0, 0, 0, 0, 0, 0 );
            l_U445 = 1;
        }
    }
    return;
}

void sub_40069()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;

    if (l_U487 == 1)
    {
        GET_GAME_TIMER( ref l_U377 );
        if ((l_U377 - l_U378) > 4000)
        {
            STOP_SOUND( l_U375 );
            l_U487 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U697[2] )))
    {
        GET_CHAR_COORDINATES( l_U697[2], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if ((l_U487 == 0) AND ((uVar2._fU8 > 20) AND ((uVar2._fU8 < 24.75000000) AND (IS_PED_RAGDOLL( l_U697[2] )))))
        {
            GET_GAME_TIMER( ref l_U378 );
            PLAY_SOUND_FROM_PED( l_U375, "E1_RB2_SCREAM", l_U697[2] );
            l_U487 = 1;
        }
        if ((l_U487 == 1) AND (uVar2._fU8 < 18.50000000))
        {
            STOP_SOUND( l_U375 );
            PLAY_SOUND_FROM_PED( l_U376, "GENERIC_SCREAMS_BODY_SPLAT", l_U697[2] );
            l_U487 = 0;
        }
    }
    for ( I = 0; I < l_U710; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U710[I] )))
        {
            GET_CHAR_COORDINATES( l_U710[I], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if ((l_U487 == 0) AND ((uVar2._fU8 > 20) AND ((uVar2._fU8 < 24.75000000) AND (IS_PED_RAGDOLL( l_U710[I] )))))
            {
                GET_GAME_TIMER( ref l_U378 );
                PLAY_SOUND_FROM_PED( l_U375, "E1_RB2_SCREAM", l_U710[I] );
                l_U487 = 1;
            }
            if ((l_U487 == 1) AND (uVar2._fU8 < 18.50000000))
            {
                STOP_SOUND( l_U375 );
                PLAY_SOUND_FROM_PED( l_U376, "GENERIC_SCREAMS_BODY_SPLAT", l_U710[I] );
                l_U487 = 0;
            }
        }
    }
    for ( I = 0; I < l_U701; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U701[I] )))
        {
            GET_CHAR_COORDINATES( l_U701[I], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if ((l_U487 == 0) AND ((uVar2._fU8 > 20) AND ((uVar2._fU8 < 24.75000000) AND (IS_PED_RAGDOLL( l_U701[I] )))))
            {
                GET_GAME_TIMER( ref l_U378 );
                PLAY_SOUND_FROM_PED( l_U375, "E1_RB2_SCREAM", l_U701[I] );
                l_U487 = 1;
            }
            if ((l_U487 == 1) AND (uVar2._fU8 < 18.50000000))
            {
                STOP_SOUND( l_U375 );
                PLAY_SOUND_FROM_PED( l_U376, "GENERIC_SCREAMS_BODY_SPLAT", l_U701[I] );
                l_U487 = 0;
            }
        }
    }
    for ( I = 0; I < l_U725; I++ )
    {
        if ((I == 8) || (I == 7))
        {
            if (NOT (IS_CHAR_DEAD( l_U725[I] )))
            {
                GET_CHAR_COORDINATES( l_U725[I], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if ((l_U487 == 0) AND ((uVar2._fU8 > 20) AND ((uVar2._fU8 < 24.75000000) AND (IS_PED_RAGDOLL( l_U725[I] )))))
                {
                    GET_GAME_TIMER( ref l_U378 );
                    PLAY_SOUND_FROM_PED( l_U375, "E1_RB2_SCREAM", l_U725[I] );
                    l_U487 = 1;
                }
                if ((l_U487 == 1) AND (uVar2._fU8 < 18.50000000))
                {
                    STOP_SOUND( l_U375 );
                    PLAY_SOUND_FROM_PED( l_U376, "GENERIC_SCREAMS_BODY_SPLAT", l_U725[I] );
                    l_U487 = 0;
                }
            }
        }
    }
    return;
}

void sub_41197()
{
    if (NOT (IS_CHAR_INJURED( l_U691 )))
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT (sub_21801( l_U1064 ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U691, 6.00000000, 6.00000000, 2.00000000, 0 )) AND (TIMERB() > l_U364))))
        {
            sub_20311( "E1R2_ISAAC", ref l_U1064, 6, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 8000, 16000, ref l_U364 );
            SETTIMERB( 0 );
        }
    }
    return;
}

void sub_41356()
{
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, 65429, 821, 20, 25.00000000, 75.00000000, 35.00000000, 0 ))) AND (l_U443 == 1))
    {
        STOP_SOUND( l_U367 );
        RELEASE_SOUND_ID( l_U367 );
        l_U443 = 0;
    }
    else if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1062, 65429, 821, 20, 25.00000000, 75.00000000, 35.00000000, 0 )) AND (l_U443 == 0))
    {
        l_U367 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U367, "RB2_COLLECTORS_ITEM_ALARM", 65429, 821, 20 );
        l_U443 = 1;
    }
    if (l_U443 == 1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U367 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
            if ((l_U442 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.34560000, 857.80050000, 16.31420000, 1.50000000, 1.50000000, 2.00000000, 0 )))
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 0.30000000 );
                l_U442 = 1;
            }
            else if ((l_U442 == 1) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.51580000, 854.89260000, 17.62630000, 1.50000000, 1.50000000, 2.00000000, 0 )))
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 1.00000000 );
                l_U442 = 1;
            }
            else if ((l_U442 == 0) AND (l_U365 == 2004012895))
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 1.00000000 );
            }
            else if (l_U365 == -1975100134)
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 0.50000000 );
            }
            else if (l_U365 == -1611808994)
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 0.30000000 );
            }
            else if (l_U365 == 193674066)
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 0.20000000 );
            }
            else if (l_U365 == 0)
            {
                SET_VARIABLE_ON_SOUND( l_U367, "Control", 0.10000000 );
            };;;;;;;
        }
    }
    return;
}

void sub_42054()
{
    if ((l_U428 == 0) AND ((IS_CHAR_FATALLY_INJURED( l_U690 )) || (IS_CHAR_DEAD( l_U690 ))))
    {
        PRINT_NOW( "RB2_FAIL_06", 7500, 1 );
        sub_12655( 5, "E1R2_FAIL4", "E1R2AUD", 0 );
        l_U362 = -1;
        l_U401 = 1;
    }
    if ((l_U428 == 0) AND (NOT (IS_CHAR_DEAD( l_U690 ))))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U690, -107.64210000, 765.37090000, 14.34170000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U690 );
            REMOVE_CHAR_ELEGANTLY( ref l_U690 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U690 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U838 );
            if (DOES_CHAR_EXIST( l_U690 ))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U690 )))
                {
                    DELETE_CHAR( ref l_U690 );
                }
            }
            if (NOT (DOES_CHAR_EXIST( l_U690 )))
            {
                l_U428 = 1;
            }
        }
    }
    return;
}

void sub_42367()
{
    if ((IS_CHAR_FATALLY_INJURED( l_U691 )) || (IS_CHAR_DEAD( l_U691 )))
    {
        PRINT_NOW( "RB2_FAIL_04", 7500, 1 );
        sub_12655( 5, "E1R2_FAIL3", "E1R2AUD", 0 );
        l_U362 = -1;
        l_U401 = 1;
    }
    return;
}

void sub_43189()
{
    int I;
    char[64] cVar3;

    GET_CHAR_COORDINATES( l_U1062, ref l_U379._fU0, ref l_U379._fU4, ref l_U379._fU8 );
    CREATE_CHAR( 8, l_U844, -118.80100000 + 1, 789.50410000 + 1, 19.35157000, ref l_U820[2], 1 );
    SET_CHAR_HEADING( l_U820[2], 265.47870000 );
    sub_14067( l_U820[2], 1, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[2], 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[2], 1 );
    sub_26365( l_U820[2] );
    SET_DEAD_CHAR_COORDINATES( l_U820[2], -102.82630000, 873.23520000, 24.93210000 );
    CREATE_CHAR( 8, l_U843, -118.80100000 + 2, 789.50410000, 19.35157000, ref l_U820[3], 1 );
    SET_CHAR_HEADING( l_U820[3], 326.18250000 );
    sub_14067( l_U820[3], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[3], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[3], 1 );
    sub_26365( l_U820[3] );
    SET_DEAD_CHAR_COORDINATES( l_U820[3], -105.14960000, 872.52540000, 24.93220000 );
    CREATE_CHAR( 8, l_U846, -118.80100000 + 1, 789.50410000 + 1, 19.35157000, ref l_U820[4], 1 );
    SET_CHAR_HEADING( l_U820[4], 255.84380000 );
    sub_14067( l_U820[4], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[4], 3 );
    SET_CHAR_AS_ENEMY( l_U820[4], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[4], 1 );
    sub_26365( l_U820[4] );
    SET_DEAD_CHAR_COORDINATES( l_U820[4], -109.58540000, 875.48430000 - 1, 24.93220000 );
    CREATE_CHAR( 8, l_U845, -118.80100000 + 2, 789.50410000 + 1, 19.35157000, ref l_U820[5], 1 );
    SET_CHAR_HEADING( l_U820[5], 341.78780000 );
    sub_14067( l_U820[5], 1, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[5], 0 );
    SET_CHAR_AS_ENEMY( l_U820[5], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[5], 1 );
    sub_26365( l_U820[5] );
    SET_DEAD_CHAR_COORDINATES( l_U820[5], -105.70530000, 871.58260000, 24.93220000 );
    CREATE_CHAR( 8, l_U846, -118.80100000 + 2, 789.50410000 + 2, 19.35157000, ref l_U820[6], 1 );
    SET_CHAR_HEADING( l_U820[6], 78.46290000 );
    sub_14067( l_U820[6], 2, 1, 1, "Museum2_jugs" );
    sub_14434( l_U820[6], 3 );
    SET_CHAR_AS_ENEMY( l_U820[6], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U820[6], 1 );
    sub_26365( l_U820[6] );
    SET_DEAD_CHAR_COORDINATES( l_U820[6], -100.01300000, 843.63770000, 17.62490000 );
    CREATE_CHAR( 8, l_U845, -121.13450000, 783.32440000, 18.94549000, ref l_U763[5], 1 );
    SET_CHAR_HEADING( l_U763[5], 281.02430000 );
    sub_14067( l_U763[5], 2, 1, 1, "Museum2_Jugs" );
    sub_14434( l_U763[5], 2 );
    sub_44226( l_U763[5] );
    SET_DEAD_CHAR_COORDINATES( l_U763[5], -113.35680000, 851.37810000, 17.62490000 );
    CREATE_CHAR( 8, l_U846, -121.13450000, 783.32440000 - 1, 18.94549000, ref l_U763[6], 1 );
    SET_CHAR_HEADING( l_U763[6], 276.26570000 );
    sub_14067( l_U763[6], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U763[6], 3 );
    sub_26365( l_U763[6] );
    SET_DEAD_CHAR_COORDINATES( l_U763[6], -106.01310000, 847.52780000, 17.62490000 );
    CREATE_CHAR( 8, l_U844, -121.13450000, 783.32440000 - 2, 18.94549000, ref l_U763[7], 1 );
    SET_CHAR_HEADING( l_U763[7], 91.81070000 );
    sub_14067( l_U763[7], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U763[7], 0 );
    sub_26365( l_U763[7] );
    SET_DEAD_CHAR_COORDINATES( l_U763[7], -108.17200000, 851.93400000, 17.62490000 );
    for ( I = 0; I <= 6; I++ )
    {
        StrCopy( ref cVar3, "JUG MAFIA ", 64 );
        StrCopy( ref cVar3, "JUG MAFIA ", 64 );
        ConcatString(ref cVar3, I, 64);
        if (NOT (IS_CHAR_INJURED( l_U820[I] )))
        {
            SET_CHAR_NAME_DEBUG( l_U820[I], ref cVar3 );
        }
    }
    return;
}

void sub_44226(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PED_BONE_POSITION( uParam0, 1205, 0, 0, 0, ref l_U388 );
        FIRE_SINGLE_BULLET( l_U388._fU0 + 0.25000000, l_U388._fU4, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
        FIRE_SINGLE_BULLET( l_U388._fU0 + 0.25000000, l_U388._fU4, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
        FIRE_SINGLE_BULLET( l_U388._fU0 + 0.25000000, l_U388._fU4, l_U388._fU8, l_U388._fU0, l_U388._fU4, l_U388._fU8, 100 );
    }
    return;
}

void sub_45302()
{
    int I;

    if (l_U424 == 0)
    {
        sub_45323();
        if (NOT (IS_CHAR_INJURED( l_U818 )))
        {
            TASK_COMBAT( l_U818, l_U1062 );
            SET_CHAR_KEEP_TASK( l_U818, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U818 );
        }
        if (NOT (IS_CHAR_INJURED( l_U819 )))
        {
            TASK_COMBAT( l_U819, l_U1062 );
            SET_CHAR_KEEP_TASK( l_U819, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U819 );
        }
        for ( I = 0; I <= 15; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U725[I] )))
            {
                TASK_COMBAT( l_U725[I], l_U1062 );
            }
        }
        I = 0;
        for ( I = 0; I <= 6; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U701[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U701[I] );
                SET_CHAR_KEEP_TASK( l_U701[I], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U701[I], 1 );
                SET_CHAR_RELATIONSHIP( l_U701[I], 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U701[I], l_U893 );
                TASK_COMBAT( l_U701[I], l_U1062 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701[I] );
            }
        }
        for ( I = 0; I <= 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U710[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U710[I] );
                SET_CHAR_KEEP_TASK( l_U710[I], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U710[I], 1 );
                SET_CHAR_RELATIONSHIP( l_U710[I], 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U710[I], l_U893 );
                TASK_COMBAT( l_U710[I], l_U1062 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U710[I] );
            }
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U697[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U697[I] );
                SET_CHAR_KEEP_TASK( l_U697[I], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U697[I], 1 );
                SET_CHAR_RELATIONSHIP( l_U697[I], 5, 0 );
                TASK_COMBAT( l_U697[I], l_U1062 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U697[I] );
            }
        }
        l_U424 = 1;
    }
    if ((l_U475 == 1) AND ((l_U1047[0] == 1) AND (l_U503[1] == 0)))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -107.89990000, 851.75790000, 17.62490000, 14.06020000, 8.92730000, 3.50000000, 0 )) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U424 == 1)))
        {
            if (sub_20311( "E1R2_NIKOD", ref l_U1064, 7, 0 ))
            {
                l_U503[1] = 1;
            }
        }
    }
    l_U1047[0] = 1;
    sub_17041();
    sub_47371();
    sub_47500();
    sub_40069();
    sub_41197();
    sub_41356();
    sub_42054();
    sub_42367();
    if (l_U429 == 0)
    {
        GET_CHAR_COORDINATES( l_U1062, ref l_U382._fU0, ref l_U382._fU4, ref l_U382._fU8 );
        if (l_U382._fU8 < 20.50000000)
        {
            if (NOT (IS_CHAR_INJURED( l_U717[4] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U717[4] );
                SET_COMBAT_DECISION_MAKER( l_U717[4], l_U893 );
                TASK_COMBAT( l_U717[4], l_U1062 );
            }
            l_U429 = 1;
        }
    }
    sub_47903();
    l_U921 = 0;
    sub_48163();
    if (l_U465 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.39820000, 852.47740000, 17.62490000 + 1.50000000, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            if (NOT (DOES_BLIP_EXIST( l_U541 )))
            {
                ADD_BLIP_FOR_COORD( -97.13970000, 879.21410000, 13.74960000, ref l_U541 );
            }
            if (DOES_BLIP_EXIST( l_U547 ))
            {
                REMOVE_BLIP( l_U547 );
            }
            l_U1036 = 1;
            sub_3523();
            l_U465 = 1;
        }
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -107.64210000, 765.37090000, 14.34170000, 10.00000000, 6.00000000, 5.00000000, 0 ))) AND (l_U365 == 0))
    {
        if (DOES_BLIP_EXIST( l_U547 ))
        {
            REMOVE_BLIP( l_U547 );
        }
        if (DOES_BLIP_EXIST( l_U541 ))
        {
            REMOVE_BLIP( l_U541 );
        }
        g_U10956 = 0;
        l_U362++;
        l_U362++;
    }
    return;
}

void sub_45323()
{
    if (NOT (IS_CHAR_INJURED( l_U701[0] )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U701[0] )))
        {
            sub_26365( l_U701[0] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701[0] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U701[4] )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U701[4] )))
        {
            sub_26365( l_U701[4] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701[4] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U701[7] )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U701[7] )))
        {
            sub_26365( l_U701[7] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701[7] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U697[2] )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U697[2] )))
        {
            sub_26365( l_U697[2] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U697[2] );
        }
    }
    GET_CHAR_COORDINATES( l_U1062, ref l_U379._fU0, ref l_U379._fU4, ref l_U379._fU8 );
    CREATE_CHAR( 8, l_U843, -96.97180000, 805.74470000, 18.62470000 - 1.00000000, ref l_U725[5], 1 );
    SET_CHAR_HEADING( l_U725[5], 32.75700000 );
    sub_14067( l_U725[5], 2, 1, 1, "Museum2_display1" );
    sub_14434( l_U725[5], 2 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[5], 1 );
    OPEN_SEQUENCE_TASK( ref l_U650 );
    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -103.32420000, 810.36790000, 17.62490000, 3, 1.50000000, 1.50000000, l_U1062, 1 );
    TASK_SHOOT_AT_CHAR( 0, l_U1062, 5000, 3 );
    CLOSE_SEQUENCE_TASK( l_U650 );
    TASK_PERFORM_SEQUENCE( l_U725[5], l_U650 );
    CLEAR_SEQUENCE_TASK( l_U650 );
    SET_CHAR_ACCURACY( l_U725[5], 55 );
    SET_CHAR_AS_ENEMY( l_U725[5], 1 );
    CREATE_CHAR( 8, l_U845, -104.71110000, 790.31470000, 18.62470000 - 1.00000000, ref l_U725[9], 1 );
    SET_CHAR_HEADING( l_U725[9], 65.98830000 );
    sub_14067( l_U725[9], 2, 1, 1, "Museum2_exit" );
    sub_14434( l_U725[9], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U725[9], -101.45820000, 785.28750000, 17.62520000, 0.50000000 );
    SET_CHAR_ACCURACY( l_U725[9], 55 );
    SET_CHAR_AS_ENEMY( l_U725[9], 1 );
    sub_26365( l_U725[9] );
    CREATE_CHAR( 8, l_U846, -103.43800000, 789.68850000, 17.62520000, ref l_U725[10], 1 );
    SET_CHAR_HEADING( l_U725[10], 93.00000000 );
    sub_14067( l_U725[10], 2, 1, 1, "Museum2_exit" );
    sub_14434( l_U725[10], 3 );
    SET_CHAR_ACCURACY( l_U725[10], 10 );
    SET_CHAR_SHOOT_RATE( l_U725[10], 80 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U725[10], -107.92820000, 797.67080000, 17.62490000, 3.00000000 );
    SET_CHAR_AS_ENEMY( l_U725[10], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[10], 1 );
    sub_26365( l_U725[10] );
    CREATE_CHAR( 8, l_U843, -97.56250000, 872.90990000, 13.68350000, ref l_U725[15], 1 );
    SET_CHAR_HEADING( l_U725[15], 181.23000000 );
    sub_14067( l_U725[15], 2, 1, 1, "Museum2_Hall" );
    sub_14434( l_U725[15], 3 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U725[15], -97.63520000, 873.78740000, 13.68350000, 1.00000000 );
    SET_CHAR_ACCURACY( l_U725[15], 42 );
    SET_CHAR_AS_ENEMY( l_U725[15], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[15], 1 );
    return;
}

void sub_47371()
{
    if ((l_U446 == 0) AND (NOT (IS_CHAR_INJURED( l_U725[7] ))))
    {
        GET_CHAR_HEALTH( l_U725[7], ref l_U363 );
        if (l_U363 < 200)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U725[7], 0, 4000, 5, 1, 0, 0, 15.00000000, 0, 0, 0, 0, 0, 0 );
            l_U446 = 1;
        }
    }
    return;
}

void sub_47500()
{
    if ((l_U428 == 0) AND ((NOT (IS_CHAR_DEAD( l_U690 ))) AND (DOES_CHAR_EXIST( l_U690 ))))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U690 )))
        {
            if (sub_21801( l_U1064 ))
            {
                sub_47587( ref l_U1064, 0 );
            }
            DELETE_CHAR( ref l_U690 );
            l_U428 = 1;
        }
    }
    return;
}

void sub_47587(int iParam0, unknown uParam1)
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

void sub_47903()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.74340000, 865.06130000, 13.68340000, 1.28075000, 3.62705000, 2.40000000, 0 ))
    {
        l_U496 = 1;
        if (NOT (IS_CHAR_INJURED( l_U725[15] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U725[15], 1 );
        }
    }
    if ((l_U497 == 0) AND ((NOT (IS_CHAR_INJURED( l_U725[15] ))) AND (l_U496 == 1)))
    {
        OPEN_SEQUENCE_TASK( ref l_U650 );
        TASK_STAND_STILL( 0, 10 );
        TASK_COMBAT_ROLL( 0, 1 );
        TASK_COMBAT( 0, l_U1062 );
        CLOSE_SEQUENCE_TASK( l_U650 );
        TASK_PERFORM_SEQUENCE( l_U725[15], l_U650 );
        CLEAR_SEQUENCE_TASK( l_U650 );
        SET_CHAR_KEEP_TASK( l_U725[15], 1 );
        l_U497 = 1;
    }
    return;
}

void sub_48163()
{
    sub_48175( 0, 0, 0 );
    sub_48175( 0, 1, 1 );
    sub_48175( 0, 9, 9 );
    sub_48175( 1, 2, 2 );
    sub_48175( 1, 3, 3 );
    sub_48175( 2, 4, 4 );
    sub_48175( 2, 5, 5 );
    sub_48175( 2, 12, 12 );
    sub_48175( 3, 6, 6 );
    sub_48175( 3, 7, 7 );
    sub_48175( 4, 8, 8 );
    sub_48175( 4, 10, 10 );
    sub_48175( 4, 11, 11 );
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
    if (l_U365 == 0)
    {
        l_U498 = 1;
    }
    if (l_U498 == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U772[13] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U621[13] )))
            {
                ADD_BLIP_FOR_CHAR( l_U772[13], ref l_U621[13] );
                SET_BLIP_AS_FRIENDLY( l_U621[13], 0 );
                CHANGE_BLIP_COLOUR( l_U621[13], 1 );
                SET_ROUTE( l_U621[13], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[13] ))
        {
            REMOVE_BLIP( l_U621[13] );
        }
        if (NOT (IS_CHAR_INJURED( l_U772[14] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U621[14] )))
            {
                ADD_BLIP_FOR_CHAR( l_U772[14], ref l_U621[14] );
                SET_BLIP_AS_FRIENDLY( l_U621[14], 0 );
                CHANGE_BLIP_COLOUR( l_U621[14], 1 );
                SET_ROUTE( l_U621[14], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[14] ))
        {
            REMOVE_BLIP( l_U621[14] );
        }
        if (NOT (IS_CHAR_INJURED( l_U772[15] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U621[15] )))
            {
                ADD_BLIP_FOR_CHAR( l_U772[15], ref l_U621[15] );
                SET_BLIP_AS_FRIENDLY( l_U621[15], 0 );
                CHANGE_BLIP_COLOUR( l_U621[15], 1 );
                SET_ROUTE( l_U621[15], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[15] ))
        {
            REMOVE_BLIP( l_U621[15] );
        }
        if (NOT (IS_CHAR_INJURED( l_U772[16] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U621[16] )))
            {
                ADD_BLIP_FOR_CHAR( l_U772[16], ref l_U621[16] );
                SET_BLIP_AS_FRIENDLY( l_U621[16], 0 );
                CHANGE_BLIP_COLOUR( l_U621[16], 1 );
                SET_ROUTE( l_U621[16], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[16] ))
        {
            REMOVE_BLIP( l_U621[16] );
        }
    }
    switch (l_U905)
    {
        case 0:
        REQUEST_CAR_RECORDING( 2000 );
        REQUEST_CAR_RECORDING( 2001 );
        REQUEST_CAR_RECORDING( 2002 );
        REQUEST_CAR_RECORDING( 2003 );
        REQUEST_CAR_RECORDING( 2004 );
        if (IS_VEH_DRIVEABLE( l_U851[1] ))
        {
            SET_NEEDS_TO_BE_HOTWIRED( l_U851[1], 1 );
            LOCK_CAR_DOORS( l_U851[1], 5 );
            BURST_CAR_TYRE( l_U851[1], 5 );
            SET_CAR_HEALTH( l_U851[1], 1500 );
        }
        if (IS_VEH_DRIVEABLE( l_U851[2] ))
        {
            SET_NEEDS_TO_BE_HOTWIRED( l_U851[2], 1 );
            LOCK_CAR_DOORS( l_U851[2], 5 );
        }
        if (IS_VEH_DRIVEABLE( l_U851[3] ))
        {
            SET_NEEDS_TO_BE_HOTWIRED( l_U851[3], 1 );
            LOCK_CAR_DOORS( l_U851[3], 5 );
        }
        l_U905++;
        break;
        case 1:
        if ((HAS_CAR_RECORDING_BEEN_LOADED( 2004 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 2003 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 2002 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 2001 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 2000 ))))))
        {
            l_U905++;
        }
        break;
        case 2:
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.48850000, 859.47250000, 15.65700000, 3.00000000, 1.00000000, 5.00000000, 0 ))
        {
            sub_49593();
            sub_50682();
            if (IS_VEH_DRIVEABLE( l_U851[4] ))
            {
                START_PLAYBACK_RECORDED_CAR( l_U851[4], 2000 );
                l_U905++;
            }
            else
            {
                l_U905++;
            }
        }
        break;
        case 3:
        sub_52612( ref l_U851[4], 2000, 1 );
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -99.50985000, 875.25110000, 13.68480000, 6.58310000, 4.26400000, 10, 0 ))
        {
            if (IS_VEH_DRIVEABLE( l_U851[5] ))
            {
                START_PLAYBACK_RECORDED_CAR( l_U851[5], 2001 );
                l_U905++;
            }
            else
            {
                l_U905++;
            }
            if (NOT (IS_CHAR_INJURED( l_U772[13] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[13], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U772[14] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[14], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U772[15] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[15], 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U772[16] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[16], 0 );
            }
        }
        break;
        case 4:
        sub_52612( ref l_U851[4], 2000, 1 );
        sub_52612( ref l_U851[5], 2001, 1 );
        GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
        if (l_U365 == 0)
        {
            if (IS_VEH_DRIVEABLE( l_U851[5] ))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[5] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U851[6] ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U851[6], 2002 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U851[7] ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U851[7], 2003 );
                    }
                    l_U905++;
                }
            }
            else
            {
                l_U905++;
            }
        }
        break;
        case 5:
        sub_52612( ref l_U851[4], 2000, 1 );
        sub_52612( ref l_U851[5], 2001, 1 );
        sub_52612( ref l_U851[6], 2002, 1 );
        sub_52612( ref l_U851[7], 2003, 1 );
        if (IS_VEH_DRIVEABLE( l_U851[6] ))
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -102.05810000, 891.65560000, 14.29880000, 17.73905000, 17.20625000, 20, 0 ))) || (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[6] ))))
            {
                if (IS_VEH_DRIVEABLE( l_U851[8] ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U851[8], 2004 );
                    l_U905++;
                }
            }
        }
        break;
        case 6:
        sub_52612( ref l_U851[4], 2000, 1 );
        sub_52612( ref l_U851[5], 2001, 1 );
        sub_52612( ref l_U851[6], 2002, 1 );
        sub_52612( ref l_U851[7], 2003, 1 );
        sub_52612( ref l_U851[8], 2004, 1 );
        break;
    }
    if (l_U920 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U1062 )))
        {
            if ((l_U490[4] == 1) AND ((l_U490[3] == 1) AND ((l_U490[2] == 1) AND ((l_U490[1] == 1) AND (l_U490[0] == 1)))))
            {
                l_U920 = 1;
            }
            if (l_U905 > 2)
            {
                if (IS_VEH_DRIVEABLE( l_U851[4] ))
                {
                    if ((l_U490[0] == 0) AND ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[4] )))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U772[0] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 1000 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[0], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[0], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[1] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[1], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[1], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[9] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 900 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[9], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[9], 1 );
                        }
                        l_U490[0] = 1;
                    }
                }
                else if (l_U490[0] == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U772[0] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 700 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[0], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[0], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[1], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[1], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[9] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 900 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[9], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[9], 1 );
                    }
                    l_U490[0] = 1;
                }
            }
            if (l_U905 > 3)
            {
                if (IS_VEH_DRIVEABLE( l_U851[5] ))
                {
                    if ((l_U490[1] == 0) AND ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[5] )))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U772[2] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 1000 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[2], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[2], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[3] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[3], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[3], 1 );
                        }
                        l_U490[1] = 1;
                    }
                }
                else if (l_U490[1] == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U772[2] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 500 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[2], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[2], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[3] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[3], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[3], 1 );
                    }
                    l_U490[1] = 1;
                }
            }
            if (l_U905 > 4)
            {
                if (IS_VEH_DRIVEABLE( l_U851[6] ))
                {
                    if ((l_U490[2] == 0) AND ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[6] )))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U772[4] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 500 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[4], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[4], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[5] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 300 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[5], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[5], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[12] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[12], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[12], 1 );
                        }
                        l_U490[2] = 1;
                    }
                }
                else if (l_U490[2] == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U772[4] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 1000 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[4], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[4], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[5] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 300 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[5], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[5], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[12] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[12], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[12], 1 );
                    }
                    l_U490[2] = 1;
                }
                if (IS_VEH_DRIVEABLE( l_U851[7] ))
                {
                    if ((l_U490[3] == 0) AND ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[7] )))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U772[6] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_SWAP_WEAPON( 0, 1 );
                            TASK_PAUSE( 0, 1000 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( 0, -101.66600000, 920.40790000, 13.55960000, 3, -1, 1, 120.86030000 );
                            TASK_SEEK_COVER_FROM_PED( 0, l_U1062, -1 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[6], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[6], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[7] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[7], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[7], 1 );
                        }
                        l_U490[3] = 1;
                    }
                }
                else if (l_U490[3] == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U772[6] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[6], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[6], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[7] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 1000 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[7], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[7], 1 );
                    }
                    l_U490[3] = 1;
                }
            }
            if (l_U905 > 5)
            {
                if (IS_VEH_DRIVEABLE( l_U851[8] ))
                {
                    if ((l_U490[4] == 0) AND ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U851[8] )))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U772[8] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 300 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[8], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[8], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[10] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_PAUSE( 0, 200 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[10], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[10], 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U772[11] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U650 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, l_U1062 );
                            CLOSE_SEQUENCE_TASK( l_U650 );
                            TASK_PERFORM_SEQUENCE( l_U772[11], l_U650 );
                            CLEAR_SEQUENCE_TASK( l_U650 );
                            SET_CHAR_KEEP_TASK( l_U772[11], 1 );
                        }
                        l_U490[4] = 1;
                    }
                }
                else if (l_U490[4] == 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U772[8] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[8], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[8], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[10] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_PAUSE( 0, 800 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[10], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[10], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U772[11] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U650 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, l_U1062 );
                        CLOSE_SEQUENCE_TASK( l_U650 );
                        TASK_PERFORM_SEQUENCE( l_U772[11], l_U650 );
                        CLEAR_SEQUENCE_TASK( l_U650 );
                        SET_CHAR_KEEP_TASK( l_U772[11], 1 );
                    }
                    l_U490[4] = 1;
                }
            }
        }
    }
    return;
}

void sub_48175(unknown uParam0, unknown uParam1, unknown uParam2)
{
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
    if (l_U490[uParam0] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U772[uParam1] )))
        {
            if ((l_U365 == 0) AND (NOT (DOES_BLIP_EXIST( l_U621[uParam2] ))))
            {
                ADD_BLIP_FOR_CHAR( l_U772[uParam1], ref l_U621[uParam2] );
                SET_BLIP_AS_FRIENDLY( l_U621[uParam2], 0 );
                CHANGE_BLIP_COLOUR( l_U621[uParam2], 1 );
                SET_ROUTE( l_U621[uParam2], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[uParam2] ))
        {
            REMOVE_BLIP( l_U621[uParam2] );
        }
    }
    return;
}

void sub_49593()
{
    if (DOES_VEHICLE_EXIST( l_U851[1] ))
    {
        DELETE_CAR( ref l_U851[1] );
        CREATE_CAR( l_U881, -101.15240000, 885.17870000, 14.18850000, ref l_U851[1], 1 );
        SET_CAR_HEADING( l_U851[1], 91.54040000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U851[1] );
        CHANGE_CAR_COLOUR( l_U851[1], 0, 0 );
        SET_EXTRA_CAR_COLOURS( l_U851[1], 0, 0 );
        TURN_OFF_VEHICLE_EXTRA( l_U851[1], 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( l_U851[1], 6, 0 );
        TURN_OFF_VEHICLE_EXTRA( l_U851[1], 7, 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U851[1] );
    }
    CREATE_CAR( l_U881, -109.73290000, 928.91380000, 12.25190000, ref l_U851[4], 1 );
    SET_CAR_HEADING( l_U851[4], 268.05980000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[4] );
    CHANGE_CAR_COLOUR( l_U851[4], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[4], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[4], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[4], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[4], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[4] );
    CREATE_CAR( l_U881, -128.53270000, 929.80200000, 10.23790000, ref l_U851[5], 1 );
    SET_CAR_HEADING( l_U851[5], 266.16640000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[5] );
    CHANGE_CAR_COLOUR( l_U851[5], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[5], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[5], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[5], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[5], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[5] );
    CREATE_CAR( l_U881, -119.92000000, 930.52610000, 10.98040000, ref l_U851[6], 1 );
    SET_CAR_HEADING( l_U851[6], 264.97670000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[6] );
    CHANGE_CAR_COLOUR( l_U851[6], 15, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[6], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[6], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[6], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[6], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[6] );
    CREATE_CAR( l_U881, -130.50240000, 931.10800000, 10.24230000, ref l_U851[7], 1 );
    SET_CAR_HEADING( l_U851[7], 257.89190000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[7] );
    CHANGE_CAR_COLOUR( l_U851[7], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[7], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[7], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[7], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[7], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[7] );
    CREATE_CAR( l_U881, -132.22610000, 927.46200000, 10.31130000, ref l_U851[8], 1 );
    SET_CAR_HEADING( l_U851[8], 257.79160000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[8] );
    CHANGE_CAR_COLOUR( l_U851[8], 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U851[8], 0, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[8], 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[8], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U851[8], 7, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U851[8] );
    return;
}

void sub_50682()
{
    CREATE_CHAR( 8, l_U843, -91.58100000, 895.56640000, 14.28580000, ref l_U772[13], 1 );
    SET_CHAR_HEADING( l_U772[13], 154.04900000 );
    sub_14067( l_U772[13], 4, 0, 1, "" );
    sub_14434( l_U772[13], 0 );
    SET_CHAR_ACCURACY( l_U772[13], 40 );
    SET_CHAR_AS_ENEMY( l_U772[13], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[13], 1 );
    CREATE_CHAR( 8, l_U845, -94.39940000, 897.69530000, 14.13060000, ref l_U772[14], 1 );
    SET_CHAR_HEADING( l_U772[14], 163.21860000 );
    sub_14067( l_U772[14], 2, 0, 1, "" );
    sub_14434( l_U772[14], 2 );
    SET_CHAR_ACCURACY( l_U772[14], 20 );
    SET_CHAR_AS_ENEMY( l_U772[14], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[14], 1 );
    if (IS_VEH_DRIVEABLE( l_U851[4] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U851[4], 8, l_U843, ref l_U772[0] );
        sub_14067( l_U772[0], 2, 0, 1, "" );
        sub_14434( l_U772[0], 4 );
        SET_CHAR_ACCURACY( l_U772[0], 65 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[0], 0 );
        SET_CHAR_AS_ENEMY( l_U772[0], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[4], 8, l_U843, -1, ref l_U772[1] );
        sub_14067( l_U772[1], 2, 0, 1, "" );
        sub_14434( l_U772[1], 3 );
        SET_CHAR_ACCURACY( l_U772[1], 55 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[1], 0 );
        SET_CHAR_AS_ENEMY( l_U772[1], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[4], 8, l_U843, -1, ref l_U772[9] );
        sub_14067( l_U772[9], 2, 0, 1, "" );
        sub_14434( l_U772[9], 0 );
        SET_CHAR_ACCURACY( l_U772[9], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[9], 0 );
        SET_CHAR_AS_ENEMY( l_U772[9], 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U851[5] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U851[5], 8, l_U843, ref l_U772[2] );
        sub_14067( l_U772[2], 2, 0, 1, "" );
        sub_14434( l_U772[2], 3 );
        SET_CHAR_ACCURACY( l_U772[2], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[2], 0 );
        SET_CHAR_AS_ENEMY( l_U772[2], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[5], 8, l_U843, -1, ref l_U772[3] );
        sub_14067( l_U772[3], 2, 0, 1, "" );
        sub_14434( l_U772[3], 3 );
        SET_CHAR_ACCURACY( l_U772[3], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[3], 0 );
        SET_CHAR_AS_ENEMY( l_U772[3], 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U851[6] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U851[6], 8, l_U843, ref l_U772[4] );
        sub_14067( l_U772[4], 4, 0, 1, "" );
        sub_14434( l_U772[4], 1 );
        SET_CHAR_ACCURACY( l_U772[4], 70 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[4], 0 );
        SET_CHAR_AS_ENEMY( l_U772[4], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[6], 8, l_U843, -1, ref l_U772[5] );
        sub_14067( l_U772[5], 2, 0, 1, "" );
        sub_14434( l_U772[5], 3 );
        SET_CHAR_ACCURACY( l_U772[5], 65 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[5], 0 );
        SET_CHAR_AS_ENEMY( l_U772[5], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[6], 8, l_U843, -1, ref l_U772[12] );
        sub_14067( l_U772[12], 2, 0, 1, "" );
        sub_14434( l_U772[12], 3 );
        SET_CHAR_ACCURACY( l_U772[12], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[12], 0 );
        SET_CHAR_AS_ENEMY( l_U772[12], 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U851[7] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U851[7], 8, l_U843, ref l_U772[6] );
        sub_14067( l_U772[6], 4, 0, 1, "" );
        sub_14434( l_U772[6], 3 );
        SET_CHAR_ACCURACY( l_U772[6], 65 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[6], 0 );
        SET_CHAR_AS_ENEMY( l_U772[6], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[7], 8, l_U843, -1, ref l_U772[7] );
        sub_14067( l_U772[7], 2, 0, 1, "" );
        sub_14434( l_U772[7], 3 );
        SET_CHAR_ACCURACY( l_U772[7], 55 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[7], 0 );
        SET_CHAR_AS_ENEMY( l_U772[7], 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U851[8] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U851[8], 8, l_U843, ref l_U772[8] );
        sub_14067( l_U772[8], 4, 0, 1, "" );
        sub_14434( l_U772[8], 1 );
        SET_CHAR_ACCURACY( l_U772[8], 55 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[8], 0 );
        SET_CHAR_AS_ENEMY( l_U772[8], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[8], 8, l_U843, -1, ref l_U772[10] );
        sub_14067( l_U772[10], 1, 0, 1, "" );
        sub_14434( l_U772[10], 1 );
        SET_CHAR_ACCURACY( l_U772[10], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[10], 1 );
        SET_CHAR_AS_ENEMY( l_U772[10], 1 );
        CREATE_CHAR_AS_PASSENGER( l_U851[8], 8, l_U843, -1, ref l_U772[11] );
        sub_14067( l_U772[11], 1, 0, 1, "" );
        sub_14434( l_U772[11], 1 );
        SET_CHAR_ACCURACY( l_U772[11], 75 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U772[11], 0 );
        SET_CHAR_AS_ENEMY( l_U772[11], 1 );
    }
    return;
}

void sub_52612(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (HAS_CAR_RECORDING_BEEN_LOADED( uParam1 ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                SET_PLAYBACK_SPEED( (uParam0^), uParam2 );
                UNPAUSE_PLAYBACK_RECORDED_CAR( (uParam0^) );
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                if (HAS_CAR_RECORDING_BEEN_LOADED( uParam1 ))
                {
                    REMOVE_CAR_RECORDING( uParam1 );
                }
            }
        }
    }
    else
    {
        REQUEST_CAR_RECORDING( uParam1 );
    }
    return;
}

void sub_57686()
{
    int I;

    if (l_U425 == 0)
    {
        sub_57707();
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U742[I] )))
            {
                TASK_COMBAT( l_U742[I], l_U1062 );
            }
        }
        for ( I = 0; I <= 15; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U725[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U725[I] );
                SET_COMBAT_DECISION_MAKER( l_U725[I], l_U893 );
                TASK_COMBAT( l_U725[I], l_U1062 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U725[I] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U725[9] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U725[9] );
            SET_CHAR_DECISION_MAKER( l_U725[9], l_U890 );
            SET_COMBAT_DECISION_MAKER( l_U725[9], l_U893 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( l_U725[9], -113.60450000, 852.87190000, 24.93220000, 3, 1.00000000, 1.00000000, l_U1062, 0 );
        }
        l_U425 = 1;
    }
    sub_47371();
    sub_47500();
    sub_40069();
    sub_41197();
    sub_41356();
    sub_42054();
    sub_42367();
    sub_48163();
    if ((l_U420 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -111.89320000, 767.98640000, 15.99850000, 2.00000000, 2.00000000, 2.00000000, 0 )))
    {
        sub_58718();
        l_U420 = 1;
    }
    if ((l_U447 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -101.38140000, 854.80690000, 17.62630000, 2.00000000, 2.00000000, 2.00000000, 0 )))
    {
        sub_59692();
        l_U447 = 1;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
    if ((l_U365 == 0) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -106.36830000 - 0.20000000, 762.87490000, 14.50000000, 1.60000000 + 1.00000000, 1.60000000, 1.60000000, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U541 ))
        {
            REMOVE_BLIP( l_U541 );
        }
        if (DOES_BLIP_EXIST( l_U547 ))
        {
            REMOVE_BLIP( l_U547 );
        }
        g_U10956 = 0;
        l_U362++;
    }
    sub_11981();
    return;
}

void sub_57707()
{
    CREATE_CHAR( 8, l_U846, -116.30830000, 777.86150000, 18.62470000 - 1.00000000, ref l_U742[0], 1 );
    SET_CHAR_HEADING( l_U742[0], 296.00340000 );
    sub_14067( l_U742[0], 2, 1, 1, "Museum2_store" );
    sub_14434( l_U742[0], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U742[0], -116.30830000, 777.86150000, 18.62470000 - 1.00000000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U742[0], 10 );
    sub_26365( l_U742[0] );
    CREATE_CHAR( 8, l_U845, -114.18590000 - 1.00000000, 771.72380000 + 1.50000000, 18.62470000 - 1.00000000, ref l_U742[1], 1 );
    SET_CHAR_HEADING( l_U742[1], 311.28390000 );
    sub_14067( l_U742[1], 2, 1, 1, "Museum2_store" );
    sub_14434( l_U742[1], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U742[1], -114.18590000, 771.72380000, 18.62470000 - 1.00000000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U742[1], 10 );
    sub_26365( l_U742[1] );
    CREATE_CHAR( 8, l_U845, -104.04320000, 781.41370000 - 2.00000000, 17.59010000, ref l_U742[2], 1 );
    SET_CHAR_HEADING( l_U742[2], 356.84640000 );
    sub_14067( l_U742[2], 2, 1, 1, "Museum2_store" );
    sub_14434( l_U742[2], 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U742[2], -104.04320000, 781.41370000, 17.59010000, 2.00000000 );
    SET_CHAR_ACCURACY( l_U742[2], 10 );
    if (NOT (IS_CHAR_DEAD( l_U742[2] )))
    {
        SET_CHAR_HEALTH( l_U742[2], 5 );
    }
    sub_26365( l_U742[2] );
    return;
}

void sub_58718()
{
    CREATE_CHAR( 8, l_U844, -110.24730000, 754.81470000 - 1.00000000, 14.60320000 - 1.00000000, ref l_U746[0], 1 );
    SET_CHAR_HEADING( l_U746[0], 333.08690000 );
    sub_14067( l_U746[0], 4, 0, 1, "" );
    sub_14434( l_U746[0], 3 );
    SET_CHAR_ACCURACY( l_U746[0], 10 );
    SET_CHAR_AS_ENEMY( l_U746[0], 1 );
    CREATE_CHAR( 8, l_U845, -105.26250000, 754.42300000, 14.64930000 - 1.00000000, ref l_U746[1], 1 );
    SET_CHAR_HEADING( l_U746[1], 39.89410000 );
    sub_14067( l_U746[1], 4, 0, 1, "" );
    sub_14434( l_U746[1], 0 );
    SET_CHAR_ACCURACY( l_U746[1], 10 );
    SET_CHAR_AS_ENEMY( l_U746[1], 1 );
    CREATE_CHAR( 8, l_U846, -81.04480000, 788.35860000 + 1.00000000, 14.21350000 - 1.00000000, ref l_U750[3], 1 );
    if (NOT (IS_CAR_DEAD( l_U861[3] )))
    {
        WARP_CHAR_INTO_CAR( l_U750[3], l_U861[3] );
    }
    sub_14067( l_U750[3], 4, 0, 1, "" );
    sub_14434( l_U750[3], 3 );
    SET_CHAR_AS_ENEMY( l_U750[3], 1 );
    SET_CHAR_ACCURACY( l_U750[3], 40 );
    CREATE_CHAR( 8, l_U844, -111.25830000, 755.93170000 + 2, 14.25010000 - 1.00000000, ref l_U756[3], 1 );
    if (NOT (IS_CAR_DEAD( l_U861[3] )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U756[3], l_U861[3], 0 );
    }
    sub_14067( l_U756[3], 4, 0, 1, "" );
    sub_14434( l_U756[3], 3 );
    SET_CHAR_ACCURACY( l_U756[3], 10 );
    SET_CHAR_AS_ENEMY( l_U756[3], 1 );
    CREATE_CHAR( 8, l_U845, -81.43039000, 784.32690000 + 1.00000000, 14.21130000 - 1.00000000, ref l_U750[4], 1 );
    if (NOT (IS_CAR_DEAD( l_U861[4] )))
    {
        WARP_CHAR_INTO_CAR( l_U750[4], l_U861[4] );
    }
    sub_14067( l_U750[4], 4, 0, 1, "" );
    sub_14434( l_U750[4], 0 );
    SET_CHAR_ACCURACY( l_U750[4], 40 );
    SET_CHAR_AS_ENEMY( l_U750[4], 1 );
    CREATE_CHAR( 8, l_U843, -111.25830000, 755.93170000 + 2, 14.25010000 - 1.00000000, ref l_U756[4], 1 );
    if (NOT (IS_CAR_DEAD( l_U861[4] )))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U756[4], l_U861[4], 0 );
    }
    sub_14067( l_U756[4], 4, 0, 1, "" );
    sub_14434( l_U756[4], 3 );
    SET_CHAR_ACCURACY( l_U756[4], 10 );
    SET_CHAR_AS_ENEMY( l_U756[4], 1 );
    return;
}

void sub_59692()
{
    CREATE_CHAR( 8, l_U843, -91.58100000, 895.56640000, 14.28580000, ref l_U772[15], 1 );
    SET_CHAR_HEADING( l_U772[15], 154.04900000 );
    sub_14067( l_U772[15], 4, 0, 1, "" );
    sub_14434( l_U772[15], 0 );
    SET_CHAR_ACCURACY( l_U772[15], 40 );
    SET_CHAR_AS_ENEMY( l_U772[15], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[15], 1 );
    CREATE_CHAR( 8, l_U845, -94.39940000, 897.69530000, 14.13060000, ref l_U772[16], 1 );
    SET_CHAR_HEADING( l_U772[16], 163.21860000 );
    sub_14067( l_U772[16], 2, 0, 1, "" );
    sub_14434( l_U772[16], 2 );
    SET_CHAR_ACCURACY( l_U772[16], 20 );
    SET_CHAR_AS_ENEMY( l_U772[16], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U772[16], 1 );
    return;
}

void sub_60172()
{
    int I;
    unknown uVar3;

    if (l_U426 == 0)
    {
        if (DOES_BLIP_EXIST( l_U541 ))
        {
            REMOVE_BLIP( l_U541 );
        }
        if (DOES_BLIP_EXIST( l_U547 ))
        {
            REMOVE_BLIP( l_U547 );
        }
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        if (NOT (IS_CAR_DEAD( l_U851[1] )))
        {
            SET_CAR_ON_GROUND_PROPERLY( l_U851[1] );
        }
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U746[I] )))
            {
                TASK_COMBAT( l_U746[I], l_U1062 );
            }
        }
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U742[I] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U742[I] );
                SET_COMBAT_DECISION_MAKER( l_U742[I], l_U893 );
                TASK_COMBAT( l_U742[I], l_U1062 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U742[I] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U746[0] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U746[0], l_U892 );
            if (NOT (IS_PED_IN_COMBAT( l_U746[0] )))
            {
                TASK_COMBAT( l_U746[0], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U746[1] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U746[1], l_U892 );
            if (NOT (IS_PED_IN_COMBAT( l_U746[1] )))
            {
                TASK_COMBAT( l_U746[1], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U750[3] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U750[3], l_U893 );
            if (NOT (IS_PED_IN_COMBAT( l_U750[3] )))
            {
                TASK_COMBAT( l_U750[3], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U756[3] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U756[3], l_U893 );
            if (NOT (IS_PED_IN_COMBAT( l_U756[3] )))
            {
                TASK_COMBAT( l_U756[3], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U750[4] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U750[4], l_U893 );
            if (NOT (IS_PED_IN_COMBAT( l_U750[4] )))
            {
                TASK_COMBAT( l_U750[4], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U756[4] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U756[4], l_U893 );
            if (NOT (IS_PED_IN_COMBAT( l_U756[4] )))
            {
                TASK_COMBAT( l_U756[4], l_U1062 );
            }
        }
        if (l_U480[1] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_15", 7500, 1 );
            l_U480[1] = 1;
        }
        if (DOES_CHAR_EXIST( l_U816 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U816 );
        }
        if (DOES_CHAR_EXIST( l_U817 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U817 );
        }
        if (DOES_CHAR_EXIST( l_U818 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U818 );
        }
        if (DOES_CHAR_EXIST( l_U819 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U819 );
        }
        if (DOES_CHAR_EXIST( l_U691 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U691 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U691 )))
                {
                    DELETE_CHAR( ref l_U691 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U841 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U691 )))
                {
                    if (l_U488 == 0)
                    {
                        TASK_SMART_FLEE_CHAR( l_U691, l_U1062, 1000.00000000, -1 );
                        SET_CHAR_KEEP_TASK( l_U691, 1 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U841 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U691 );
                        l_U488 = 1;
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U861[1] ))
        {
            if (NOT (IS_CAR_DEAD( l_U861[1] )))
            {
                DELETE_CAR( ref l_U861[1] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U861[2] ))
        {
            if (NOT (IS_CAR_DEAD( l_U861[2] )))
            {
                DELETE_CAR( ref l_U861[2] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U861[3] ))
        {
            if (NOT (IS_CAR_DEAD( l_U861[3] )))
            {
                DELETE_CAR( ref l_U861[3] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U861[4] ))
        {
            if (NOT (IS_CAR_DEAD( l_U861[4] )))
            {
                DELETE_CAR( ref l_U861[4] );
            }
        }
        SET_WANTED_MULTIPLIER( 0.10000000 );
        if (NOT (IS_CAR_DEAD( l_U867 )))
        {
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U867, 0 );
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[I] )))
            {
                if ((I == 0) AND ((l_U1040 == 1) AND (l_U1038 == 0)))
                {
                    SAY_AMBIENT_SPEECH( g_U11081[0], "GREET_JOHNNY", 1, 0, 2 );
                    l_U1038 = 1;
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11081[I], 0 );
                CLEAR_CHAR_TASKS( g_U11081[I] );
            }
        }
        sub_17304( 0 );
        l_U480[1] = 0;
        l_U480[4] = 0;
        SETTIMERB( 0 );
        l_U426 = 1;
        l_U434 = 0;
    }
    if (l_U1039 == 0)
    {
        if ((l_U1038 == 1) AND ((NOT (IS_AMBIENT_SPEECH_PLAYING( g_U11081[0] ))) AND (NOT (IS_CHAR_INJURED( g_U11081[0] )))))
        {
            if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
            {
                SAY_AMBIENT_SPEECH( g_U11081[1], "GREET_JOHNNY", 1, 0, 2 );
                l_U1039 = 1;
            }
        }
    }
    if (l_U500 == 0)
    {
        if (l_U1047[1] == 1)
        {
            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U426 == 1))
            {
                if (sub_20311( "E1R2_GUIDO", ref l_U1064, 7, 0 ))
                {
                    l_U500 = 1;
                }
            }
        }
    }
    l_U1047[1] = 1;
    sub_17041();
    l_U921 = 0;
    sub_61986();
    if (l_U924 == 0)
    {
        sub_48163();
    }
    if (l_U921 < 7)
    {
        l_U924 = 1;
    }
    if (l_U1000 == 0)
    {
        sub_62611();
    }
    if ((l_U489 == 0) AND (l_U1000 == 1))
    {
        sub_63609();
    }
    if (l_U489 == 1)
    {
        sub_64599();
    }
    if ((l_U1000 == 0) AND (l_U924 == 1))
    {
        sub_64847();
        MARK_ROAD_NODE_AS_DONT_WANDER( -663.60100000, 1172.52300000, 18.47720000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( -663.75510000, 1160.88800000, 18.57400000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( -381.98130000, 331.96190000, 13.79560000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 152.50120000, -414.11090000, 13.79890000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 152.12810000, -402.71140000, 13.78900000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 135.44250000, -50.81240000, 13.81060000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 59.42610000, 255.08910000, 14.16980000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 59.16960000, 267.04750000, 14.15430000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 187.60420000, 1017.32200000, 13.76380000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 187.28520000, 1005.18500000, 13.76740000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 51.24980000, 999.27110000, 13.70130000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 51.81940000, 1023.57400000, 13.71030000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( -249.52580000, 1575.38400000, 19.47770000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( -249.65740000, 1587.35800000, 19.47090000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( -248.94740000, 1575.65000000, 19.51980000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 48.98140000, 264.22990000, 13.73730000 );
        MARK_ROAD_NODE_AS_DONT_WANDER( 49.07420000, 257.99780000, 13.75590000 );
        SETTIMERA( 0 );
        l_U1000 = 1;
    }
    if (l_U1000 == 1)
    {
        if ((TIMERA() > l_U370) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U489 == 0) AND (l_U1044[0] == 0))))
        {
            if (sub_20311( "E1R2_CHASE", ref l_U1064, 6, 0 ))
            {
                SETTIMERA( 0 );
                l_U370 += 10000;
                if (l_U370 > 73000)
                {
                    l_U1044[0] = 1;
                }
            }
        }
        sub_67380();
        l_U922 = 0;
        l_U923 = 0;
        sub_67596();
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U480[5] == 1) AND (l_U499 == 0)))
        {
            if (sub_20311( "E1R2_CHS", ref l_U1064, 7, 0 ))
            {
                l_U499 = 1;
            }
        }
        if (l_U480[5] == 0)
        {
            if (((l_U922 > 0) AND (l_U923 < 2)) || (l_U922 > 1))
            {
                PRINT_NOW( "RB2_COMMAND_16", 7500, 1 );
                SET_WANTED_MULTIPLIER( 0.10000000 );
                l_U480[5] = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U831[0] )))
        {
            if (IS_VEH_DRIVEABLE( l_U874[0] ))
            {
                if (IS_CHAR_IN_CAR( l_U831[0], l_U874[0] ))
                {
                    l_U978[0] = 1;
                }
            }
        }
        else
        {
            l_U978[0] = 1;
        }
        if (NOT (IS_CHAR_INJURED( l_U831[1] )))
        {
            if (IS_VEH_DRIVEABLE( l_U874[1] ))
            {
                if (IS_CHAR_IN_CAR( l_U831[1], l_U874[1] ))
                {
                    l_U978[1] = 1;
                }
            }
        }
        else
        {
            l_U978[1] = 1;
        }
        if (l_U511 == 0)
        {
            sub_68305( ref l_U828[0] );
            sub_68305( ref l_U831[0] );
            sub_68305( ref l_U828[1] );
            sub_68305( ref l_U831[1] );
            l_U511 = 1;
        }
        if ((l_U512[0] == 0) AND (NOT (IS_CHAR_INJURED( l_U828[0] ))))
        {
            if (((sub_68529( l_U828[0], 1 )) == 1) || ((sub_68455( l_U828[0], 91 )) == 0))
            {
                CLEAR_CHAR_TASKS( l_U828[0] );
                l_U1005[0] = 0;
                l_U1001[0] = 0;
            }
            if (IS_PED_IN_COMBAT( l_U828[0] ))
            {
                CLEAR_CHAR_TASKS( l_U828[0] );
            }
        }
        if ((l_U512[1] == 0) AND (NOT (IS_CHAR_INJURED( l_U831[0] ))))
        {
            if (((sub_68529( l_U831[0], 1 )) == 1) || ((sub_68455( l_U831[0], 91 )) == 0))
            {
                CLEAR_CHAR_TASKS( l_U831[0] );
                l_U1009[0] = 0;
            }
            if (IS_PED_IN_COMBAT( l_U831[0] ))
            {
                CLEAR_CHAR_TASKS( l_U831[0] );
            }
        }
        if ((l_U512[2] == 0) AND (NOT (IS_CHAR_INJURED( l_U828[1] ))))
        {
            if (((sub_68529( l_U828[1], 1 )) == 1) || ((sub_68455( l_U828[1], 91 )) == 0))
            {
                CLEAR_CHAR_TASKS( l_U828[1] );
                l_U1005[1] = 0;
                l_U1001[1] = 0;
            }
            if (IS_PED_IN_COMBAT( l_U828[1] ))
            {
                CLEAR_CHAR_TASKS( l_U828[1] );
            }
        }
        if ((l_U512[3] == 0) AND (NOT (IS_CHAR_INJURED( l_U831[1] ))))
        {
            if (((sub_68529( l_U831[1], 1 )) == 1) || ((sub_68455( l_U831[1], 91 )) == 0))
            {
                CLEAR_CHAR_TASKS( l_U831[1] );
                l_U1009[1] = 0;
            }
            if (IS_PED_IN_COMBAT( l_U831[1] ))
            {
                CLEAR_CHAR_TASKS( l_U831[1] );
            }
        }
        sub_69065();
        if ((l_U923 != 0) AND ((IS_CHAR_IN_ANY_CAR( l_U1062 )) AND (l_U1058[0] == 0)))
        {
            PRINT_HELP( "RB2_HELP_01" );
            l_U1058[0] = 1;
        }
        sub_69580();
        if ((l_U968[0] == 1) AND (l_U974[0] == 1))
        {
            if (l_U978[0] == 0)
            {
                if (l_U1001[0] == 0)
                {
                    sub_71776( ref l_U828[0], ref l_U874[0] );
                    l_U1001[0] = 1;
                }
            }
            if (l_U1005[0] == 0)
            {
                if (l_U978[0] == 1)
                {
                    sub_71973( ref l_U828[0], ref l_U874[0] );
                    l_U1005[0] = 1;
                }
            }
            if (l_U1009[0] == 0)
            {
                sub_72257( ref l_U831[0], ref l_U874[0] );
                l_U1009[0] = 1;
            }
        }
        if ((l_U968[1] == 1) AND (l_U974[1] == 1))
        {
            if (l_U978[1] == 0)
            {
                if (l_U1001[1] == 0)
                {
                    sub_71776( ref l_U828[1], ref l_U874[1] );
                    l_U1001[1] = 1;
                }
            }
            if (l_U978[1] == 1)
            {
                if (l_U1005[1] == 0)
                {
                    sub_72594( ref l_U828[1], ref l_U874[1], ref l_U828[0] );
                    l_U1005[1] = 1;
                }
            }
            if (l_U1009[1] == 0)
            {
                sub_72257( ref l_U831[1], ref l_U874[1] );
                l_U1009[1] = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U828[0] )))
        {
            l_U968[0] = 1;
            if (((l_U1005[0] == 1) || (l_U1001[0] == 1)) AND (IS_CHAR_IN_ANY_CAR( l_U828[0] )))
            {
                l_U982[0] = 1;
            }
        }
        else
        {
            l_U968[0] = 0;
            if (NOT (IS_CHAR_INJURED( l_U828[1] )))
            {
                l_U508 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U828[1] )))
        {
            l_U968[1] = 1;
            if (((l_U1005[1] == 1) || (l_U1001[1] == 1)) AND (IS_CHAR_IN_ANY_CAR( l_U828[1] )))
            {
                l_U982[1] = 1;
            }
        }
        else
        {
            l_U968[1] = 0;
            if (NOT (IS_CHAR_INJURED( l_U828[0] )))
            {
                l_U508 = 0;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U831[0] )))
        {
            l_U971[0] = 1;
        }
        else
        {
            l_U971[0] = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U831[1] )))
        {
            l_U971[1] = 1;
        }
        else
        {
            l_U971[1] = 0;
        }
        if ((l_U978[1] == 1) AND ((l_U968[1] == 1) AND (l_U968[0] == 0)))
        {
            if (l_U502 == 0)
            {
                sub_71973( ref l_U828[1], ref l_U874[1] );
                sub_73349( ref l_U831[0], ref l_U874[0], ref l_U828[1] );
                l_U502 = 1;
            }
        }
        if ((l_U968[1] == 0) AND (l_U968[0] == 1))
        {
            if (l_U1017[0] == 0)
            {
                sub_73349( ref l_U831[1], ref l_U874[1], ref l_U828[0] );
                l_U1017[0] = 1;
            }
        }
        if ((l_U508 == 1) AND ((l_U968[1] == 0) AND (l_U968[0] == 0)))
        {
            if (l_U1017[1] == 0)
            {
                if (l_U971[0] == 1)
                {
                    sub_71973( ref l_U831[0], ref l_U874[0] );
                    sub_73349( ref l_U831[1], ref l_U874[1], ref l_U831[0] );
                    l_U1017[1] = 1;
                }
                else
                {
                    sub_73880( ref l_U831[1], ref l_U874[1] );
                    l_U1017[1] = 1;
                }
            }
        }
        if ((l_U508 == 0) AND ((l_U968[1] == 0) AND (l_U968[0] == 0)))
        {
            if (l_U1017[2] == 0)
            {
                if (l_U971[1] == 1)
                {
                    sub_71973( ref l_U831[1], ref l_U874[1] );
                    sub_73349( ref l_U831[0], ref l_U874[0], ref l_U831[1] );
                    l_U1017[2] = 1;
                }
                else
                {
                    sub_73880( ref l_U831[0], ref l_U874[0] );
                    l_U1017[2] = 1;
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U874[0] ))
        {
            if ((l_U519[0] == 1) AND (NOT (IS_CHAR_INJURED( l_U828[0] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U828[0], l_U874[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U828[0], 0 );
                    l_U512[0] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U828[0] )))
                    {
                        TASK_COMBAT( l_U828[0], l_U1062 );
                    }
                }
            }
            if ((l_U519[1] == 1) AND (NOT (IS_CHAR_INJURED( l_U831[0] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U831[0], l_U874[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U831[0], 0 );
                    l_U512[1] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U831[0] )))
                    {
                        TASK_COMBAT( l_U831[0], l_U1062 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U828[0] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U828[0], 0 );
            l_U512[0] = 1;
            if (NOT (IS_PED_IN_COMBAT( l_U828[0] )))
            {
                TASK_COMBAT( l_U828[0], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U831[0] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U831[0], 0 );
            l_U512[1] = 1;
            if (NOT (IS_PED_IN_COMBAT( l_U831[0] )))
            {
                TASK_COMBAT( l_U831[0], l_U1062 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U874[1] ))
        {
            if ((l_U519[2] == 1) AND (NOT (IS_CHAR_INJURED( l_U828[1] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U828[1], l_U874[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U828[1], 0 );
                    l_U512[2] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U828[1] )))
                    {
                        TASK_COMBAT( l_U828[1], l_U1062 );
                    }
                }
            }
            if ((l_U519[3] == 1) AND (NOT (IS_CHAR_INJURED( l_U831[1] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U831[1], l_U874[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U831[1], 0 );
                    l_U512[3] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U831[1] )))
                    {
                        TASK_COMBAT( l_U831[1], l_U1062 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U828[1] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U828[1], 0 );
            l_U512[2] = 1;
            if (NOT (IS_PED_IN_COMBAT( l_U828[1] )))
            {
                TASK_COMBAT( l_U828[1], l_U1062 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U831[1] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U831[1], 0 );
            l_U512[3] = 1;
            if (NOT (IS_PED_IN_COMBAT( l_U831[1] )))
            {
                TASK_COMBAT( l_U831[1], l_U1062 );
            }
        }
        l_U539 = 0;
        sub_75212();
    }
    if (l_U1000 == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U834[0] )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U834[0], l_U1062, 50, 50, 150, 0 )))
            {
                l_U1013[0] = 1;
            }
        }
        else
        {
            l_U1013[0] = 1;
        }
        if (NOT (IS_CHAR_INJURED( l_U834[1] )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U834[1], l_U1062, 50, 50, 150, 0 )))
            {
                l_U1013[1] = 1;
            }
        }
        else
        {
            l_U1013[1] = 1;
        }
    }
    if ((l_U1013[1] == 1) AND (l_U1013[0] == 1))
    {
        if (l_U1029 == 0)
        {
            if (IS_VEH_DRIVEABLE( l_U851[7] ))
            {
                if ((l_U990[7] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[7] ))))
                {
                    l_U877 = l_U851[7];
                    l_U990[7] = 1;
                }
            }
            if (l_U1029 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U851[5] ))
                {
                    if ((l_U990[5] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[5] ))))
                    {
                        l_U877 = l_U851[5];
                        l_U990[5] = 1;
                        l_U1029 = 1;
                    }
                }
            }
            if (l_U1029 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U851[4] ))
                {
                    if ((l_U990[4] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[4] ))))
                    {
                        l_U877 = l_U851[4];
                        l_U990[4] = 1;
                        l_U1029 = 1;
                    }
                }
            }
            if (l_U1029 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U851[3] ))
                {
                    if ((l_U990[3] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[3] ))))
                    {
                        l_U877 = l_U851[3];
                        l_U990[3] = 1;
                        l_U1029 = 1;
                    }
                }
            }
            if (l_U1029 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U851[2] ))
                {
                    if ((l_U990[2] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[2] ))))
                    {
                        l_U877 = l_U851[2];
                        l_U990[2] = 1;
                        l_U1029 = 1;
                    }
                }
            }
            if (l_U1029 == 0)
            {
                if (IS_VEH_DRIVEABLE( l_U851[1] ))
                {
                    if ((l_U990[1] == 0) AND (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[1] ))))
                    {
                        l_U877 = l_U851[1];
                        l_U990[1] = 1;
                        l_U1029 = 1;
                    }
                }
            }
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -85.10990000, 929.76700000, 13.49630000, 100, 100, 100, 0 ))) AND (l_U1029 == 0))
            {
                if (NOT (DOES_VEHICLE_EXIST( l_U877 )))
                {
                    CLEAR_AREA( -102.99720000, 928.49580000, 12.84790000, 2, 0 );
                    CREATE_CAR( l_U881, -85.10990000, 929.76700000, 13.49630000, ref l_U877, 1 );
                    SET_CAR_HEADING( l_U877, 270.40020000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U877 );
                    CHANGE_CAR_COLOUR( l_U877, 15, 0 );
                    SET_EXTRA_CAR_COLOURS( l_U877, 0, 0 );
                    TURN_OFF_VEHICLE_EXTRA( l_U877, 5, 0 );
                    TURN_OFF_VEHICLE_EXTRA( l_U877, 6, 0 );
                    TURN_OFF_VEHICLE_EXTRA( l_U877, 7, 0 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U877 );
                    l_U1029 = 1;
                }
            }
        }
        if (l_U1028 == 0)
        {
            MARK_ROAD_NODE_AS_DONT_WANDER( -663.60100000, 1172.52300000, 18.47720000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( -663.75510000, 1160.88800000, 18.57400000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( -381.98130000, 331.96190000, 13.79560000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 152.50120000, -414.11090000, 13.79890000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 152.12810000, -402.71140000, 13.78900000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 135.44250000, -50.81240000, 13.81060000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 59.42610000, 255.08910000, 14.16980000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 59.16960000, 267.04750000, 14.15430000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 187.60420000, 1017.32200000, 13.76380000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 187.28520000, 1005.18500000, 13.76740000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 51.24980000, 999.27110000, 13.70130000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 51.81940000, 1023.57400000, 13.71030000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( -249.52580000, 1575.38400000, 19.47770000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( -249.65740000, 1587.35800000, 19.47090000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( -248.94740000, 1575.65000000, 19.51980000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 48.98140000, 264.22990000, 13.73730000 );
            MARK_ROAD_NODE_AS_DONT_WANDER( 49.07420000, 257.99780000, 13.75590000 );
            sub_68305( ref l_U834[0] );
            sub_68305( ref l_U834[1] );
            l_U1028 = 1;
        }
        if (NOT (IS_CHAR_INJURED( l_U834[1] )))
        {
            if (IS_VEH_DRIVEABLE( l_U877 ))
            {
                if (IS_CHAR_IN_CAR( l_U834[1], l_U877 ))
                {
                    l_U978[2] = 1;
                }
            }
        }
        else
        {
            l_U978[2] = 1;
        }
        if ((l_U512[4] == 0) AND (NOT (IS_CHAR_INJURED( l_U834[0] ))))
        {
            if ((sub_68455( l_U834[0], 91 )) == 0)
            {
                CLEAR_CHAR_TASKS( l_U834[0] );
                l_U1001[2] = 0;
                l_U1005[2] = 0;
            }
        }
        if ((l_U512[5] == 0) AND (NOT (IS_CHAR_INJURED( l_U834[1] ))))
        {
            if ((sub_68455( l_U834[1], 91 )) == 0)
            {
                CLEAR_CHAR_TASKS( l_U834[1] );
                l_U1009[2] = 0;
                l_U526 = 0;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U834[0] )))
        {
            if (l_U1001[2] == 0)
            {
                sub_71776( ref l_U834[0], ref l_U877 );
                l_U1001[2] = 1;
            }
            if (l_U1009[2] == 0)
            {
                sub_72257( ref l_U834[1], ref l_U877 );
                l_U1009[2] = 1;
            }
            if ((l_U978[2] == 1) AND (l_U1005[2] == 0))
            {
                sub_71973( ref l_U834[0], ref l_U877 );
                l_U1005[2] = 1;
            }
        }
        else if (l_U526 == 0)
        {
            sub_73880( ref l_U834[1], ref l_U877 );
            l_U526 = 1;
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U877 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U834[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U834[0], 0 );
                l_U512[4] = 1;
                if (NOT (IS_PED_IN_COMBAT( l_U834[0] )))
                {
                    TASK_COMBAT( l_U834[0], l_U1062 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U834[1] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U834[1], 0 );
                l_U512[5] = 1;
                if (NOT (IS_PED_IN_COMBAT( l_U834[1] )))
                {
                    TASK_COMBAT( l_U834[1], l_U1062 );
                }
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U877 ))
        {
            if ((l_U519[4] == 1) AND (NOT (IS_CHAR_INJURED( l_U834[0] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U834[0], l_U877 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U834[0], 0 );
                    l_U512[4] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U834[0] )))
                    {
                        TASK_COMBAT( l_U834[0], l_U1062 );
                    }
                }
            }
            if ((l_U519[5] == 1) AND (NOT (IS_CHAR_INJURED( l_U834[1] ))))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U834[1], l_U877 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U834[1], 0 );
                    l_U512[5] = 1;
                    if (NOT (IS_PED_IN_COMBAT( l_U834[1] )))
                    {
                        TASK_COMBAT( l_U834[1], l_U1062 );
                    }
                }
            }
        }
    }
    if ((l_U1000 == 1) AND (l_U489 == 0))
    {
        if (l_U539 == 0)
        {
            l_U489 = 1;
        }
        else
        {
            l_U489 = 0;
        }
        if ((IS_WANTED_LEVEL_GREATER( l_U1063, 0 )) AND (l_U489 == 1))
        {
            PRINT_NOW( "RB2_COMMAND_07", 7500, 1 );
            l_U434 = 0;
        }
    }
    if ((l_U489 == 1) AND ((l_U434 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))))
    {
        if (DOES_BLIP_EXIST( l_U544 ))
        {
            REMOVE_BLIP( l_U544 );
        }
        if (l_U480[1] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_07", 7500, 1 );
            l_U480[1] = 1;
        }
        l_U434 = 0;
    }
    if ((l_U489 == 1) AND ((l_U474 == 1) AND ((l_U434 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))))))
    {
        if ((l_U470 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, l_U536._fU0, l_U536._fU4, l_U536._fU8, 30.00000000, 30.00000000, 100.00000000, 0 )))
        {
            ;
        }
        else if (NOT (DOES_BLIP_EXIST( l_U544 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U813 )))
            {
                ADD_BLIP_FOR_CHAR( l_U813, ref l_U544 );
                SET_BLIP_AS_FRIENDLY( l_U544, 1 );
            }
            else
            {
                ADD_BLIP_FOR_COORD( l_U536._fU0, l_U536._fU4, l_U536._fU8, ref l_U544 );
                CHANGE_BLIP_COLOUR( l_U544, 3 );
            }
            SET_ROUTE( l_U544, 1 );
        }
        if (l_U480[2] == 0)
        {
            PRINT_NOW( "RB2_COMMAND_10", 7500, 1 );
            l_U480[2] = 1;
        }
        l_U434 = 1;;
    }
    if (l_U421 == 0)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -106.36860000, 763.03520000, 15.29020000, 22.00000000, 22.00000000, 22.00000000, 0 )))
        {
            if (NOT (IS_CAR_DEAD( l_U861[0] )))
            {
                EXPLODE_CAR( l_U861[0], 1, 0 );
            }
            l_U421 = 1;
        }
    }
    sub_11981();
    sub_41356();
    if ((l_U474 == 1) AND ((NOT (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))) AND (l_U470 == 0)))
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, l_U536._fU0, l_U536._fU4, l_U536._fU8, 30.00000000, 30.00000000, 60.00000000, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, l_U536._fU0, l_U536._fU4, l_U536._fU8, 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            sub_78577();
        }
    }
    sub_79854();
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U489 == 1) AND ((NOT (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))) AND (l_U474 == 0))))
    {
        if (sub_80932( 1, "E1R2_CALL6", "E1R2AUD" ))
        {
            WAIT( 500 );
            while ((sub_83938()) || ((sub_83903()) || (sub_83809( 1 ))))
            {
                WAIT( 0 );
            }
            l_U474 = 1;
            if (IS_WANTED_LEVEL_GREATER( l_U1063, 0 ))
            {
                l_U434 = 1;
            }
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U813 ))) AND ((l_U466 == 1) AND (l_U434 == 1)))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, l_U813, 7.00000000, 7.00000000, 7.00000000, 0 ))
        {
            if (DOES_BLIP_EXIST( l_U544 ))
            {
                REMOVE_BLIP( l_U544 );
            }
            l_U362++;
        }
    }
    return;
}

void sub_61986()
{
    if (NOT (IS_CHAR_INJURED( l_U772[0] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[1] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[2] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[3] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[4] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[5] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[6] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[7] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[8] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[9] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[10] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[11] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[12] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[13] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[14] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[15] )))
    {
        l_U921++;
    }
    if (NOT (IS_CHAR_INJURED( l_U772[16] )))
    {
        l_U921++;
    }
    return;
}

void sub_62611()
{
    sub_62629( ref l_U697, ref l_U549, 3 );
    sub_62629( ref l_U701, ref l_U553, 8 );
    sub_62629( ref l_U710, ref l_U562, 6 );
    sub_62629( ref l_U717, ref l_U569, 7 );
    sub_62629( ref l_U725, ref l_U577, 16 );
    sub_62629( ref l_U742, ref l_U594, 3 );
    sub_62629( ref l_U746, ref l_U598, 3 );
    sub_62629( ref l_U750, ref l_U602, 5 );
    sub_62629( ref l_U756, ref l_U608, 5 );
    sub_62629( ref l_U790, ref l_U615, 5 );
    return;
}

void sub_62629(unknown uParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;

    for ( I = 0; I <= (iParam2 - 1); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], 108.00540000, 864.42830000, 21.27855000, 3.47005000, 10.96620000, 6.65365000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], -96.88055000, 862.43540000, 25.33350000, 6.47435000, 13.22520000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], 18.25125000, 810.39780000, 17.62490000, 110.48070000, 42.72075000, 20, 0 ))))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                    {
                        DELETE_CHAR( ref (uParam0^)[I] );
                    }
                }
                iVar7 = 0;
            }
            else
            {
                iVar7 = 1;
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I] ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[I], ref iVar6 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], -99.66875000, 870.86760000, 13.68350000, 6.27690000, 13.76810000, 2.50000000, 0 )) || ((iVar7 == 1) AND (iVar6 == 0)))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, (uParam0^)[I], 150.00000000, 150.00000000, 150.00000000, 0 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam1^)[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( (uParam0^)[I], ref (uParam1^)[I] );
                            SET_BLIP_AS_FRIENDLY( (uParam1^)[I], 0 );
                            CHANGE_BLIP_COLOUR( (uParam1^)[I], 1 );
                            SET_ROUTE( (uParam1^)[I], 0 );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, (uParam0^)[I], 150.00000000, 150.00000000, 150.00000000, 0 )))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                        {
                            if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                            {
                                DELETE_CHAR( ref (uParam0^)[I] );
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( (uParam1^)[I] ))
                {
                    REMOVE_BLIP( (uParam1^)[I] );
                }
            }
            else
            {
                GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -97.28080000, 879.53050000, 13.80900000, 20, 20, 20, 0 ))) AND (l_U365 == 0))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                    {
                        DELETE_CHAR( ref (uParam0^)[I] );
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( (uParam1^)[I] ))
        {
            REMOVE_BLIP( (uParam1^)[I] );
        }
    }
    return;
}

void sub_63609()
{
    sub_63627( ref l_U697, ref l_U549, 3 );
    sub_63627( ref l_U701, ref l_U553, 8 );
    sub_63627( ref l_U710, ref l_U562, 6 );
    sub_63627( ref l_U717, ref l_U569, 7 );
    sub_63627( ref l_U725, ref l_U577, 16 );
    sub_63627( ref l_U742, ref l_U594, 3 );
    sub_63627( ref l_U746, ref l_U598, 3 );
    sub_63627( ref l_U750, ref l_U602, 5 );
    sub_63627( ref l_U756, ref l_U608, 5 );
    sub_63627( ref l_U790, ref l_U615, 5 );
    return;
}

void sub_63627(unknown uParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;

    for ( I = 0; I <= (iParam2 - 1); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], 108.00540000, 864.42830000, 21.27855000, 3.47005000, 10.96620000, 6.65365000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], -96.88055000, 862.43540000, 25.33350000, 6.47435000, 13.22520000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], 18.25125000, 810.39780000, 17.62490000, 110.48070000, 42.72075000, 20, 0 ))))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                    {
                        DELETE_CHAR( ref (uParam0^)[I] );
                    }
                }
                iVar7 = 0;
            }
            else
            {
                iVar7 = 1;
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U1062 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I] ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[I], ref iVar6 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( (uParam0^)[I], -99.66875000, 870.86760000, 13.68350000, 6.27690000, 13.76810000, 2.50000000, 0 )) || ((iVar7 == 1) AND (iVar6 == 0)))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, (uParam0^)[I], 150.00000000, 150.00000000, 150.00000000, 0 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( (uParam1^)[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( (uParam0^)[I], ref (uParam1^)[I] );
                            SET_BLIP_AS_FRIENDLY( (uParam1^)[I], 0 );
                            CHANGE_BLIP_COLOUR( (uParam1^)[I], 1 );
                            SET_ROUTE( (uParam1^)[I], 0 );
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1062, (uParam0^)[I], 150.00000000, 150.00000000, 150.00000000, 0 )))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
                        {
                            if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                            {
                                DELETE_CHAR( ref (uParam0^)[I] );
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( (uParam1^)[I] ))
                {
                    REMOVE_BLIP( (uParam1^)[I] );
                }
            }
            else
            {
                GET_KEY_FOR_CHAR_IN_ROOM( l_U1062, ref l_U365 );
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1062, -97.28080000, 879.53050000, 13.80900000, 20, 20, 20, 0 ))) AND (l_U365 == 0))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] )))
                    {
                        DELETE_CHAR( ref (uParam0^)[I] );
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( (uParam1^)[I] ))
        {
            REMOVE_BLIP( (uParam1^)[I] );
        }
    }
    return;
}

void sub_64599()
{
    sub_64617( ref l_U697, ref l_U549, 3 );
    sub_64617( ref l_U701, ref l_U553, 8 );
    sub_64617( ref l_U710, ref l_U562, 6 );
    sub_64617( ref l_U717, ref l_U569, 7 );
    sub_64617( ref l_U725, ref l_U577, 16 );
    sub_64617( ref l_U742, ref l_U594, 3 );
    sub_64617( ref l_U746, ref l_U598, 3 );
    sub_64617( ref l_U750, ref l_U602, 5 );
    sub_64617( ref l_U756, ref l_U608, 5 );
    sub_64617( ref l_U790, ref l_U615, 5 );
    return;
}

void sub_64617(unknown uParam0, unknown uParam1, int iParam2)
{
    int I;

    for ( I = 0; I <= (iParam2 - 1); I++ )
    {
        if (DOES_BLIP_EXIST( (uParam1^)[I] ))
        {
            REMOVE_BLIP( (uParam1^)[I] );
        }
    }
    return;
}

void sub_64847()
{
    vector vVar2;
    int I;
    float fVar6;
    float fVar7;
    int J;
    int iVar9;

    fVar6 = 5000;
    for ( J = 0; J <= 1; J++ )
    {
        iVar9 = 0;
        I = 0;
        vVar2 = {5000, 5000, 5000};
        fVar6 = 5000;
        fVar7 = 5000;
        GET_CHAR_COORDINATES( l_U1062, ref l_U382._fU0, ref l_U382._fU4, ref l_U382._fU8 );
        for ( I = 0; I < 17; I++ )
        {
            if (l_U931[I] == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U772[I] )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U772[I] )))
                    {
                        GET_CHAR_COORDINATES( l_U772[I], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                        GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, vVar2.x, vVar2.y, vVar2.z, ref fVar7 );
                        if (fVar7 < fVar6)
                        {
                            fVar6 = fVar7;
                            iVar9 = I;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U772[iVar9] )))
        {
            l_U834[J] = l_U772[iVar9];
            SET_CHAR_NAME_DEBUG( l_U834[0], "StayBack0" );
            l_U931[iVar9] = 1;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U851[6] ))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[6] )))
        {
            sub_65257( l_U851[6], 0 );
            l_U874[0] = l_U851[6];
            l_U1031[0] = 1;
            l_U990[6] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U851[8] )) AND (l_U1031[0] == 0))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[8] )))
        {
            sub_65257( l_U851[8], 0 );
            l_U874[0] = l_U851[8];
            l_U1031[0] = 1;
            l_U990[8] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U851[7] )) AND (l_U1031[0] == 0))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[7] )))
        {
            sub_65257( l_U851[7], 0 );
            l_U874[0] = l_U851[7];
            l_U1031[0] = 1;
            l_U990[7] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U851[5] )) AND (l_U1031[0] == 0))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[5] )))
        {
            sub_65257( l_U851[5], 0 );
            l_U874[0] = l_U851[5];
            l_U1031[0] = 1;
            l_U990[5] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U851[4] )) AND (l_U1031[0] == 0))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[4] )))
        {
            sub_65257( l_U851[4], 0 );
            l_U874[0] = l_U851[4];
            l_U1031[0] = 1;
            l_U990[4] = 1;
        }
    }
    if ((l_U990[6] == 0) AND (IS_VEH_DRIVEABLE( l_U851[6] )))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[6] )))
        {
            sub_65257( l_U851[6], 1 );
            l_U874[1] = l_U851[6];
            l_U1031[1] = 1;
            l_U990[6] = 1;
        }
    }
    if ((l_U990[8] == 0) AND ((IS_VEH_DRIVEABLE( l_U851[8] )) AND (l_U1031[1] == 0)))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[8] )))
        {
            sub_65257( l_U851[8], 1 );
            l_U874[1] = l_U851[8];
            l_U1031[1] = 1;
            l_U990[8] = 1;
        }
    }
    if ((l_U990[7] == 0) AND ((IS_VEH_DRIVEABLE( l_U851[7] )) AND (l_U1031[1] == 0)))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[7] )))
        {
            sub_65257( l_U851[7], 1 );
            l_U874[1] = l_U851[7];
            l_U1031[1] = 1;
            l_U990[7] = 1;
        }
    }
    if ((l_U990[5] == 0) AND ((IS_VEH_DRIVEABLE( l_U851[5] )) AND (l_U1031[1] == 0)))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[5] )))
        {
            sub_65257( l_U851[5], 1 );
            l_U874[1] = l_U851[5];
            l_U1031[1] = 1;
            l_U990[5] = 1;
        }
    }
    if ((l_U990[4] == 0) AND ((IS_VEH_DRIVEABLE( l_U851[4] )) AND (l_U1031[1] == 0)))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U1062, l_U851[4] )))
        {
            sub_65257( l_U851[4], 1 );
            l_U874[1] = l_U851[4];
            l_U1031[1] = 1;
            l_U990[4] = 1;
        }
    }
    sub_66558( l_U874[0], 0 );
    sub_66558( l_U874[1], 1 );
    return;
}

void sub_65257(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int I;
    float fVar11;
    float fVar12;
    int iVar13;

    fVar11 = 5000;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        for ( I = 0; I < 17; I++ )
        {
            if (l_U931[I] == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U772[I] )))
                {
                    GET_CHAR_COORDINATES( l_U772[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar12 );
                    if (fVar12 < fVar11)
                    {
                        fVar11 = fVar12;
                        iVar13 = I;
                    }
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U772[iVar13] )))
    {
        l_U828[uParam1] = l_U772[iVar13];
        l_U931[iVar13] = 1;
        l_U974[uParam1] = 1;
    }
    return;
}

void sub_66558(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int I;
    float fVar11;
    float fVar12;
    int iVar13;

    fVar11 = 5000;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        for ( I = 0; I < 17; I++ )
        {
            if (l_U931[I] == 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U772[I] )))
                {
                    GET_CHAR_COORDINATES( l_U772[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar12 );
                    if (fVar12 < fVar11)
                    {
                        fVar11 = fVar12;
                        iVar13 = I;
                    }
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U772[iVar13] )))
    {
        l_U831[uParam1] = l_U772[iVar13];
        l_U931[iVar13] = 1;
        l_U955[uParam1] = 1;
    }
    return;
}

void sub_67380()
{
    int I;

    I = 0;
    for ( I = 0; I <= 16; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U772[I] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U621[I] )))
            {
                ADD_BLIP_FOR_CHAR( l_U772[I], ref l_U621[I] );
                SET_BLIP_AS_FRIENDLY( l_U621[I], 0 );
                CHANGE_BLIP_COLOUR( l_U621[I], 1 );
                SET_ROUTE( l_U621[I], 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U621[I] ))
        {
            REMOVE_BLIP( l_U621[I] );
        }
    }
    return;
}

void sub_67596()
{
    if (IS_VEH_DRIVEABLE( l_U874[0] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U828[0] )))
        {
            if (IS_CHAR_IN_CAR( l_U828[0], l_U874[0] ))
            {
                l_U922++;
            }
            l_U923++;
        }
        if (NOT (IS_CHAR_INJURED( l_U831[0] )))
        {
            if (IS_CHAR_IN_CAR( l_U831[0], l_U874[0] ))
            {
                l_U922++;
            }
            l_U923++;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U874[1] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U828[1] )))
        {
            if (IS_CHAR_IN_CAR( l_U828[1], l_U874[1] ))
            {
                l_U922++;
            }
            l_U923++;
        }
        if (NOT (IS_CHAR_INJURED( l_U831[1] )))
        {
            if (IS_CHAR_IN_CAR( l_U831[1], l_U874[1] ))
            {
                l_U922++;
            }
            l_U923++;
        }
    }
    return;
}

void sub_68305(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( (uParam0^), 0 );
        CLEAR_CHAR_TASKS( (uParam0^) );
    }
    return;
}

int sub_68455(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if ((iVar4 == 2) || (iVar4 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_68529(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 == 1)
    {
        return 1;
    }
    return 0;
}

void sub_69065()
{
    if ((IS_VEH_DRIVEABLE( l_U874[0] )) AND (NOT (IS_CHAR_INJURED( l_U828[0] ))))
    {
        if (IS_CHAR_IN_CAR( l_U828[0], l_U874[0] ))
        {
            l_U519[0] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U874[0] )) AND (NOT (IS_CHAR_INJURED( l_U831[0] ))))
    {
        if (IS_CHAR_IN_CAR( l_U831[0], l_U874[0] ))
        {
            l_U519[1] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U874[1] )) AND (NOT (IS_CHAR_INJURED( l_U828[1] ))))
    {
        if (IS_CHAR_IN_CAR( l_U828[1], l_U874[1] ))
        {
            l_U519[2] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U874[1] )) AND (NOT (IS_CHAR_INJURED( l_U831[1] ))))
    {
        if (IS_CHAR_IN_CAR( l_U831[1], l_U874[1] ))
        {
            l_U519[3] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U877 )) AND (NOT (IS_CHAR_INJURED( l_U834[0] ))))
    {
        if (IS_CHAR_IN_CAR( l_U834[0], l_U877 ))
        {
            l_U519[4] = 1;
        }
    }
    if ((IS_VEH_DRIVEABLE( l_U877 )) AND (NOT (IS_CHAR_INJURED( l_U834[1] ))))
    {
        if (IS_CHAR_IN_CAR( l_U834[1], l_U877 ))
        {
            l_U519[5] = 1;
        }
    }
    return;
}

void sub_69580()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CONTROL_PRESSED( 0, 51 )))
    {
        l_U1057 = 0;
        l_U1061 = 50000;
    }
    if ((l_U1057 == 0) AND (IS_CONTROL_PRESSED( 0, 51 )))
    {
        GET_CHAR_COORDINATES( l_U1062, ref l_U382._fU0, ref l_U382._fU4, ref l_U382._fU8 );
        if (IS_VEH_DRIVEABLE( l_U874[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U828[0] )))
            {
                if (IS_CHAR_IN_CAR( l_U828[0], l_U874[0] ))
                {
                    GET_CHAR_COORDINATES( l_U828[0], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U831[0] )))
            {
                if (IS_CHAR_IN_CAR( l_U831[0], l_U874[0] ))
                {
                    GET_CHAR_COORDINATES( l_U831[0], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 0;
                        l_U1050[1] = 1;
                    }
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U874[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U828[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U828[1], l_U874[1] ))
                {
                    GET_CHAR_COORDINATES( l_U828[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 0;
                        l_U1050[1] = 0;
                        l_U1050[2] = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U831[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U831[1], l_U874[1] ))
                {
                    GET_CHAR_COORDINATES( l_U831[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 0;
                        l_U1050[1] = 0;
                        l_U1050[2] = 0;
                        l_U1050[3] = 1;
                    }
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U877 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U834[0] )))
            {
                if (IS_CHAR_IN_CAR( l_U834[0], l_U877 ))
                {
                    GET_CHAR_COORDINATES( l_U834[0], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 0;
                        l_U1050[1] = 0;
                        l_U1050[2] = 0;
                        l_U1050[3] = 0;
                        l_U1050[4] = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U834[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U834[1], l_U877 ))
                {
                    GET_CHAR_COORDINATES( l_U834[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U382._fU0, l_U382._fU4, l_U382._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
                    if (fVar2 < l_U1061)
                    {
                        l_U1061 = fVar2;
                        l_U1050[0] = 0;
                        l_U1050[1] = 0;
                        l_U1050[2] = 0;
                        l_U1050[3] = 0;
                        l_U1050[4] = 0;
                        l_U1050[5] = 1;
                    }
                }
            }
        }
        l_U1057 = 1;
    }
    if (l_U1050[0] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U828[0] )))
        {
            sub_70785( ref l_U828[0] );
        }
    }
    else if (l_U1050[1] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U831[0] )))
        {
            sub_70785( ref l_U831[0] );
        }
    }
    else if (l_U1050[2] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U828[1] )))
        {
            sub_70785( ref l_U828[1] );
        }
    }
    else if (l_U1050[3] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U831[1] )))
        {
            sub_70785( ref l_U831[1] );
        }
    }
    else if (l_U1050[4] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U834[0] )))
        {
            sub_70785( ref l_U834[0] );
        }
    }
    else if (l_U1050[5] == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U834[1] )))
        {
            sub_70785( ref l_U834[1] );
        }
    };;;;;;
    return;
}

void sub_70785(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U16))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U17 + 500))
        {
            l_U16 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_70945()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3862() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U17 );
            l_U16 = 1;
            l_U15 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U16) AND (NOT l_U15))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U15 = 1;
        }
    }
    else if (l_U15)
    {
        if (l_U18)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U15 = 0;
    };;;
    return;
}

int sub_70945()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_71776(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam1^) ))
        {
            SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
            SET_CHAR_WILL_DO_DRIVEBYS( (uParam0^), 1 );
            OPEN_SEQUENCE_TASK( ref l_U650 );
            TASK_ENTER_CAR_AS_DRIVER( 0, (uParam1^), -2 );
            CLOSE_SEQUENCE_TASK( l_U650 );
            TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
            CLEAR_SEQUENCE_TASK( l_U650 );
            SET_CHAR_KEEP_TASK( (uParam0^), 1 );
        }
    }
    return;
}

void sub_71973(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam1^) ))
        {
            SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_CAR_DRIVE_WANDER( 0, (uParam1^), 50, 2 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_ENTER_CAR_AS_DRIVER( 0, (uParam1^), -2 );
                TASK_CAR_DRIVE_WANDER( 0, (uParam1^), 50, 2 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
        }
    }
    return;
}

void sub_72257(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (HAS_CHAR_GOT_WEAPON( (uParam0^), 13 )))
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 13, 9999, 0 );
        }
        if (IS_VEH_DRIVEABLE( (uParam1^) ))
        {
            OPEN_SEQUENCE_TASK( ref l_U650 );
            TASK_ENTER_CAR_AS_PASSENGER( 0, (uParam1^), -2, 0 );
            TASK_DRIVE_BY( 0, l_U1062, 0, 0.00000000, 0.00000000, 0.00000000, 150.00000000, 8, 1, 50 );
            CLOSE_SEQUENCE_TASK( l_U650 );
            TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
            CLEAR_SEQUENCE_TASK( l_U650 );
            SET_CHAR_KEEP_TASK( (uParam0^), 1 );
        }
    }
    return;
}

void sub_72594(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((NOT (IS_CHAR_INJURED( (uParam2^) ))) AND (IS_VEH_DRIVEABLE( (uParam1^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_CAR_MISSION_PED_TARGET( 0, (uParam1^), (uParam2^), 12, 50, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 0 );
            }
            else
            {
                SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_ENTER_CAR_AS_DRIVER( 0, (uParam1^), -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, (uParam1^), (uParam2^), 12, 50, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
        }
    }
    return;
}

void sub_73349(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
        if ((NOT (IS_CHAR_INJURED( (uParam2^) ))) AND (IS_VEH_DRIVEABLE( (uParam1^) )))
        {
            if (IS_CHAR_IN_CAR( (uParam0^), (uParam1^) ))
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( (uParam1^), 0 )))
                {
                    SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U650 );
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, (uParam1^) );
                    TASK_CAR_MISSION_PED_TARGET( 0, (uParam1^), (uParam2^), 12, 50, 2, -1, -1 );
                    CLOSE_SEQUENCE_TASK( l_U650 );
                    TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                    CLEAR_SEQUENCE_TASK( l_U650 );
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                }
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_ENTER_CAR_AS_DRIVER( 0, (uParam1^), -2 );
                TASK_CAR_MISSION_PED_TARGET( 0, (uParam1^), (uParam2^), 12, 50, 2, -1, -1 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
        }
    }
    return;
}

void sub_73880(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam1^) ))
        {
            SET_CAR_ENGINE_ON( (uParam1^), 1, 1 );
            if (IS_CHAR_IN_CAR( (uParam0^), (uParam1^) ))
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, (uParam1^) );
                TASK_CAR_DRIVE_WANDER( 0, (uParam1^), 50, 2 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 0 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U650 );
                TASK_ENTER_CAR_AS_DRIVER( 0, (uParam1^), -2 );
                TASK_CAR_DRIVE_WANDER( 0, (uParam1^), 50, 2 );
                CLOSE_SEQUENCE_TASK( l_U650 );
                TASK_PERFORM_SEQUENCE( (uParam0^), l_U650 );
                CLEAR_SEQUENCE_TASK( l_U650 );
                SET_CHAR_KEEP_TASK( (uParam0^), 1 );
            }
        }
    }
    return;
}

void sub_75212()
{
    if (NOT (IS_CHAR_INJURED( l_U828[0] )))
    {
        l_U539++;
    }
    if (NOT (IS_CHAR_INJURED( l_U831[0] )))
    {
        l_U539++;
    }
    if (NOT (IS_CHAR_INJURED( l_U828[1] )))
    {
        l_U539++;
    }
    if (NOT (IS_CHAR_INJURED( l_U831[1] )))
    {
        l_U539++;
    }
    if (NOT (IS_CHAR_INJURED( l_U834[0] )))
    {
        l_U539++;
    }
    if (NOT (IS_CHAR_INJURED( l_U834[1] )))
    {
        l_U539++;
    }
    return;
}

void sub_78577()
{
    if (l_U469 == 0)
    {
        l_U848 = sub_78599( 1 );
        REQUEST_MODEL( l_U848 );
        REQUEST_MODEL( l_U849 );
        REQUEST_MODEL( l_U884 );
        CLEAR_AREA( -194.00810000, 1379.40800000, 19.30090000, 20.00000000, 1 );
    }
    if ((l_U466 == 0) AND (HAS_MODEL_LOADED( l_U848 )))
    {
        CREATE_CHAR( 16, l_U848, -196.01110000, 1380.13400000, 19.30040000, ref l_U813, 1 );
        SET_CHAR_HEADING( l_U813, 9.00000000 );
        SET_CHAR_DECISION_MAKER( l_U813, l_U890 );
        SET_COMBAT_DECISION_MAKER( l_U813, l_U892 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U813, 0 );
        sub_14434( l_U813, 2 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U813, -196.01110000, 1380.13400000, 19.30040000, 10 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U813, 1 );
        if (NOT (IS_CHAR_INJURED( l_U813 )))
        {
            if (DOES_BLIP_EXIST( l_U544 ))
            {
                REMOVE_BLIP( l_U544 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U544 )))
            {
                ADD_BLIP_FOR_CHAR( l_U813, ref l_U544 );
                SET_BLIP_AS_FRIENDLY( l_U544, 1 );
                SET_ROUTE( l_U544, 1 );
            }
        }
        l_U466 = 1;
    }
    if ((l_U467 == 0) AND (HAS_MODEL_LOADED( l_U849 )))
    {
        CREATE_CHAR( 16, l_U849, -196.19940000, 1381.71000000, 19.29960000, ref l_U814[0], 1 );
        SET_CHAR_HEADING( l_U814[0], -169.86720000 );
        SET_CHAR_DECISION_MAKER( l_U814[0], l_U890 );
        SET_COMBAT_DECISION_MAKER( l_U814[0], l_U892 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U814[0], 0 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U814[0], 1 );
        sub_14434( l_U814[0], 3 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U814[0], -196.19940000, 1381.71000000, 19.29960000, 15.00000000 );
        l_U467 = 1;
    }
    if ((l_U468 == 0) AND (HAS_MODEL_LOADED( l_U884 )))
    {
        CREATE_CAR( l_U884, -196.90000000, 1379.70000000, 19.80000000, ref l_U870[0], 1 );
        SET_CAR_HEADING( l_U870[0], 219 );
        SET_CAR_ON_GROUND_PROPERLY( l_U870[0] );
        CHANGE_CAR_COLOUR( l_U870[0], 0, 0 );
        SET_EXTRA_CAR_COLOURS( l_U870[0], 4, 35 );
        CREATE_CAR( l_U884, -197.40000000, 1381.70000000, 19.80000000, ref l_U870[1], 1 );
        SET_CAR_HEADING( l_U870[1], 198 );
        SET_CAR_ON_GROUND_PROPERLY( l_U870[1] );
        CHANGE_CAR_COLOUR( l_U870[1], 7, 133 );
        SET_EXTRA_CAR_COLOURS( l_U870[1], 0, 0 );
        l_U468 = 1;
    }
    if ((l_U468 == 1) AND ((l_U467 == 1) AND (l_U466 == 1)))
    {
        if ((NOT (IS_CHAR_INJURED( l_U814[0] ))) AND (NOT (IS_CHAR_INJURED( l_U813 ))))
        {
            TASK_CHAT_WITH_CHAR( l_U813, l_U814[0], 1, 1 );
            TASK_CHAT_WITH_CHAR( l_U814[0], l_U813, 0, 1 );
        }
        l_U470 = 1;
    }
    return;
}

int sub_78599(unknown uParam0)
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
    sub_2356( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_79854()
{
    int I;

    I = 0;
    if ((l_U401 == 0) AND (DOES_CHAR_EXIST( l_U813 )))
    {
        if ((NOT IS_SCREEN_FADING_OUT()) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U813, l_U1062, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U813 )))
            {
                SET_CHAR_RELATIONSHIP( l_U813, 5, 0 );
                TASK_COMBAT( l_U813, l_U1062 );
                SET_CHAR_KEEP_TASK( l_U813, 1 );
            }
            if (NOT IS_SCREEN_FADING_OUT())
            {
                PRINT_NOW( "RB2_FAIL_08", 7500, 1 );
            }
            sub_12655( 5, "E1R2_FAIL5", "E1R2AUD", 0 );
            l_U362 = -1;
            l_U401 = 1;
        }
        else if ((IS_CHAR_INJURED( l_U813 )) AND (DOES_CHAR_EXIST( l_U813 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U813 )))
            {
                SET_CHAR_RELATIONSHIP( l_U813, 5, 0 );
                TASK_COMBAT( l_U813, l_U1062 );
                SET_CHAR_KEEP_TASK( l_U813, 1 );
            }
            if (NOT IS_SCREEN_FADING_OUT())
            {
                PRINT_NOW( "RB2_FAIL_09", 7500, 1 );
            }
            sub_12655( 5, "E1R2_FAIL5", "E1R2AUD", 0 );
            l_U362 = -1;
            l_U401 = 1;
        }
    }
    for ( I = 0; I <= 0; I++ )
    {
        if ((l_U401 == 0) AND (DOES_CHAR_EXIST( l_U814[I] )))
        {
            if ((NOT IS_SCREEN_FADING_OUT()) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U814[I], l_U1062, 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U814[I] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U814[I], 5, 0 );
                    TASK_COMBAT( l_U814[I], l_U1062 );
                    SET_CHAR_KEEP_TASK( l_U814[I], 1 );
                }
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    PRINT_NOW( "RB2_FAIL_10", 7500, 1 );
                }
                sub_12655( 5, "E1R2_FAIL5", "E1R2AUD", 0 );
                l_U362 = -1;
                l_U401 = 1;
            }
            else if ((IS_CHAR_INJURED( l_U814[I] )) AND (DOES_CHAR_EXIST( l_U814[I] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U814[I] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U814[I], 5, 0 );
                    TASK_COMBAT( l_U814[I], l_U1062 );
                    SET_CHAR_KEEP_TASK( l_U814[I], 1 );
                }
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    PRINT_NOW( "RB2_FAIL_11", 7500, 1 );
                }
                sub_12655( 5, "E1R2_FAIL5", "E1R2AUD", 0 );
                l_U362 = -1;
                l_U401 = 1;
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U870[I] ))
        {
            if ((l_U401 == 0) AND ((NOT IS_SCREEN_FADING_OUT()) AND (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U870[I], l_U1062 ))))
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    PRINT_NOW( "RB2_FAIL_10", 7500, 1 );
                }
                sub_12655( 5, "E1R2_FAIL5", "E1R2AUD", 0 );
                l_U362 = -1;
                l_U401 = 1;
            }
        }
    }
    return;
}

void sub_80932(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_80990( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_80990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_20487( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_20487( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5791() )))
    {
        sub_20487( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3862() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3862() )))
    {
        sub_20487( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_20487( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_81505()))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((NOT bParam8) || (g_U94._fU372))
            {
                sub_20487( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 4) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 5))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_81505()))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_82877( uParam0, ref g_U94._fU176 );
    sub_83273( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_5756( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

int sub_81505()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_81562())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_81562()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5791() )))
    {
        sub_20487( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_20487( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_20487( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_20487( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5791() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3862() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3862(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_20487( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3862() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_20487( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_20487( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5791() )))
    {
        sub_20487( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_82877(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_83273(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

int sub_83809(int iParam0)
{
    if (sub_83818())
    {
        if (g_U94._fU60 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_83818()
{
    if ((g_U94._fU0 == 1008) || (g_U94._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_83903()
{
    if (g_U558 == 1)
    {
        return 1;
    }
    return 0;
}

int sub_83938()
{
    if (g_U94._fU60 != -1)
    {
        if ((g_U15862[g_U94._fU60]._fU196._fU24 == 3) || (g_U15862[g_U94._fU60]._fU196._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

void sub_84209()
{
    SET_PLAYER_CONTROL_ADVANCED( l_U1063, 0, 1, 1 );
    DO_SCREEN_FADE_OUT( 750 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        sub_79854();
        if (l_U401 == 1)
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 750 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            PRINT_NOW( "RB2_FAIL_11", 7500, 1 );
            return;
        }
        WAIT( 0 );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1062 );
    sub_3974();
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U873 );
    if (IS_VEH_DRIVEABLE( l_U873 ))
    {
        if (LOCATE_CAR_3D( l_U873, -196.96340000, 1378.87300000, 19.31220000, 20, 20, 20, 0 ))
        {
            SET_CAR_COORDINATES( l_U873, -188.36740000, 1366.98900000, 19.36710000 );
            SET_CAR_HEADING( l_U873, 179.72470000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U873 );
        }
    }
    if (sub_13783())
    {
        if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
        {
            SET_CHAR_HEADING( g_U11081[0], 177.30940000 );
            SET_CHAR_COORDINATES( g_U11081[0], -185.32940000, 1376.91600000, 19.27960000 );
        }
        if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
        {
            SET_CHAR_HEADING( g_U11081[1], 178.93180000 );
            SET_CHAR_COORDINATES( g_U11081[1], -187.34680000, 1375.42900000, 19.27830000 );
        }
    }
    CLEAR_AREA( -106.36830000, 762.87490000, 14.50000000, 5.00000000, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    LOAD_ADDITIONAL_TEXT( "E1R2AUD", 6 );
    START_CUTSCENE_NOW( "RB02_za" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "RB02_za" );
    ENABLE_SCENE_STREAMING( 1 );
    if (NOT (IS_CAR_DEAD( l_U867 )))
    {
        SET_CAR_IN_CUTSCENE( l_U867, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U867 )))
    {
        WARP_CHAR_INTO_CAR( l_U1062, l_U867 );
    }
    CLEAR_AREA( -106.36830000, 762.87490000, 14.50000000, 25.00000000, 1 );
    SET_CHAR_COORDINATES( l_U1062, -186.21210000, 1376.39000000, 19.25100000 );
    SET_CHAR_HEADING( l_U1062, 180.71640000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U1063, 1, 1, 1 );
    l_U402 = 1;
    return;
}

void sub_85084()
{
    g_U24 = 82;
    l_U400 = 0;
    sub_85105();
    sub_91867( 1022, 3 );
    sub_12655( 5, "E1R2_PASS", "E1R2AUD", 0 );
    return;
}

void sub_85105()
{
    sub_85114();
    return;
}

void sub_85114()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_85132();
    sub_85191( iVar2, iVar3, iVar4 );
    return;
}

void sub_85132()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_85191(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_85223( iVar5, uParam0, uParam1, uParam2, "Contact_6" );
    return;
}

void sub_85223(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_85319( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_85319( ref cVar9 );
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
            sub_85319( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_85319( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_85319( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_85319( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_85896( uParam0, iVar7 );;;
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
    if (NOT (sub_86344( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5791() );
    sub_2501();
    bVar28 = true;
    uVar29 = sub_85896( uParam0, iVar7 );
    uVar30 = sub_2125( uParam0 );
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
                sub_90798( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_91232();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_91317( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_91396( uParam0 );
                sub_91435( 0 );
                sub_2401( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_91624();
        }
    }
    if (bParam2)
    {
        sub_91232();
        sub_91723();
        sub_91435( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_91232();
        sub_91775();
        sub_91435( 0 );
        sub_2401( uVar30, 0 );
    }
    sub_2012();
    return;
}

void sub_85319(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_85896(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_2356( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_86344(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_86440( uParam1 );
        break;
        case 1:
        bVar8 = sub_87135( uParam1 );
        break;
        case 2:
        bVar8 = sub_87868( uParam1 );
        break;
        case 3:
        bVar8 = sub_88105( uParam1 );
        break;
        case 4:
        bVar8 = sub_88271( uParam1 );
        break;
        case 5:
        bVar8 = sub_88470( uParam1 );
        break;
        case 6:
        bVar8 = sub_88665( uParam1 );
        break;
        case 7:
        bVar8 = sub_88870( uParam1 );
        break;
        case 8:
        bVar8 = sub_89075( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_87483( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_85896( uParam0, uParam1 );
    if (bParam3)
    {
        sub_89361( uVar9, uParam0 );
    }
    return 1;
}

int sub_86440(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_86537( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_86537( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_86537( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_86537( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_87042( "Contact 1", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 1", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_86537(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_86548( uParam1 );
    sub_86722( uParam0, 0, uParam2 );
    sub_86722( uParam0, 1, uParam3 );
    sub_86722( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_85132();
    return;
}

void sub_86548(unknown uParam0)
{
    ADD_SCORE( sub_5791(), uParam0 );
    sub_86573( uParam0 );
    return;
}

void sub_86573(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2356( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_86722(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_87042(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_87135(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_86537( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_86537( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_86537( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_86537( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_86537( iVar3, 0, sub_87361(), sub_87627(), 0, 0 );
        break;
        default:
        sub_87042( "Contact 2", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 2", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87361()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_87483( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_87483(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_87627()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_87483( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_87868(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_86537( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_86537( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_86537( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_87042( "Contact 3", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 3", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88105(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_87042( "Friend 4", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Friend 4", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88271(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_86537( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_86537( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_87042( "Contact 5", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 5", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88470(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_86537( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_86537( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_87042( "Contact 6", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 6", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88665(unknown uParam0)
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
        sub_86537( iVar3, 0, sub_87361(), sub_87627(), 0, 0 );
        break;
        default:
        sub_87042( "Friend 7", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Friend 7", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88870(unknown uParam0)
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
        sub_86537( iVar3, 0, sub_87361(), sub_87627(), 0, 0 );
        break;
        default:
        sub_87042( "Friend 8", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Friend 8", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89075(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_86537( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_87042( "Contact 9", 1 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_87042( "Contact 9", 0 );
        sub_86537( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_89361(int iParam0, int iParam1)
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
    if (sub_89422( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_90140( iParam1 );
    }
    return;
}

int sub_89422(int iParam0, int iParam1)
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
            sub_89562( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_89562(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_89732( 0 );
    return;
}

void sub_89732(boolean bParam0)
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
        sub_89977();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_89977()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_90140(int iParam0)
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
        sub_90371( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_90371( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_90371( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_90371( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_90371( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_90371( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_90371(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_90798(unknown uParam0, unknown uParam1)
{
    sub_90817( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_90817(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_91232()
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

int sub_91317(int iParam0, int iParam1)
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

void sub_91396(unknown uParam0)
{
    sub_1873();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_91435(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_91486( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_91486(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_91624()
{
    sub_91633();
    return;
}

void sub_91633()
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

void sub_91723()
{
    sub_91633();
    return;
}

void sub_91775()
{
    sub_91633();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_91867(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1505[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_91986()
{
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5791(), 150 );
        SAY_AMBIENT_SPEECH( l_U1062, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U400 = 0;
    sub_92063();
    return;
}

void sub_92063()
{
    sub_92072();
    return;
}

void sub_92072()
{
    int iVar2;

    iVar2 = 5;
    sub_92086( iVar2 );
    sub_2492( iVar2 );
    return;
}

void sub_92086(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5791(), 150 );
    CLEAR_HELP();
    sub_1351( uParam0 );
    return;
}

