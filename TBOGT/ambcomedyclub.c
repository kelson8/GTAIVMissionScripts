void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 1;
    l_U19 = 0;
    l_U20 = -1;
    l_U21 = -1;
    l_U22 = 0;
    l_U26 = 4;
    l_U28 = 0;
    l_U159 = {-350.43000000, 181.40000000, 16.20000000};
    l_U162 = {-334.26000000, 170.66000000, 18.75000000};
    l_U165 = {65206, 172, 20.11000000};
    l_U168 = {-336.38000000, 177.41000000, 18.86000000};
    l_U171 = {-335.87000000, 178.94000000, 18.86000000};
    l_U178 = nil;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_224();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (NOT l_U9)
            {
                if (g_U12379)
                {
                    if (NOT (sub_294( 12 )))
                    {
                        l_U18 = 0;
                    }
                }
                if (NOT l_U18)
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
            sub_707();
            if (l_U18)
            {
                if (g_U12379)
                {
                    if (NOT (sub_294( 12 )))
                    {
                        l_U18 = 0;
                    }
                }
            }
            if (((sub_1394()) || (l_U8)) AND (g_U10575))
            {
                if (l_U18)
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_879(), l_U159._fU0, l_U159._fU4, l_U159._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                    {
                        if (l_U10)
                        {
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_826(), 0 )))
                            {
                                l_U10 = 0;
                            }
                        }
                    }
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_826(), 0 )))
                    {
                        l_U10 = 0;
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_879(), l_U159._fU0, l_U159._fU4, l_U159._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            GET_GAME_TIMER( ref l_U25 );
                            if ((NOT (g_U22959 > l_U25)) AND ((NOT (IS_BIT_SET( g_U10938._fU0, 4 ))) AND ((NOT sub_2192()) AND ((NOT g_U12381) AND ((sub_1899( 1, 1 )) AND (NOT l_U7))))))
                            {
                                SET_PLAYER_CONTROL( sub_826(), 0 );
                                sub_2290();
                                sub_2808();
                                SET_CHAR_PROOFS( sub_879(), 1, 1, 1, 1, 1 );
                                sub_3553();
                                l_U9 = 1;
                            }
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_879(), l_U159._fU0, l_U159._fU4, l_U159._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
                    {
                        if (NOT l_U10)
                        {
                            PRINT_HELP( "COMEDY_WANTED" );
                            l_U10 = 1;
                        }
                    }
                }
            }
        }
        else
        {
            sub_224();
        }
    }
    return;
}

void sub_224()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_294(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_346( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

int sub_346(unknown uParam0)
{
    return 0;
}

int sub_707()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        l_U174[I] = sub_730( I );
        if (l_U174[I] != nil)
        {
            if (l_U178 == nil)
            {
                l_U178 = l_U174[I];
            }
        }
    }
    if (l_U178 != nil)
    {
        if (NOT (IS_PLAYER_CONTROL_ON( sub_826() )))
        {
            if (NOT l_U13)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_879(), l_U159._fU0, l_U159._fU4, l_U159._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
                {
                    sub_969();
                }
            }
        }
        l_U8 = 1;
        return 1;
    }
    return 0;
}

void sub_730(unknown uParam0)
{
    return nil;
}

void sub_826()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_879()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_969()
{
    sub_978();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_978()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_1068();
        }
        return;
    }
    if (sub_1128())
    {
        g_U12379 = 1;
    }
    sub_1285();
    return;
}

void sub_1068()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

int sub_1128()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_1285()
{
    g_U28805._fU4 = 0;
    return;
}

int sub_1394()
{
    if (g_U10589._fU0._fU4 == 0)
    {
        return 1;
    }
    else if (sub_1434( g_U10589 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_1434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1603( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

int sub_1899(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_879() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_879(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_879() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_879(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_879()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_879() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_879() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_826() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_826() )))
    {
        return 0;
    }
    return 1;
}

int sub_2192()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

void sub_2290()
{
    int I;

    if ((NOT (l_U6 == 0)) AND (IS_CHAR_INJURED( l_U178 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U178, sub_879(), 0 ))
        {
            sub_2347( 5 );
        }
        else
        {
            sub_2347( 4 );
        }
        sub_2437();
    }
    else
    {
        switch (l_U6)
        {
            case 0:
            if (sub_707())
            {
                for ( I = 0; I < 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U174[I] )))
                    {
                        if (NOT (IS_CHAR_ON_FIRE( l_U174[I] )))
                        {
                            SET_CHAR_PROOFS( l_U174[I], 1, 1, 1, 1, 1 );
                        }
                    }
                }
                l_U6 = 1;
            }
            break;
            case 1: break;
            case 2: break;
        }
    }
    return;
}

void sub_2347(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_2437()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_1128())
        {
            g_U12379 = 0;
        }
        sub_2503();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

void sub_2503()
{
    g_U28805._fU4 = 1;
    return;
}

void sub_2808()
{
    sub_2817();
    if (g_U10531 < l_U26)
    {
        g_U28849 = 2;
    }
    else
    {
        g_U28849 = 3;
    }
    if (g_U28849 == 3)
    {
        l_U19 = g_U10577[g_U10588];
    }
    else
    {
        sub_3058( g_U28849 );
        if (l_U20 < 0)
        {
            l_U19 = g_U10577[g_U10588];
            g_U10531++;
        }
        else
        {
            l_U19 = l_U20;
            g_U10531++;
        }
    }
    return;
}

void sub_2817()
{
    int[0] iVar2;
    int iVar13;
    unknown uVar14;
    int I;

    if ((g_U10588 == -1) || (g_U10588 == 9))
    {
        array(ref iVar2, 10);
        iVar13 = 0;
        for ( I = 0; I < iVar2; I++ )
        {
            iVar2[I] = 0;
        }
        while (NOT (iVar13 == 10))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar14 );
            if (NOT iVar2[uVar14])
            {
                iVar2[uVar14] = 1;
                g_U10577[iVar13] = uVar14;
                iVar13++;
            }
        }
        g_U10588 = 0;
    }
    else
    {
        g_U10588++;
    }
    return;
}

void sub_3058(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (sub_3081( g_U10577[g_U10588], uParam0 ))
    {
        ;
    }
    else
    {
        iVar3 = sub_3280( g_U10588, 10, uParam0 );
        if (iVar3 > -1)
        {
            uVar4 = g_U10577[g_U10588];
            g_U10577[g_U10588] = g_U10577[iVar3];
            g_U10577[iVar3] = uVar4;
        }
        else
        {
            iVar3 = sub_3280( 0, g_U10588, uParam0 );
            if (iVar3 > -1)
            {
                l_U20 = g_U10577[iVar3];
            }
        }
    }
    return;
}

int sub_3081(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        return sub_3125( uParam0 );
        break;
        case 1:
        if ((sub_3178( uParam0 )) || (sub_3125( uParam0 )))
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
        case 2:
        return sub_3178( uParam0 );
        break;
    }
    return 1;
}

int sub_3125(int iParam0)
{
    if ((iParam0 < 3) AND (iParam0 >= 0))
    {
        return 1;
    }
    return 0;
}

int sub_3178(int iParam0)
{
    if ((iParam0 < 10) AND (iParam0 >= 6))
    {
        return 1;
    }
    return 0;
}

void sub_3280(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    int Result;

    iVar5 = uParam0;
    Result = -1;
    while ((Result == -1) AND (iVar5 < iParam1))
    {
        if (sub_3081( g_U10577[iVar5], uParam2 ))
        {
            Result = iVar5;
        }
        else
        {
            iVar5++;
        }
    }
    return Result;
}

void sub_3553()
{
    SETTIMERA( 0 );
    REQUEST_ANIMS( "AMB@COMEDY" );
    while (NOT (HAVE_ANIMS_LOADED( "AMB@COMEDY" )))
    {
        WAIT( 0 );
    }
    while (NOT (TIMERA() > 2000))
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    OVERRIDE_FREEZE_FLAGS( 1 );
    switch (l_U19)
    {
        case 0:
        l_U15 = "CM1";
        break;
        case 1:
        l_U15 = "CM2";
        break;
        case 2:
        l_U15 = "CM3";
        break;
        case 3:
        l_U15 = "CM5";
        break;
        case 4:
        l_U15 = "CM6";
        break;
        case 5:
        l_U15 = "CM7";
        break;
        case 6:
        l_U15 = "E2_CM01";
        sub_3901( "E2CM1AU", 4 );
        break;
        case 7:
        l_U15 = "E2_CM02";
        sub_3901( "E2CM1AU", 4 );
        break;
        case 8:
        l_U15 = "E2_CM03";
        sub_3901( "E2CM1AU", 4 );
        break;
        case 9:
        l_U15 = "E2_CM04";
        sub_3901( "E2CM1AU", 4 );
        break;
    }
    sub_4154( l_U19 );
    START_CUTSCENE_NOW( l_U15 );
    SETTIMERA( 0 );
    while (NOT (TIMERA() >= 2000))
    {
        WAIT( 0 );
        if (NOT l_U16)
        {
            sub_7644();
        }
        else
        {
            SETTIMERA( 3000 );
        }
    }
    sub_8215();
    l_U7 = 1;
    l_U28 = 0;
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
        for ( l_U24 = 0; l_U24 < l_U30; l_U24++ )
        {
            sub_8700( l_U24 );
        }
        sub_12273();
    }
    SETTIMERA( 0 );
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
        if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
        {
            l_U22 = GET_CUTSCENE_TIME();
            if (NOT l_U14)
            {
                if (IS_BUTTON_JUST_PRESSED( 0, 19 ))
                {
                    SAVE_STRING_TO_DEBUG_FILE( "Cutscene = " );
                    SAVE_STRING_TO_DEBUG_FILE( l_U15 );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_INT_TO_DEBUG_FILE( l_U22 );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    l_U14 = 1;
                }
            }
            else if (NOT (IS_BUTTON_PRESSED( 0, 19 )))
            {
                SAVE_INT_TO_DEBUG_FILE( l_U22 );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                l_U14 = 0;
            }
            if (GET_CUTSCENE_SECTION_PLAYING() == 1)
            {
                switch (l_U19)
                {
                    case 0:
                    l_U22 += 113233;
                    break;
                    case 1:
                    l_U22 += 105400;
                    break;
                    case 2:
                    l_U22 += 51133;
                    break;
                    case 3:
                    l_U22 += 88966;
                    break;
                    case 4:
                    l_U22 += 121700;
                    break;
                    case 5:
                    l_U22 += 73766;
                    break;
                }
            }
            else if (GET_CUTSCENE_SECTION_PLAYING() == 2)
            {
                switch (l_U19)
                {
                    case 2:
                    l_U22 += 108233;
                    break;
                    case 3:
                    l_U22 += 180632;
                    break;
                    case 5:
                    l_U22 += 140165;
                    break;
                }
            }
            sub_13264();
            if (NOT l_U16)
            {
                sub_7644();
            }
            else if (TIMERA() >= 200)
            {
                GET_CUTSCENE_PED_POSITION( 0, ref l_U165 );
                l_U165._fU8 += 0.80000000;
                l_U28 += 1.00000000 * TIMESTEP();
                for ( l_U24 = 0; l_U24 < l_U30; l_U24++ )
                {
                    sub_8700( l_U24 );
                }
                sub_12273();
            }
        }
    }
    CLEAR_NAMED_CUTSCENE( l_U15 );
    sub_13542();
    return;
}

void sub_3901(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3937())
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

int sub_3937()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4154(unknown uParam0)
{
    int I;

    for ( I = 0; I < l_U67; I++ )
    {
        l_U67[I]._fU0 = 0;
        l_U67[I]._fU4 = -1;
        l_U67[I]._fU8 = -1;
    }
    switch (uParam0)
    {
        case 0:
        sub_4323( 0, 2, 1760, 10310 );
        sub_4323( 1, 6, 17425, 18277 );
        sub_4323( 2, 7, 36938, 41777 );
        sub_4323( 3, 9, 43777, 43466 );
        sub_4323( 4, 7, 50762, 53512 );
        sub_4323( 5, 7, 78130, 87625 );
        sub_4323( 6, 7, 94349, 115692 );
        sub_4323( 7, 6, 130000, 135000 );
        sub_4323( 8, 7, 137000, 146458 );
        sub_4323( 9, 4, 145185, 146469 );
        sub_4323( 10, 6, 180085, 184184 );
        sub_4323( 11, 6, 186552, 188441 );
        sub_4323( 12, 6, 190441, 192578 );
        sub_4323( 13, 6, 195008, 194958 );
        sub_4323( 14, 7, 202153, 214481 );
        sub_4323( 15, 6, 216481, 220014 );
        sub_4323( 16, 7, 222014, 244760 );
        sub_4323( 17, 2, 242573, 251766 );
        break;
        case 1:
        sub_4323( 0, 2, 2526, 12246 );
        sub_4323( 1, 6, 34058, 34790 );
        sub_4323( 2, 6, 38594, 40140 );
        sub_4323( 3, 7, 45156, 47361 );
        sub_4323( 4, 6, 52126, 51842 );
        sub_4323( 5, 7, 60886, 64340 );
        sub_4323( 6, 6, 80390, 80752 );
        sub_4323( 7, 6, 95695, 95009 );
        sub_4323( 8, 7, 104498, 105813 );
        sub_4323( 9, 7, 113217, 115250 );
        sub_4323( 10, 6, 119574, 120210 );
        sub_4323( 11, 6, 133077, 133922 );
        sub_4323( 12, 6, 143246, 143217 );
        sub_4323( 13, 6, 148154, 148866 );
        sub_4323( 14, 6, 152570, 152178 );
        sub_4323( 15, 7, 154860, 156401 );
        sub_4323( 16, 7, 164506, 164525 );
        sub_4323( 17, 7, 169125, 170473 );
        sub_4323( 18, 6, 179586, 181114 );
        sub_4323( 19, 7, 188026, 191470 );
        sub_4323( 20, 3, 189510, 190718 );
        sub_4323( 21, 6, 203321, 205000 );
        sub_4323( 22, 7, 212269, 213354 );
        sub_4323( 23, 2, 215354, 253400 );
        break;
        case 2:
        sub_4323( 0, 2, 2960, 10034 );
        sub_4323( 1, 6, 18720, 18326 );
        sub_4323( 2, 6, 22408, 21680 );
        sub_4323( 3, 6, 25162, 24697 );
        sub_4323( 4, 6, 48164, 47300 );
        sub_4323( 5, 6, 60117, 60714 );
        sub_4323( 6, 7, 67748, 69066 );
        sub_4323( 7, 6, 79597, 80488 );
        sub_4323( 8, 5, 82488, 83502 );
        sub_4323( 9, 7, 86640, 87477 );
        sub_4323( 10, 6, 93766, 94614 );
        sub_4323( 11, 6, 101089, 114928 );
        sub_4323( 12, 7, 116928, 174766 );
        sub_4323( 13, 7, 118548, 119196 );
        sub_4323( 14, 7, 142060, 142888 );
        sub_4323( 15, 7, 146622, 151724 );
        sub_4323( 16, 3, 148640, 150038 );
        sub_4323( 17, 7, 154350, 159904 );
        sub_4323( 18, 7, 168800, 171052 );
        sub_4323( 19, 2, 173052, 176766 );
        break;
        case 3:
        sub_4323( 0, 2, 7045, 31489 );
        sub_4323( 1, 6, 43429, 43860 );
        sub_4323( 2, 5, 50985, 50040 );
        sub_4323( 3, 6, 53490, 53764 );
        sub_4323( 4, 6, 58446, 62474 );
        sub_4323( 5, 7, 64474, 71100 );
        sub_4323( 6, 6, 77018, 77213 );
        sub_4323( 7, 7, 85862, 90970 );
        sub_4323( 8, 6, 92970, 94500 );
        sub_4323( 9, 7, 96500, 96441 );
        sub_4323( 10, 7, 108561, 113002 );
        sub_4323( 11, 7, 115886, 115893 );
        sub_4323( 12, 7, 127744, 127836 );
        sub_4323( 13, 6, 132720, 135160 );
        sub_4323( 14, 7, 137160, 136634 );
        sub_4323( 15, 7, 140150, 141317 );
        sub_4323( 16, 3, 141800, 143010 );
        sub_4323( 17, 6, 151562, 157126 );
        sub_4323( 18, 7, 159126, 159300 );
        sub_4323( 19, 6, 163737, 163533 );
        sub_4323( 20, 7, 167045, 181057 );
        sub_4323( 21, 2, 167150, 176397 );
        sub_4323( 22, 6, 187120, 188289 );
        sub_4323( 23, 6, 203661, 215382 );
        sub_4323( 24, 7, 219822, 220781 );
        sub_4323( 25, 8, 222781, 228449 );
        sub_4323( 26, 7, 232425, 233366 );
        sub_4323( 27, 2, 235366, 300000 );
        break;
        case 4:
        sub_4323( 0, 2, 4150, 19558 );
        sub_4323( 1, 6, 22838, 22473 );
        sub_4323( 2, 6, 43320, 55306 );
        sub_4323( 3, 6, 66330, 66276 );
        sub_4323( 4, 7, 69954, 72389 );
        sub_4323( 5, 6, 79209, 79346 );
        sub_4323( 6, 6, 82866, 87718 );
        sub_4323( 7, 7, 90321, 90810 );
        sub_4323( 8, 7, 107725, 116428 );
        sub_4323( 9, 3, 109630, 110700 );
        sub_4323( 10, 7, 138690, 147089 );
        sub_4323( 11, 6, 149089, 154457 );
        sub_4323( 12, 6, 165234, 164920 );
        sub_4323( 13, 6, 176020, 176214 );
        sub_4323( 14, 6, 183115, 182954 );
        sub_4323( 15, 7, 191896, 191886 );
        sub_4323( 16, 6, 200678, 200457 );
        sub_4323( 17, 7, 211070, 217130 );
        sub_4323( 18, 7, 221360, 222718 );
        sub_4323( 19, 2, 222820, 231133 );
        break;
        case 5:
        sub_4323( 0, 2, 4100, 19910 );
        sub_4323( 1, 6, 30556, 31981 );
        sub_4323( 2, 6, 47988, 49109 );
        sub_4323( 3, 6, 54166, 53897 );
        sub_4323( 4, 7, 64506, 65445 );
        sub_4323( 5, 7, 73449, 74408 );
        sub_4323( 6, 7, 92350, 97260 );
        sub_4323( 7, 7, 102000, 104420 );
        sub_4323( 8, 4, 103470, 104561 );
        sub_4323( 9, 6, 109676, 114904 );
        sub_4323( 10, 6, 122565, 122233 );
        sub_4323( 11, 7, 131981, 132065 );
        sub_4323( 12, 6, 135470, 138981 );
        sub_4323( 13, 6, 151972, 152528 );
        sub_4323( 14, 6, 159086, 160161 );
        sub_4323( 15, 6, 168780, 171656 );
        sub_4323( 16, 7, 177400, 179508 );
        sub_4323( 17, 7, 186601, 188605 );
        sub_4323( 18, 2, 189382, 196300 );
        break;
        case 6:
        sub_4323( 0, 2, 4406, 8337 );
        sub_4323( 1, 5, 5314, 6258 );
        sub_4323( 2, 5, 6523, 7253 );
        sub_4323( 3, 7, 7612, 10028 );
        sub_4323( 4, 7, 10656, 13301 );
        sub_4323( 5, 5, 18475, 18859 );
        sub_4323( 6, 5, 22199, 23596 );
        sub_4323( 7, 5, 23701, 24357 );
        sub_4323( 8, 10, 26034, 27543 );
        sub_4323( 9, 5, 27947, 28923 );
        sub_4323( 10, 6, 31271, 32386 );
        sub_4323( 11, 6, 34284, 35921 );
        sub_4323( 12, 6, 35206, 36385 );
        sub_4323( 13, 9, 36283, 37536 );
        sub_4323( 14, 2, 36892, 38012 );
        sub_4323( 15, 7, 44059, 46225 );
        sub_4323( 16, 6, 44459, 45664 );
        break;
        case 7:
        sub_4323( 0, 2, 4577, 8822 );
        sub_4323( 1, 5, 19121, 19883 );
        sub_4323( 2, 6, 28145, 29707 );
        sub_4323( 3, 9, 34609, 35425 );
        sub_4323( 4, 6, 37878, 39190 );
        sub_4323( 5, 5, 43339, 44347 );
        sub_4323( 6, 5, 47643, 48219 );
        sub_4323( 7, 5, 10742, 11782 );
        sub_4323( 8, 6, 17366, 18363 );
        sub_4323( 9, 7, 33766, 35953 );
        sub_4323( 10, 5, 46310, 47515 );
        sub_4323( 11, 6, 7960, 9678 );
        sub_4323( 12, 7, 21192, 23534 );
        sub_4323( 13, 6, 407, 2247 );
        sub_4323( 14, 5, 21655, 22471 );
        sub_4323( 15, 6, 31847, 33362 );
        sub_4323( 16, 5, 51922, 53741 );
        sub_4323( 17, 2, 55789, 58743 );
        break;
        case 8:
        sub_4323( 0, 2, 4609, 7147 );
        sub_4323( 1, 5, 15873, 17147 );
        sub_4323( 2, 5, 26918, 27686 );
        sub_4323( 3, 6, 34134, 36422 );
        sub_4323( 4, 7, 53115, 55862 );
        sub_4323( 5, 9, 6807, 8364 );
        sub_4323( 6, 6, 27538, 30551 );
        sub_4323( 7, 6, 37490, 39527 );
        sub_4323( 8, 5, 44775, 46076 );
        sub_4323( 9, 9, 119, 1330 );
        sub_4323( 10, 9, 7069, 7975 );
        sub_4323( 11, 10, 13341, 14674 );
        sub_4323( 12, 7, 27202, 29751 );
        sub_4323( 13, 9, 37421, 38637 );
        sub_4323( 14, 6, 42925, 44322 );
        sub_4323( 15, 9, 49511, 50055 );
        sub_4323( 16, 6, 19757, 22210 );
        sub_4323( 17, 7, 26829, 29314 );
        sub_4323( 18, 9, 38973, 39895 );
        sub_4323( 19, 6, 48258, 50173 );
        sub_4323( 20, 2, 53783, 55746 );
        break;
        case 9:
        sub_4323( 0, 2, 21686, 22395 );
        sub_4323( 1, 5, 32998, 33814 );
        sub_4323( 2, 6, 36379, 37542 );
        sub_4323( 3, 6, 4696, 5864 );
        sub_4323( 4, 6, 28301, 30232 );
        sub_4323( 5, 5, 49261, 50141 );
        sub_4323( 6, 6, 57279, 1633 );
        sub_4323( 7, 6, 23708, 24503 );
        sub_4323( 8, 9, 36860, 38049 );
        sub_4323( 9, 5, 56428, 144 );
        sub_4323( 10, 6, 17371, 18560 );
        sub_4323( 11, 9, 33888, 35136 );
        sub_4323( 12, 2, 43099, 45051 );
        break;
    }
    return;
}

void sub_4323(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U67[uParam0]._fU0 = uParam1;
    l_U67[uParam0]._fU4 = uParam2;
    l_U67[uParam0]._fU8 = uParam3;
    return;
}

void sub_7644()
{
    int iVar2;

    iVar2 = 2;
    CLEAR_AREA( l_U162._fU0, l_U162._fU4, l_U162._fU8, 18, 1 );
    for ( l_U24 = 0; l_U24 < l_U30; l_U24++ )
    {
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U162, 12.00000000, 1 ))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
            if (iVar2 == 0)
            {
                if (CAN_CREATE_RANDOM_CHAR( 1, 0 ))
                {
                    CREATE_RANDOM_MALE_CHAR( l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U30[l_U24] );
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR( l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U30[l_U24] );
                }
                else
                {
                    iVar2 = 2;
                }
            }
            else if (iVar2 == 1)
            {
                if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
                {
                    CREATE_RANDOM_FEMALE_CHAR( l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U30[l_U24] );
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR( l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U30[l_U24] );
                }
                else
                {
                    iVar2 = 2;
                }
            }
            else
            {
                iVar2 = 2;
            }
            if (NOT (iVar2 == 2))
            {
                if (NOT (IS_CHAR_INJURED( l_U30[l_U24] )))
                {
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U30[l_U24], "Gta_MloRoom02" );
                    TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U30[l_U24], l_U162, 14.00000000 );
                    SET_CHAR_IN_CUTSCENE( l_U30[l_U24], 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U30[l_U24] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U30[l_U24], 1 );
                    l_U49[l_U24] = 0;
                    l_U58[l_U24] = 0;
                }
            }
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0, 1.10000000, ref l_U40[l_U24] );
    }
    l_U16 = 1;
    return;
}

void sub_8215()
{
    if (NOT (IS_CHAR_INJURED( sub_879() )))
    {
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U171, 2.00000000, 1 ))
        {
            if ((NOT (COMPARE_STRING( l_U15, "E2_CM04" ))) AND ((NOT (COMPARE_STRING( l_U15, "E2_CM03" ))) AND ((NOT (COMPARE_STRING( l_U15, "E2_CM02" ))) AND (NOT (COMPARE_STRING( l_U15, "E2_CM01" ))))))
            {
                SET_CHAR_IN_CUTSCENE( sub_879(), 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( sub_879(), "Gta_MloRoom02" );
                TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( sub_879(), l_U171, 2.00000000 );
            }
        }
        REMOVE_PLAYER_HELMET( sub_826(), 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U178 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U178 )))
        {
            SET_CHAR_COORDINATES( l_U178, l_U171._fU0, l_U171._fU4, l_U171._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U178, l_U171._fU0, l_U171._fU4, l_U171._fU8 );
        }
        GET_PLAYER_GROUP( sub_826(), ref l_U39 );
        REMOVE_CHAR_FROM_GROUP( l_U178 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U178, 1 );
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U168, 2.00000000, 1 ))
        {
            SET_CHAR_IN_CUTSCENE( l_U178, 1 );
            TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U178, l_U168, 2.00000000 );
        }
    }
    return;
}

void sub_8700(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U30[uParam0] )))
    {
        if (NOT ((l_U165._fU8 == 0.80000000) AND ((l_U165._fU4 == 0.00000000) AND (l_U165._fU0 == 0.00000000))))
        {
            TASK_LOOK_AT_COORD( l_U30[uParam0], l_U165._fU0, l_U165._fU4, l_U165._fU8, 20000, 0 );
        }
        switch (l_U49[uParam0])
        {
            case 0:
            if (IS_CHAR_SITTING_IDLE( l_U30[uParam0] ))
            {
                sub_8876( uParam0 );
            }
            break;
            case 1:
            if ((l_U28 >= l_U40[uParam0]) AND (NOT l_U17))
            {
                sub_9077( uParam0 );
            }
            break;
            case 2:
            l_U27 = -1;
            if (IS_CHAR_SITTING_IDLE( l_U30[uParam0] ))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_a", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_b", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_c", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_d" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_d", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_e" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_e", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_f" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "laugh_f", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "clap_a", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "clap_b", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "clap_c", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "jeer_a", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "jeer_b", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "jeer_c", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "cheer_a", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "cheer_b", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "agree_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "agree_a", ref l_U27 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U30[uParam0], "AMB@COMEDY", "bored" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U30[uParam0], "AMB@COMEDY", "bored", ref l_U27 );
                };;;;;;;;;;;;;;;;
                if (l_U27 >= 0.98000000)
                {
                    if (l_U17)
                    {
                        sub_8876( uParam0 );
                    }
                    else if (NOT (l_U21 == -1))
                    {
                        if (NOT (l_U58[uParam0] == l_U67[l_U21]._fU0))
                        {
                            l_U49[uParam0] = 1;
                        }
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_8876(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "idle01", 1 );
        break;
        case 4:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "bored", 1 );
        break;
    }
    l_U49[uParam0] = 1;
    return;
}

void sub_9077(unknown uParam0)
{
    if (NOT (l_U21 == -1))
    {
        switch (l_U67[l_U21]._fU0)
        {
            case 2:
            sub_9190( uParam0 );
            break;
            case 3:
            sub_9447( uParam0 );
            break;
            case 4:
            sub_9518( uParam0 );
            break;
            case 5:
            sub_9673( uParam0 );
            break;
            case 6:
            sub_9830( uParam0 );
            break;
            case 7:
            sub_10089( uParam0 );
            break;
            case 8:
            sub_10348( uParam0 );
            break;
            case 9:
            sub_10505( uParam0 );
            break;
            case 10:
            sub_10660( uParam0 );
            break;
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0, 1.10000000, ref l_U40[uParam0] );
        l_U58[uParam0] = l_U67[l_U21]._fU0;
    }
    return;
}

void sub_9190(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_b", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_a", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_b", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_9447(unknown uParam0)
{
    CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_c", 1 );
    l_U49[uParam0] = 2;
    return;
}

void sub_9518(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "clap_b", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_9673(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_b", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_9830(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_b", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_c", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_d", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_10089(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_c", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_d", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_e", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "laugh_f", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_10348(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "cheer_b", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_10505(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U23 );
    switch (l_U23)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_c", 1 );
        break;
    }
    l_U49[uParam0] = 2;
    return;
}

void sub_10660(unknown uParam0)
{
    CHANGE_CHAR_SIT_IDLE_ANIM( l_U30[uParam0], "AMB@COMEDY", "jeer_b", 1 );
    l_U49[uParam0] = 2;
    return;
}

void sub_12273()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_879() )))
    {
        if (IS_CHAR_SITTING_IDLE( sub_879() ))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_879(), "AMB@COMEDY", "idle01" )))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( sub_879(), "AMB@COMEDY", "idle01", 1 );
                l_U12 = 1;
                SETTIMERB( 0 );
            }
            else if (NOT ((l_U165._fU8 == 0.80000000) AND ((l_U165._fU4 == 0.00000000) AND (l_U165._fU0 == 0.00000000))))
            {
                TASK_LOOK_AT_COORD( sub_879(), l_U165._fU0, l_U165._fU4, l_U165._fU8, 20000, 0 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U178 )))
    {
        if (IS_CHAR_SITTING_IDLE( l_U178 ))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U178, "AMB@COMEDY", "idle01" )))
            {
                if ((TIMERB() >= 400) AND (l_U12))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U178, "AMB@COMEDY", "idle01", 1 );
                }
            }
            else if (NOT ((l_U165._fU8 == 0.80000000) AND ((l_U165._fU4 == 0.00000000) AND (l_U165._fU0 == 0.00000000))))
            {
                TASK_LOOK_AT_COORD( l_U178, l_U165._fU0, l_U165._fU4, l_U165._fU8, 20000, 0 );
            }
        }
        else if (DOES_SCENARIO_EXIST_IN_AREA( l_U168, 2.00000000, 1 ))
        {
            GET_SCRIPT_TASK_STATUS( l_U178, 118, ref iVar2 );
            if (iVar2 == 7)
            {
                TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U178, l_U168, 2.00000000 );
            }
        }
    }
    return;
}

void sub_13264()
{
    if (NOT ((l_U67[l_U21 + 1]._fU4) == -1))
    {
        if (l_U22 >= (l_U67[l_U21 + 1]._fU4))
        {
            l_U21++;
            l_U28 = 0;
            l_U17 = 0;
        }
        else if ((NOT (l_U21 == -1)) AND (NOT l_U17))
        {
            if (l_U22 >= l_U67[l_U21]._fU8)
            {
                l_U17 = 1;
            }
        }
    }
    else
    {
        l_U17 = 0;
    }
    return;
}

void sub_13542()
{
    int I;
    vector[3] vVar3;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float[3] fVar13;
    unknown uVar17;

    array(ref vVar3, 3);
    array(ref fVar13, 3);
    vVar3[0] = {-348.83180000, 178.67930000, 13.79810000};
    fVar13[0] = 113.13670000;
    vVar3[2] = {-348.52570000, 182.48110000, 13.79810000};
    fVar13[2] = 88.73270000;
    vVar3[1] = {-347.33720000, 184.70920000, 13.79810000};
    fVar13[1] = 144.40000000;
    l_U13 = 1;
    OVERRIDE_FREEZE_FLAGS( 0 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar17 );
    if (IS_VEH_DRIVEABLE( uVar17 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( uVar17 )))
        {
            SET_CAR_AS_MISSION_CAR( uVar17 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( uVar17, 0 );
            l_U11 = 1;
        }
        else
        {
            l_U11 = 0;
        }
        if (LOCATE_CAR_2D( uVar17, -348.83000000, 181.27000000, 3.00000000, 3.00000000, 0 ))
        {
            CLEAR_AREA( -353.31810000, 181.77380000, 14.44190000, 7.00000000, 1 );
            SET_CAR_COORDINATES( uVar17, -353.31810000, 181.77380000, 14.44190000 );
            SET_CAR_HEADING( uVar17, 0 );
            SET_CAR_ON_GROUND_PROPERLY( uVar17 );
            WAIT( 1000 );
        }
    }
    else
    {
        l_U11 = 0;
    }
    if (NOT (IS_CHAR_DEAD( sub_879() )))
    {
        CLEAR_AREA( -348.83000000, 181.27000000, 14, 4.00000000, 1 );
        SET_CHAR_PROOFS( sub_879(), 0, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_879() )))
        {
            SET_CHAR_COORDINATES( sub_879(), -348.83000000, 181.28000000, 13.76200000 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_879(), -348.83000000, 181.28000000, 13.76200000 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_879() );
        TASK_CLEAR_LOOK_AT( sub_879() );
        SET_CHAR_HEADING( sub_879(), 90 );
        SET_CHAR_IN_CUTSCENE( sub_879(), 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    sub_14084();
    if (l_U19 <= 2)
    {
        g_U10576 = 0;
    }
    else
    {
        g_U10576 = 1;
    }
    if (l_U8)
    {
        if (WAS_CUTSCENE_SKIPPED())
        {
            sub_2347( 3 );
        }
        else
        {
            sub_2347( 0 );
        }
        sub_2437();
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U174[I] )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U174[I] )))
                {
                    SET_CHAR_COORDINATES( l_U174[I], vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8 );
                }
                else
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U174[I], vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U174[I] );
                TASK_CLEAR_LOOK_AT( l_U174[I] );
                GET_PLAYER_GROUP( sub_826(), ref l_U39 );
                if (NOT (IS_GROUP_MEMBER( l_U174[I], l_U39 )))
                {
                    SET_GROUP_MEMBER( l_U39, l_U174[I] );
                }
                SET_CHAR_HEADING( l_U174[I], fVar13[I] );
                SET_CHAR_PROOFS( l_U174[I], 0, 0, 0, 0, 0 );
                SET_CHAR_IN_CUTSCENE( l_U174[I], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U174[I], 0 );
            }
        }
        l_U8 = 0;
    }
    if ((l_U11) AND (IS_VEH_DRIVEABLE( uVar17 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar17 );
    }
    l_U21 = -1;
    l_U20 = -1;
    g_U28849 = 3;
    sub_14609();
    l_U7 = 0;
    l_U17 = 0;
    l_U12 = 0;
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
    }
    WAIT( 1200 );
    SET_PLAYER_CONTROL( sub_826(), 1 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
    }
    return;
}

void sub_14084()
{
    for ( l_U24 = 0; l_U24 < l_U30; l_U24++ )
    {
        if (DOES_CHAR_EXIST( l_U30[l_U24] ))
        {
            DELETE_CHAR( ref l_U30[l_U24] );
        }
    }
    l_U16 = 0;
    return;
}

void sub_14609()
{
    sub_14622( ref g_U10589 );
    sub_14700( ref g_U10589._fU0 );
    return;
}

void sub_14622(int iParam0)
{
    sub_14635( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_14635(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_14700(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_14731( iParam0->_fU4 )))
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

int sub_14731(unknown uParam0)
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

