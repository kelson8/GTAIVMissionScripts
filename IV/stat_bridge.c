void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U101 = 0;
    l_U119 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 25 );
        if (IS_PLAYER_PLAYING( sub_50() ))
        {
            switch (l_U101)
            {
                case 0:
                if (IS_CHAR_IN_ANY_HELI( sub_121() ))
                {
                    sub_191( 0, -709.54000000, 1167.26000000, 8.38000000 );
                    sub_191( 1, 747.30000000, 623.10000000, 15.40000000 );
                    sub_191( 2, 340, 1000, 11 );
                    sub_191( 3, 100, 1700, 27 );
                    sub_191( 4, 160, 1650, 24 );
                    sub_191( 5, 552.17100000, 1170.84400000, 9 );
                    sub_191( 6, 1404.55000000, 1278, 4.25500000 );
                    sub_191( 7, 514.54100000, 260.09800000, 17.16800000 );
                    sub_191( 8, 377.73800000, -51.46700000, 5.72700000 );
                    sub_191( 9, 567.79200000, -406.96600000, 18.97100000 );
                    sub_191( 10, -1423.04300000, -154.40600000, 25.01900000 );
                    sub_191( 11, -1517.06000000, -154.07200000, 4.21100000 );
                    sub_191( 12, -1750.10300000, -126.69000000, 6.99600000 );
                    sub_191( 13, 63676, 65386, 48 );
                    l_U119 = 0;
                    GET_CAR_CHAR_IS_USING( sub_121(), ref l_U135 );
                    l_U101 = 1;
                }
                break;
                case 1:
                if (IS_CHAR_IN_ANY_HELI( sub_121() ))
                {
                    if (l_U119 == 0)
                    {
                        GET_GAME_TIMER( ref l_U118 );
                        if ((l_U118 - l_U117) > 7000)
                        {
                            sub_693();
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U135 ))
                    {
                        sub_794();
                        sub_1577();
                        sub_2084();
                        sub_2570();
                        sub_3089();
                        sub_3631();
                        sub_4117();
                        sub_4598();
                        sub_5090();
                        sub_5577();
                        sub_6076();
                        sub_6582();
                        sub_7088();
                        sub_7594();
                        sub_8137();
                    }
                }
                else
                {
                    sub_8240();
                    l_U101 = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_50()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_121()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_BLIP_EXIST( l_U120[uParam0] ))
    {
        REMOVE_BLIP( l_U120[uParam0] );
    }
    if (g_U64626[uParam0] == 0)
    {
        ADD_BLIP_FOR_COORD( uParam1, uParam2, uParam3, ref l_U120[uParam0] );
        if (DOES_BLIP_EXIST( l_U120[uParam0] ))
        {
            CHANGE_BLIP_DISPLAY( l_U120[uParam0], 0 );
            CHANGE_BLIP_SPRITE( l_U120[uParam0], 81 );
        }
    }
    return;
}

void sub_693()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        if (DOES_BLIP_EXIST( l_U120[I] ))
        {
            CHANGE_BLIP_DISPLAY( l_U120[I], 0 );
        }
    }
    l_U119 = 1;
    return;
}

void sub_794()
{
    if (g_U64626[0] == 0)
    {
        switch (l_U102[0])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -710.69700000, 1165.52100000, 7.83400000, 100, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -710.69700000, 1154.52100000, 7.83400000, 31.26000000, 1, 9.98000000, 0 ))
                {
                    l_U102[0]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -709.98200000, 1179.79300000, 9.05200000, 30, 1, 9.36000000, 0 ))
                {
                    l_U102[0] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -709.98200000, 1179.79300000, 9.05200000, 30, 1, 9.36000000, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 0 );
                g_U64626[0] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -709.54000000, 1167.26000000, 8.38000000, 33.60000000, 15.66000000, 9.81999900, 0 )))
            {
                l_U102[0] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -710.69700000, 1154.52100000, 7.83400000, 31.26000000, 1, 9.98000000, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 0 );
                g_U64626[0] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -709.54000000, 1167.26000000, 8.38000000, 33.60000000, 15.66000000, 9.81999900, 0 )))
            {
                l_U102[0] = 0;
            }
            break;
        }
    }
    return;
}

void sub_1081(unknown uParam0)
{
    GET_GAME_TIMER( ref l_U117 );
    l_U119 = 0;
    if ((GET_STAT_FRONTEND_VISIBILITY( 281 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( 281, 1 );
    }
    if (DOES_BLIP_EXIST( l_U120[uParam0] ))
    {
        REMOVE_BLIP( l_U120[uParam0] );
    }
    if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
    {
        sub_1192();
        sub_1260();
    }
    return;
}

void sub_1192()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_INT_STAT( 281 );
    iVar3 = 14 - iVar2;
    if (iVar3 > 0)
    {
        PRINT_HELP_WITH_NUMBER( "bridges_help", iVar3 );
    }
    return;
}

void sub_1260()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        if (DOES_BLIP_EXIST( l_U120[I] ))
        {
            CHANGE_BLIP_DISPLAY( l_U120[I], 2 );
        }
    }
    return;
}

void sub_1577()
{
    if (g_U64626[1] == 0)
    {
        switch (l_U102[1])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 748.58400000, 620.18400000, 13, 150, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 748.58400000, 605.18410000, 13, 76.20000000, 1, 13, 0 ))
                {
                    l_U102[1]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 754.56700000, 646.98000000, 13.05000000, 78.60000000, 1, 13.80000000, 0 ))
                {
                    l_U102[1] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 754.56700000, 646.98000000, 13.05000000, 78.60000000, 1, 13.80000000, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 1 );
                g_U64626[1] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 747.30000000, 623.10000000, 15.40000000, 85.60000000, 28.20000000, 16.20000000, 0 )))
            {
                l_U102[1] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 748.58400000, 605.18410000, 13, 76.20000000, 1, 13, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 1 );
                g_U64626[1] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 747.30000000, 623.10000000, 15.40000000, 85.60000000, 28.20000000, 16.20000000, 0 )))
            {
                l_U102[1] = 0;
            }
            break;
        }
    }
    return;
}

void sub_2084()
{
    if (g_U64626[2] == 0)
    {
        switch (l_U102[2])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 344.82800000, 1010.50000000, 11.11000000, 300, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 344.82800000, 990.50000000, 11.11000000, 126.40000000, 1, 11.40000000, 0 ))
                {
                    l_U102[2]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 337.60000000, 1031, 11, 130, 1, 11, 0 ))
                {
                    l_U102[2] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 337.60000000, 1031, 11, 130, 1, 11, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 2 );
                g_U64626[2] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 340, 1000, 11, 130, 43, 12, 0 )))
            {
                l_U102[2] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 344.82800000, 990.50000000, 11.11000000, 126.40000000, 1, 11.40000000, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 2 );
                g_U64626[2] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 340, 1000, 11, 130, 43, 12, 0 )))
            {
                l_U102[2] = 0;
            }
            break;
        }
    }
    return;
}

void sub_2570()
{
    if (g_U64626[3] == 0)
    {
        switch (l_U102[3])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 213, 1745.30000000, 26.10000000, 500, 500, 500, 0 ))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 213, 1745.30000000, 26.10000000, -7.90000000, 1627, 0.55000000, 4, 0 ))
                {
                    l_U102[3]++;
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 222.99000000, 1788, 27, -26.30000000, 1651, 0.35000000, 4, 0 ))
                {
                    l_U102[3] = 2;
                }
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 222.99000000, 1788, 27, -26.30000000, 1651, 0.35000000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 3 );
                g_U64626[3] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 213, 1788, 29, 65510, 1658, 0, 44, 0 )))
            {
                l_U102[3] = 0;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 213, 1745.30000000, 26.10000000, -7.90000000, 1627, 0.55000000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 3 );
                g_U64626[3] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 213, 1788, 29, 65510, 1658, 0, 44, 0 )))
            {
                l_U102[3] = 0;
            }
            break;
        }
    }
    return;
}

void sub_3089()
{
    if (g_U64626[4] == 0)
    {
        switch (l_U102[4])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 281.70000000, 1679.67000000, 25.14000000, 500, 500, 500, 0 ))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 281.70000000, 1679.67000000, 25.14000000, 10.11000000, 1582.47000000, -0.25000000, 4, 0 ))
                {
                    l_U102[4]++;
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 274.31000000, 1694.47000000, 24.54000000, 10.11000000, 1596.87000000, 0.54700000, 4, 0 ))
                {
                    l_U102[4] = 2;
                }
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 274.31000000, 1694.47000000, 24.54000000, 10.11000000, 1596.87000000, 0.54700000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 4 );
                g_U64626[4] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 282, 1701, 24, 7.70000000, 1603, -3.46000000, 35, 0 )))
            {
                l_U102[4] = 0;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 281.70000000, 1679.67000000, 25.14000000, 10.11000000, 1582.47000000, -0.25000000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 4 );
                g_U64626[4] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 282, 1701, 24, 7.70000000, 1603, -3.46000000, 35, 0 )))
            {
                l_U102[4] = 0;
            }
            break;
        }
    }
    return;
}

void sub_3631()
{
    if (g_U64626[5] == 0)
    {
        switch (l_U102[5])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 531.17100000, 1171.84400000, 8.95800000, 100, 200, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 531.17100000, 1171.84400000, 8.95800000, 1, 55, 9, 0 ))
                {
                    l_U102[5]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 570.17100000, 1170.84400000, 8.95800000, 1, 55, 9, 0 ))
                {
                    l_U102[5] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 570.17100000, 1170.84400000, 8.95800000, 1, 55, 9, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 5 );
                g_U64626[5] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 552.17100000, 1170.84400000, 9, 30, 57, 9, 0 )))
            {
                l_U102[5] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 531.17100000, 1171.84400000, 8.95800000, 1, 55, 9, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 5 );
                g_U64626[5] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 552.17100000, 1170.84400000, 9, 30, 57, 9, 0 )))
            {
                l_U102[5] = 0;
            }
            break;
        }
    }
    return;
}

void sub_4117()
{
    if (g_U64626[6] == 0)
    {
        switch (l_U102[6])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1404.55000000, 1278, 4.25500000, 100, 300, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1404.55000000, 1278, 4.25500000, 1, 183, 5, 0 ))
                {
                    l_U102[6]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1423, 1278, 4.25500000, 1, 183, 5, 0 ))
                {
                    l_U102[6] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1423, 1278, 4.25500000, 1, 183, 5, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 6 );
                g_U64626[6] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1413, 1278, 4.25500000, 13, 184, 5, 0 )))
            {
                l_U102[6] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1404.55000000, 1278, 4.25500000, 1, 183, 5, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 6 );
                g_U64626[6] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 1413, 1278, 4.25500000, 13, 184, 5, 0 )))
            {
                l_U102[6] = 0;
            }
            break;
        }
    }
    return;
}

void sub_4598()
{
    if (g_U64626[7] == 0)
    {
        switch (l_U102[7])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 259.09800000, 17.16800000, 500, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 239.09800000, 17.16800000, 295, 1, 18, 0 ))
                {
                    l_U102[7]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 282.09800000, 17.16800000, 295, 1, 18, 0 ))
                {
                    l_U102[7] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 282.09800000, 17.16800000, 295, 1, 18, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 7 );
                g_U64626[7] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 260.09800000, 17.16800000, 303, 31, 19, 0 )))
            {
                l_U102[7] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 239.09800000, 17.16800000, 295, 1, 18, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 7 );
                g_U64626[7] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 514.54100000, 260.09800000, 17.16800000, 303, 31, 19, 0 )))
            {
                l_U102[7] = 0;
            }
            break;
        }
    }
    return;
}

void sub_5090()
{
    if (g_U64626[8] == 0)
    {
        switch (l_U102[8])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -50.46700000, 5.72700000, 100, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -62.46700000, 5.72700000, 27, 1, 7, 0 ))
                {
                    l_U102[8]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -38.46700000, 5.72700000, 27, 1, 7, 0 ))
                {
                    l_U102[8] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -38.46700000, 5.72700000, 27, 1, 7, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 8 );
                g_U64626[8] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -51.46700000, 5.72700000, 29, 19, 7, 0 )))
            {
                l_U102[8] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -62.46700000, 5.72700000, 27, 1, 7, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 8 );
                g_U64626[8] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 377.73800000, -51.46700000, 5.72700000, 29, 19, 7, 0 )))
            {
                l_U102[8] = 0;
            }
            break;
        }
    }
    return;
}

void sub_5577()
{
    if (g_U64626[9] == 0)
    {
        switch (l_U102[9])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -410.96600000, 18.97100000, 400, 100, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -419.96600000, 18.97100000, 226, 1, 20, 0 ))
                {
                    l_U102[9]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -393.96600000, 18.97100000, 226, 1, 20, 0 ))
                {
                    l_U102[9] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -393.96600000, 18.97100000, 226, 1, 20, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 9 );
                g_U64626[9] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -406.96600000, 18.97100000, 230, 25, 20, 0 )))
            {
                l_U102[9] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -419.96600000, 18.97100000, 226, 1, 20, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 9 );
                g_U64626[9] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), 567.79200000, -406.96600000, 18.97100000, 230, 25, 20, 0 )))
            {
                l_U102[9] = 0;
            }
            break;
        }
    }
    return;
}

void sub_6076()
{
    if (g_U64626[10] == 0)
    {
        switch (l_U102[10])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1420.03000000, -154.40600000, 24.01900000, 100, 300, 150, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1407.03000000, -154.40600000, 24.01900000, 1, 85, 24, 0 ))
                {
                    l_U102[10]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1438.04300000, -154.40600000, 24.01900000, 1, 85, 24, 0 ))
                {
                    l_U102[10] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1438.04300000, -154.40600000, 24.01900000, 1, 85, 24, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 10 );
                g_U64626[10] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1423.04300000, -154.40600000, 25.01900000, 24, 88, 24, 0 )))
            {
                l_U102[10] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1407.03000000, -154.40600000, 24.01900000, 1, 85, 24, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 10 );
                g_U64626[10] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1423.04300000, -154.40600000, 25.01900000, 24, 88, 24, 0 )))
            {
                l_U102[10] = 0;
            }
            break;
        }
    }
    return;
}

void sub_6582()
{
    if (g_U64626[11] == 0)
    {
        switch (l_U102[11])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1520.06000000, -154.07200000, 4.21100000, 100, 200, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1532.06000000, -154.07200000, 4.21100000, 1, 39, 5, 0 ))
                {
                    l_U102[11]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1505.06000000, -154.07000000, 4.21100000, 1, 39, 5, 0 ))
                {
                    l_U102[11] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1505.06000000, -154.07000000, 4.21100000, 1, 39, 5, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 11 );
                g_U64626[11] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1517.06000000, -154.07200000, 4.21100000, 20, 41, 5, 0 )))
            {
                l_U102[11] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1532.06000000, -154.07200000, 4.21100000, 1, 39, 5, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 11 );
                g_U64626[11] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1517.06000000, -154.07200000, 4.21100000, 20, 41, 5, 0 )))
            {
                l_U102[11] = 0;
            }
            break;
        }
    }
    return;
}

void sub_7088()
{
    if (g_U64626[12] == 0)
    {
        switch (l_U102[12])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1750.10300000, -126.69000000, 6.99600000, 100, 200, 100, 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1763.10300000, -126.69000000, 6.99600000, 1, 45, 8, 0 ))
                {
                    l_U102[12]++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1738.10300000, -126.69000000, 6.99600000, 1, 45, 8, 0 ))
                {
                    l_U102[12] = 2;
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1738.10300000, -126.69000000, 6.99600000, 1, 45, 8, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 12 );
                g_U64626[12] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1750.10300000, -126.69000000, 6.99600000, 20, 47, 8, 0 )))
            {
                l_U102[12] = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1763.10300000, -126.69000000, 6.99600000, 1, 45, 8, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 12 );
                g_U64626[12] = 1;
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1750.10300000, -126.69000000, 6.99600000, 20, 47, 8, 0 )))
            {
                l_U102[12] = 0;
            }
            break;
        }
    }
    return;
}

void sub_7594()
{
    if (g_U64626[13] == 0)
    {
        switch (l_U102[13])
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_121(), -1800.10300000, -250.69000000, 49, 100, 100, 100, 0 ))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), -1788.06300000, 65279, 48, 63669, 65449, 0.11400000, 4, 0 ))
                {
                    l_U102[13]++;
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), -1826.06300000, -255.75900000, 50.11400000, -1898.06300000, -105.75900000, 0.11400000, 4, 0 ))
                {
                    l_U102[13] = 2;
                }
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), -1826.06300000, -255.75900000, 50.11400000, -1898.06300000, -105.75900000, 0.11400000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 13 );
                g_U64626[13] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 63748, 65279, 48, 63669, 65449, 0.11400000, 48, 0 )))
            {
                l_U102[13] = 0;
            }
            break;
            case 2:
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), -1788.06300000, 65279, 48, 63669, 65449, 0.11400000, 4, 0 ))
            {
                INCREMENT_INT_STAT( 281, 1 );
                sub_1081( 13 );
                g_U64626[13] = 1;
            }
            else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_121(), 63748, 65279, 48, 63669, 65449, 0.11400000, 48, 0 )))
            {
                l_U102[13] = 0;
            }
            break;
        }
    }
    return;
}

void sub_8137()
{
    if (sub_8146() == 1)
    {
        AWARD_ACHIEVEMENT( 32 );
        sub_8240();
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

int sub_8146()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        if (g_U64626[I] == 0)
        {
            return 0;
        }
        if (I == 13)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8240()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        if (DOES_BLIP_EXIST( l_U120[I] ))
        {
            REMOVE_BLIP( l_U120[I] );
        }
    }
    l_U119 = 1;
    return;
}

