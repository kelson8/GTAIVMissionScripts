void main()
{
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 1;
    l_U14 = 0;
    l_U15 = -1;
    l_U16 = -1;
    l_U17 = 0;
    l_U22 = 0;
    l_U152 = {-350.43000000, 181.40000000, 16.20000000};
    l_U155 = {-334.26000000, 170.66000000, 18.75000000};
    l_U158 = {65206, 172, 20.11000000};
    l_U161 = {-336.38000000, 177.41000000, 18.86000000};
    l_U164 = {-335.87000000, 178.94000000, 18.86000000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_189();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (NOT l_U7)
            {
                if (g_U10978)
                {
                    if (NOT (sub_259( 5 )))
                    {
                        l_U13 = 0;
                    }
                }
                if (NOT l_U13)
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
            l_U6 = sub_868( ref l_U151 );
            if (l_U13)
            {
                if (g_U10978)
                {
                    if (NOT (sub_259( 5 )))
                    {
                        l_U13 = 0;
                    }
                }
            }
            if (((sub_987()) || (l_U6)) AND (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "michelle1" )) == 0) AND (g_U9212)))
            {
                if ((l_U13) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_1306(), l_U152._fU0, l_U152._fU4, l_U152._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1400(), 0 )))
                    {
                        GET_GAME_TIMER( ref l_U20 );
                        if ((NOT (g_U26757 > l_U20)) AND ((NOT g_U9893._fU12) AND ((NOT sub_1753()) AND ((NOT g_U10980) AND ((sub_1460( 1, 1 )) AND (NOT l_U5))))))
                        {
                            if (l_U6)
                            {
                                sub_1838();
                                if ((NOT (IS_CHAR_ON_FIRE( l_U23 ))) AND (NOT (IS_CHAR_INJURED( l_U23 ))))
                                {
                                    SET_CHAR_PROOFS( l_U23, 1, 1, 1, 1, 1 );
                                }
                            }
                            sub_2585();
                            SET_CHAR_PROOFS( sub_1306(), 1, 1, 1, 1, 1 );
                            SET_PLAYER_CONTROL( sub_1400(), 0 );
                            l_U4 = 1;
                            l_U7 = 1;
                            sub_3238();
                        }
                    }
                    else if (NOT l_U8)
                    {
                        PRINT_HELP( "COMEDY_WANTED" );
                        l_U8 = 1;
                    }
                }
                else if (l_U8)
                {
                    l_U8 = 0;
                }
            }
        }
        else
        {
            sub_189();
        }
    }
    return;
}

void sub_189()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_259(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_299( g_U32898._fU0 ))
    {
        if (NOT (sub_386( g_U32898._fU0, iParam0 )))
        {
            return 0;
        }
        g_U32898._fU8 = iParam0;
        g_U32898._fU72 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U32898._fU4)
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
            if (g_U32898._fU36[uVar3] > 0)
            {
                g_U32898._fU36[uVar3]--;
            }
            g_U32898._fU72 = 0;
            return 1;
        }
    }
    if (g_U32898._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
        }
    }
    if (g_U32898._fU32 <= 0)
    {
        g_U32898._fU12 = iParam0;
        return 0;
    }
    if (g_U32898._fU36[uVar3] > 0)
    {
        g_U32898._fU8 = iParam0;
        g_U32898._fU36[uVar3]--;
        if (iParam0 == 5)
        {
            g_U32898._fU72 = 1;
        }
        return 1;
    }
    g_U32898._fU12 = iParam0;
    return 0;
}

int sub_299(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

int sub_386(int iParam0, int iParam1)
{
    if (iParam1 == 7)
    {
        if ((iParam0 == 28) || (iParam0 == 10))
        {
            return 0;
        }
    }
    if (iParam1 == 6)
    {
        if ((iParam0 == 29) || ((iParam0 == 10) || (iParam0 == 2)))
        {
            return 0;
        }
    }
    return 1;
}

int sub_868(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

int sub_987()
{
    if (g_U9222._fU0._fU4 == 0)
    {
        return 1;
    }
    else if (sub_1027( g_U9222 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_1027(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1196( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1196(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1306()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1400()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1460(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1306() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1306(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1306() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1306(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1306()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1306() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1306() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1400() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1400() )))
    {
        return 0;
    }
    return 1;
}

int sub_1753()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

void sub_1838()
{
    if ((NOT (l_U4 == 0)) AND (IS_CHAR_INJURED( l_U23 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U23, sub_1306(), 0 ))
        {
            sub_1891( 5 );
        }
        else
        {
            sub_1891( 4 );
        }
        sub_2012();
    }
    else
    {
        switch (l_U4)
        {
            case 0:
            GET_GROUP_MEMBER( sub_2253(), 0, ref l_U23 );
            sub_2304();
            l_U4 = 1;
            break;
            case 1: break;
            case 2: break;
        }
    }
    return;
}

void sub_1891(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_299( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

void sub_2012()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_2067();
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU20 == 8)
        {
            g_U32898._fU20 = 3;
        }
    }
    else if (NOT (g_U32898._fU4 == 9))
    {
        if (g_U32898._fU16 == 8)
        {
            g_U32898._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U32898._fU28 = 1;
    return;
}

void sub_2067()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_2253()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2304()
{
    sub_2313();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_2313()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_2392();
        }
        return;
    }
    g_U10978 = 1;
    sub_2464();
    return;
}

void sub_2392()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_2464()
{
    g_U32896._fU4 = 0;
    return;
}

void sub_2585()
{
    sub_2594();
    if (g_U32926 == 2)
    {
        l_U14 = g_U9214[g_U9221];
    }
    else
    {
        sub_2808( g_U32926 );
        if (l_U15 < 0)
        {
            l_U14 = g_U9214[g_U9221];
        }
        else
        {
            l_U14 = l_U15;
        }
    }
    return;
}

void sub_2594()
{
    int[0] iVar2;
    int iVar9;
    unknown uVar10;
    int I;

    if ((g_U9221 == -1) || (g_U9221 == 5))
    {
        array(ref iVar2, 6);
        iVar9 = 0;
        for ( I = 0; I < iVar2; I++ )
        {
            iVar2[I] = 0;
        }
        while (NOT (iVar9 == 6))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar10 );
            if (NOT iVar2[uVar10])
            {
                iVar2[uVar10] = 1;
                g_U9214[iVar9] = uVar10;
                iVar9++;
            }
        }
        g_U9221 = 0;
    }
    else
    {
        g_U9221++;
    }
    return;
}

void sub_2808(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (sub_2831( g_U9214[g_U9221], uParam0 ))
    {
        ;
    }
    else
    {
        iVar3 = sub_2968( g_U9221, 6, uParam0 );
        if (iVar3 > -1)
        {
            uVar4 = g_U9214[g_U9221];
            g_U9214[g_U9221] = g_U9214[iVar3];
            g_U9214[iVar3] = uVar4;
        }
        else
        {
            iVar3 = sub_2968( 0, g_U9221, uParam0 );
            if (iVar3 > -1)
            {
                l_U15 = g_U9214[iVar3];
            }
        }
    }
    return;
}

int sub_2831(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        return sub_2867( uParam0 );
        break;
        case 1:
        if (sub_2867( uParam0 ))
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 1;
}

int sub_2867(int iParam0)
{
    if ((iParam0 < 3) AND (iParam0 >= 0))
    {
        return 1;
    }
    return 0;
}

void sub_2968(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;
    int Result;

    iVar5 = uParam0;
    Result = -1;
    while ((Result == -1) AND (iVar5 < iParam1))
    {
        if (sub_2831( g_U9214[iVar5], uParam2 ))
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

void sub_3238()
{
    string sVar2;

    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "AMB@COMEDY" );
    while (NOT (HAVE_ANIMS_LOADED( "AMB@COMEDY" )))
    {
        WAIT( 0 );
    }
    OVERRIDE_FREEZE_FLAGS( 1 );
    switch (l_U14)
    {
        case 0:
        sVar2 = "CM1";
        break;
        case 1:
        sVar2 = "CM2";
        break;
        case 2:
        sVar2 = "CM3";
        break;
        case 3:
        sVar2 = "CM5";
        break;
        case 4:
        sVar2 = "CM6";
        break;
        case 5:
        sVar2 = "CM7";
        break;
    }
    sub_3489( l_U14 );
    START_CUTSCENE_NOW( sVar2 );
    SETTIMERA( 0 );
    while (NOT (TIMERA() >= 2000))
    {
        WAIT( 0 );
        if (NOT l_U11)
        {
            sub_5903();
        }
        else
        {
            SETTIMERA( 3000 );
        }
    }
    sub_6474();
    l_U5 = 1;
    l_U22 = 0;
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
        for ( l_U19 = 0; l_U19 < l_U24; l_U19++ )
        {
            sub_6886( l_U19 );
        }
        sub_10459();
    }
    SETTIMERA( 0 );
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
        if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
        {
            l_U17 = GET_CUTSCENE_TIME();
            if (GET_CUTSCENE_SECTION_PLAYING() == 1)
            {
                switch (l_U14)
                {
                    case 0:
                    l_U17 += 113233;
                    break;
                    case 1:
                    l_U17 += 105400;
                    break;
                    case 2:
                    l_U17 += 51133;
                    break;
                    case 3:
                    l_U17 += 88966;
                    break;
                    case 4:
                    l_U17 += 121700;
                    break;
                    case 5:
                    l_U17 += 73766;
                    break;
                }
            }
            else if (GET_CUTSCENE_SECTION_PLAYING() == 2)
            {
                switch (l_U14)
                {
                    case 2:
                    l_U17 += 108233;
                    break;
                    case 3:
                    l_U17 += 180632;
                    break;
                    case 5:
                    l_U17 += 140165;
                    break;
                }
            }
            sub_11240();
            if (NOT l_U11)
            {
                sub_5903();
            }
            else if (TIMERA() >= 200)
            {
                GET_CUTSCENE_PED_POSITION( 0, ref l_U158 );
                l_U158._fU8 += 0.80000000;
                l_U22 += 1.00000000 * TIMESTEP();
                for ( l_U19 = 0; l_U19 < l_U24; l_U19++ )
                {
                    sub_6886( l_U19 );
                }
                sub_10459();
            }
        }
    }
    CLEAR_NAMED_CUTSCENE( sVar2 );
    sub_11517();
    return;
}

void sub_3489(unknown uParam0)
{
    int I;

    for ( I = 0; I < l_U60; I++ )
    {
        l_U60[I]._fU0 = 0;
        l_U60[I]._fU4 = -1;
        l_U60[I]._fU8 = -1;
    }
    switch (uParam0)
    {
        case 0:
        sub_3626( 0, 2, 1760, 10310 );
        sub_3626( 1, 6, 17425, 18277 );
        sub_3626( 2, 7, 36938, 41777 );
        sub_3626( 3, 9, 43777, 43466 );
        sub_3626( 4, 7, 50762, 53512 );
        sub_3626( 5, 7, 78130, 87625 );
        sub_3626( 6, 7, 94349, 115692 );
        sub_3626( 7, 6, 130000, 135000 );
        sub_3626( 8, 7, 137000, 146458 );
        sub_3626( 9, 4, 145185, 146469 );
        sub_3626( 10, 6, 180085, 184184 );
        sub_3626( 11, 6, 186552, 188441 );
        sub_3626( 12, 6, 190441, 192578 );
        sub_3626( 13, 6, 195008, 194958 );
        sub_3626( 14, 7, 202153, 214481 );
        sub_3626( 15, 6, 216481, 220014 );
        sub_3626( 16, 7, 222014, 244760 );
        sub_3626( 17, 2, 242573, 251766 );
        break;
        case 1:
        sub_3626( 0, 2, 2526, 12246 );
        sub_3626( 1, 6, 34058, 34790 );
        sub_3626( 2, 6, 38594, 40140 );
        sub_3626( 3, 7, 45156, 47361 );
        sub_3626( 4, 6, 52126, 51842 );
        sub_3626( 5, 7, 60886, 64340 );
        sub_3626( 6, 6, 80390, 80752 );
        sub_3626( 7, 6, 95695, 95009 );
        sub_3626( 8, 7, 104498, 105813 );
        sub_3626( 9, 7, 113217, 115250 );
        sub_3626( 10, 6, 119574, 120210 );
        sub_3626( 11, 6, 133077, 133922 );
        sub_3626( 12, 6, 143246, 143217 );
        sub_3626( 13, 6, 148154, 148866 );
        sub_3626( 14, 6, 152570, 152178 );
        sub_3626( 15, 7, 154860, 156401 );
        sub_3626( 16, 7, 164506, 164525 );
        sub_3626( 17, 7, 169125, 170473 );
        sub_3626( 18, 6, 179586, 181114 );
        sub_3626( 19, 7, 188026, 191470 );
        sub_3626( 20, 3, 189510, 190718 );
        sub_3626( 21, 6, 203321, 205000 );
        sub_3626( 22, 7, 212269, 213354 );
        sub_3626( 23, 2, 215354, 253400 );
        break;
        case 2:
        sub_3626( 0, 2, 2960, 10034 );
        sub_3626( 1, 6, 18720, 18326 );
        sub_3626( 2, 6, 22408, 21680 );
        sub_3626( 3, 6, 25162, 24697 );
        sub_3626( 4, 6, 48164, 47300 );
        sub_3626( 5, 6, 60117, 60714 );
        sub_3626( 6, 7, 67748, 69066 );
        sub_3626( 7, 6, 79597, 80488 );
        sub_3626( 8, 5, 82488, 83502 );
        sub_3626( 9, 7, 86640, 87477 );
        sub_3626( 10, 6, 93766, 94614 );
        sub_3626( 11, 6, 101089, 114928 );
        sub_3626( 12, 7, 116928, 174766 );
        sub_3626( 13, 7, 118548, 119196 );
        sub_3626( 14, 7, 142060, 142888 );
        sub_3626( 15, 7, 146622, 151724 );
        sub_3626( 16, 3, 148640, 150038 );
        sub_3626( 17, 7, 154350, 159904 );
        sub_3626( 18, 7, 168800, 171052 );
        sub_3626( 19, 2, 173052, 176766 );
        break;
        case 3:
        sub_3626( 0, 2, 7045, 31489 );
        sub_3626( 1, 6, 43429, 43860 );
        sub_3626( 2, 5, 50985, 50040 );
        sub_3626( 3, 6, 53490, 53764 );
        sub_3626( 4, 6, 58446, 62474 );
        sub_3626( 5, 7, 64474, 71100 );
        sub_3626( 6, 6, 77018, 77213 );
        sub_3626( 7, 7, 85862, 90970 );
        sub_3626( 8, 6, 92970, 94500 );
        sub_3626( 9, 7, 96500, 96441 );
        sub_3626( 10, 7, 108561, 113002 );
        sub_3626( 11, 7, 115886, 115893 );
        sub_3626( 12, 7, 127744, 127836 );
        sub_3626( 13, 6, 132720, 135160 );
        sub_3626( 14, 7, 137160, 136634 );
        sub_3626( 15, 7, 140150, 141317 );
        sub_3626( 16, 3, 141800, 143010 );
        sub_3626( 17, 6, 151562, 157126 );
        sub_3626( 18, 7, 159126, 159300 );
        sub_3626( 19, 6, 163737, 163533 );
        sub_3626( 20, 7, 167045, 181057 );
        sub_3626( 21, 2, 167150, 176397 );
        sub_3626( 22, 6, 187120, 188289 );
        sub_3626( 23, 6, 203661, 215382 );
        sub_3626( 24, 7, 219822, 220781 );
        sub_3626( 25, 8, 222781, 228449 );
        sub_3626( 26, 7, 232425, 233366 );
        sub_3626( 27, 2, 235366, 300000 );
        break;
        case 4:
        sub_3626( 0, 2, 4150, 19558 );
        sub_3626( 1, 6, 22838, 22473 );
        sub_3626( 2, 6, 43320, 55306 );
        sub_3626( 3, 6, 66330, 66276 );
        sub_3626( 4, 7, 69954, 72389 );
        sub_3626( 5, 6, 79209, 79346 );
        sub_3626( 6, 6, 82866, 87718 );
        sub_3626( 7, 7, 90321, 90810 );
        sub_3626( 8, 7, 107725, 116428 );
        sub_3626( 9, 3, 109630, 110700 );
        sub_3626( 10, 7, 138690, 147089 );
        sub_3626( 11, 6, 149089, 154457 );
        sub_3626( 12, 6, 165234, 164920 );
        sub_3626( 13, 6, 176020, 176214 );
        sub_3626( 14, 6, 183115, 182954 );
        sub_3626( 15, 7, 191896, 191886 );
        sub_3626( 16, 6, 200678, 200457 );
        sub_3626( 17, 7, 211070, 217130 );
        sub_3626( 18, 7, 221360, 222718 );
        sub_3626( 19, 2, 222820, 231133 );
        break;
        case 5:
        sub_3626( 0, 2, 4100, 19910 );
        sub_3626( 1, 6, 30556, 31981 );
        sub_3626( 2, 6, 47988, 49109 );
        sub_3626( 3, 6, 54166, 53897 );
        sub_3626( 4, 7, 64506, 65445 );
        sub_3626( 5, 7, 73449, 74408 );
        sub_3626( 6, 7, 92350, 97260 );
        sub_3626( 7, 7, 102000, 104420 );
        sub_3626( 8, 4, 103470, 104561 );
        sub_3626( 9, 6, 109676, 114904 );
        sub_3626( 10, 6, 122565, 122233 );
        sub_3626( 11, 7, 131981, 132065 );
        sub_3626( 12, 6, 135470, 138981 );
        sub_3626( 13, 6, 151972, 152528 );
        sub_3626( 14, 6, 159086, 160161 );
        sub_3626( 15, 6, 168780, 171656 );
        sub_3626( 16, 7, 177400, 179508 );
        sub_3626( 17, 7, 186601, 188605 );
        sub_3626( 18, 2, 189382, 196300 );
        break;
    }
    return;
}

void sub_3626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U60[uParam0]._fU0 = uParam1;
    l_U60[uParam0]._fU4 = uParam2;
    l_U60[uParam0]._fU8 = uParam3;
    return;
}

void sub_5903()
{
    int iVar2;

    iVar2 = 2;
    CLEAR_AREA( l_U155._fU0, l_U155._fU4, l_U155._fU8, 18, 1 );
    for ( l_U19 = 0; l_U19 < l_U24; l_U19++ )
    {
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U155, 12.00000000, 1 ))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
            if (iVar2 == 0)
            {
                if (CAN_CREATE_RANDOM_CHAR( 1, 0 ))
                {
                    CREATE_RANDOM_MALE_CHAR( l_U155._fU0, l_U155._fU4, l_U155._fU8, ref l_U24[l_U19] );
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR( l_U155._fU0, l_U155._fU4, l_U155._fU8, ref l_U24[l_U19] );
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
                    CREATE_RANDOM_FEMALE_CHAR( l_U155._fU0, l_U155._fU4, l_U155._fU8, ref l_U24[l_U19] );
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR( l_U155._fU0, l_U155._fU4, l_U155._fU8, ref l_U24[l_U19] );
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
                if (NOT (IS_CHAR_INJURED( l_U24[l_U19] )))
                {
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U24[l_U19], "Gta_MloRoom02" );
                    TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U24[l_U19], l_U155, 14.00000000 );
                    SET_CHAR_IN_CUTSCENE( l_U24[l_U19], 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U24[l_U19] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U24[l_U19], 1 );
                    l_U42[l_U19] = 0;
                    l_U51[l_U19] = 0;
                }
            }
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0, 1.10000000, ref l_U33[l_U19] );
    }
    l_U11 = 1;
    return;
}

void sub_6474()
{
    if (NOT (IS_CHAR_INJURED( sub_1306() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1306() )))
        {
            SET_CHAR_COORDINATES( sub_1306(), l_U161._fU0, l_U161._fU4, l_U161._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_1306(), l_U161._fU0, l_U161._fU4, l_U161._fU8 );
        }
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U161, 2.00000000, 1 ))
        {
            SET_CHAR_IN_CUTSCENE( sub_1306(), 1 );
            TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( sub_1306(), l_U161, 2.00000000 );
        }
        REMOVE_PLAYER_HELMET( sub_1400(), 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U23 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U23 )))
        {
            SET_CHAR_COORDINATES( l_U23, l_U164._fU0, l_U164._fU4, l_U164._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U23, l_U164._fU0, l_U164._fU4, l_U164._fU8 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U23, 1 );
        if (DOES_SCENARIO_EXIST_IN_AREA( l_U161, 2.00000000, 1 ))
        {
            SET_CHAR_IN_CUTSCENE( l_U23, 1 );
            TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U23, l_U161, 2.00000000 );
        }
    }
    return;
}

void sub_6886(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U24[uParam0] )))
    {
        if (NOT ((l_U158._fU8 == 0.80000000) AND ((l_U158._fU4 == 0.00000000) AND (l_U158._fU0 == 0.00000000))))
        {
            TASK_LOOK_AT_COORD( l_U24[uParam0], l_U158._fU0, l_U158._fU4, l_U158._fU8, 20000, 0 );
        }
        switch (l_U42[uParam0])
        {
            case 0:
            if (IS_CHAR_SITTING_IDLE( l_U24[uParam0] ))
            {
                sub_7062( uParam0 );
            }
            break;
            case 1:
            if ((l_U22 >= l_U33[uParam0]) AND (NOT l_U12))
            {
                sub_7263( uParam0 );
            }
            break;
            case 2:
            l_U21 = -1;
            if (IS_CHAR_SITTING_IDLE( l_U24[uParam0] ))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_a", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_b", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_c", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_d" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_d", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_e" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_e", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_f" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "laugh_f", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "clap_a", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "clap_b", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "clap_c", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "jeer_a", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "jeer_b", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_c" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "jeer_c", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "cheer_a", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "cheer_b", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "agree_a" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "agree_a", ref l_U21 );
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U24[uParam0], "AMB@COMEDY", "bored" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U24[uParam0], "AMB@COMEDY", "bored", ref l_U21 );
                };;;;;;;;;;;;;;;;
                if (l_U21 >= 0.98000000)
                {
                    if (l_U12)
                    {
                        sub_7062( uParam0 );
                    }
                    else if (NOT (l_U16 == -1))
                    {
                        if (NOT (l_U51[uParam0] == l_U60[l_U16]._fU0))
                        {
                            l_U42[uParam0] = 1;
                        }
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_7062(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "idle01", 1 );
        break;
        case 4:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "bored", 1 );
        break;
    }
    l_U42[uParam0] = 1;
    return;
}

void sub_7263(unknown uParam0)
{
    if (NOT (l_U16 == -1))
    {
        switch (l_U60[l_U16]._fU0)
        {
            case 2:
            sub_7376( uParam0 );
            break;
            case 3:
            sub_7633( uParam0 );
            break;
            case 4:
            sub_7704( uParam0 );
            break;
            case 5:
            sub_7859( uParam0 );
            break;
            case 6:
            sub_8016( uParam0 );
            break;
            case 7:
            sub_8275( uParam0 );
            break;
            case 8:
            sub_8534( uParam0 );
            break;
            case 9:
            sub_8691( uParam0 );
            break;
            case 10:
            sub_8846( uParam0 );
            break;
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0, 1.10000000, ref l_U33[uParam0] );
        l_U51[uParam0] = l_U60[l_U16]._fU0;
    }
    return;
}

void sub_7376(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_b", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_a", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_b", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_7633(unknown uParam0)
{
    CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_c", 1 );
    l_U42[uParam0] = 2;
    return;
}

void sub_7704(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "clap_b", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_7859(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_b", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_8016(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_b", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_c", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_d", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_8275(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_c", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_d", 1 );
        break;
        case 2:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_e", 1 );
        break;
        case 3:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "laugh_f", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_8534(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "cheer_b", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_8691(unknown uParam0)
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U18 );
    switch (l_U18)
    {
        case 0:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_a", 1 );
        break;
        case 1:
        CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_c", 1 );
        break;
    }
    l_U42[uParam0] = 2;
    return;
}

void sub_8846(unknown uParam0)
{
    CHANGE_CHAR_SIT_IDLE_ANIM( l_U24[uParam0], "AMB@COMEDY", "jeer_b", 1 );
    l_U42[uParam0] = 2;
    return;
}

void sub_10459()
{
    if (NOT (IS_CHAR_INJURED( sub_1306() )))
    {
        if (IS_CHAR_SITTING_IDLE( sub_1306() ))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_1306(), "AMB@COMEDY", "idle01" )))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( sub_1306(), "AMB@COMEDY", "idle01", 1 );
                l_U10 = 1;
                SETTIMERB( 0 );
            }
            else if (NOT ((l_U158._fU8 == 0.80000000) AND ((l_U158._fU4 == 0.00000000) AND (l_U158._fU0 == 0.00000000))))
            {
                TASK_LOOK_AT_COORD( sub_1306(), l_U158._fU0, l_U158._fU4, l_U158._fU8, 20000, 0 );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U23 )))
    {
        if (IS_CHAR_SITTING_IDLE( l_U23 ))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U23, "AMB@COMEDY", "idle01" )))
            {
                if ((TIMERB() >= 400) AND (l_U10))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U23, "AMB@COMEDY", "idle01", 1 );
                }
            }
            else if (NOT ((l_U158._fU8 == 0.80000000) AND ((l_U158._fU4 == 0.00000000) AND (l_U158._fU0 == 0.00000000))))
            {
                TASK_LOOK_AT_COORD( l_U23, l_U158._fU0, l_U158._fU4, l_U158._fU8, 20000, 0 );
            }
        }
    }
    return;
}

void sub_11240()
{
    if (NOT ((l_U60[l_U16 + 1]._fU4) == -1))
    {
        if (l_U17 >= (l_U60[l_U16 + 1]._fU4))
        {
            l_U16++;
            l_U22 = 0;
            l_U12 = 0;
        }
        else if ((NOT (l_U16 == -1)) AND (NOT l_U12))
        {
            if (l_U17 >= l_U60[l_U16]._fU8)
            {
                l_U12 = 1;
            }
        }
    }
    else
    {
        l_U12 = 0;
    }
    return;
}

void sub_11517()
{
    unknown uVar2;

    OVERRIDE_FREEZE_FLAGS( 0 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( uVar2 )))
        {
            SET_CAR_AS_MISSION_CAR( uVar2 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( uVar2, 0 );
            l_U9 = 1;
        }
        else
        {
            l_U9 = 0;
        }
        if (LOCATE_CAR_2D( uVar2, -348.83000000, 181.27000000, 3.00000000, 3.00000000, 0 ))
        {
            CLEAR_AREA( -353.31810000, 181.77380000, 14.44190000, 7.00000000, 1 );
            SET_CAR_COORDINATES( uVar2, -353.31810000, 181.77380000, 14.44190000 );
            SET_CAR_HEADING( uVar2, 0 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            WAIT( 1000 );
        }
    }
    else
    {
        l_U9 = 0;
    }
    if (NOT (IS_CHAR_DEAD( sub_1306() )))
    {
        CLEAR_AREA( -348.83000000, 181.27000000, 14, 4.00000000, 1 );
        SET_CHAR_PROOFS( sub_1306(), 0, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1306() )))
        {
            SET_CHAR_COORDINATES( sub_1306(), -348.83000000, 181.28000000, 13.76200000 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_1306(), -348.83000000, 181.28000000, 13.76200000 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1306() );
        TASK_CLEAR_LOOK_AT( sub_1306() );
        SET_CHAR_HEADING( sub_1306(), 90 );
        SET_CHAR_IN_CUTSCENE( sub_1306(), 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    sub_11938();
    if (l_U14 <= 2)
    {
        g_U9213 = 0;
    }
    else
    {
        g_U9213 = 1;
    }
    if (l_U6)
    {
        if (WAS_CUTSCENE_SKIPPED())
        {
            sub_1891( 3 );
        }
        else
        {
            sub_1891( 0 );
        }
        sub_2012();
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U23 )))
            {
                SET_CHAR_COORDINATES( l_U23, -346.89750000, 182.83970000, 13.79810000 );
            }
            else
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U23, -346.89750000, 182.83970000, 13.79810000 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U23 );
            TASK_CLEAR_LOOK_AT( l_U23 );
            SET_CHAR_HEADING( l_U23, 90 );
            SET_CHAR_PROOFS( l_U23, 0, 0, 0, 0, 0 );
            SET_CHAR_IN_CUTSCENE( l_U23, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U23, 0 );
        }
    }
    if ((l_U9) AND (IS_VEH_DRIVEABLE( uVar2 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
    }
    l_U16 = -1;
    l_U15 = -1;
    g_U32926 = 2;
    sub_12293();
    l_U5 = 0;
    l_U12 = 0;
    l_U10 = 0;
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    WAIT( 1200 );
    SET_PLAYER_CONTROL( sub_1400(), 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_11938()
{
    for ( l_U19 = 0; l_U19 < l_U24; l_U19++ )
    {
        if (DOES_CHAR_EXIST( l_U24[l_U19] ))
        {
            DELETE_CHAR( ref l_U24[l_U19] );
        }
    }
    l_U11 = 0;
    return;
}

void sub_12293()
{
    sub_12306( ref g_U9222 );
    sub_12384( ref g_U9222._fU0 );
    return;
}

void sub_12306(int iParam0)
{
    sub_12319( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_12319(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_12384(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_12415( iParam0->_fU4 )))
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

int sub_12415(unknown uParam0)
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

